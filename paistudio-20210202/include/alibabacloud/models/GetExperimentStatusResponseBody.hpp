// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExperimentStatusResponseBodyNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetExperimentStatusResponseBody() = default ;
    GetExperimentStatusResponseBody(const GetExperimentStatusResponseBody &) = default ;
    GetExperimentStatusResponseBody(GetExperimentStatusResponseBody &&) = default ;
    GetExperimentStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentStatusResponseBody() = default ;
    GetExperimentStatusResponseBody& operator=(const GetExperimentStatusResponseBody &) = default ;
    GetExperimentStatusResponseBody& operator=(GetExperimentStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<GetExperimentStatusResponseBodyNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<GetExperimentStatusResponseBodyNodes>) };
    inline vector<GetExperimentStatusResponseBodyNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<GetExperimentStatusResponseBodyNodes>) };
    inline GetExperimentStatusResponseBody& setNodes(const vector<GetExperimentStatusResponseBodyNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetExperimentStatusResponseBody& setNodes(vector<GetExperimentStatusResponseBodyNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetExperimentStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<GetExperimentStatusResponseBodyNodes>> nodes_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
