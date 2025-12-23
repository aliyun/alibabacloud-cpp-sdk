// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeploymentJobResourceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeploymentJobResourceResponseBody() = default ;
    ListDeploymentJobResourceResponseBody(const ListDeploymentJobResourceResponseBody &) = default ;
    ListDeploymentJobResourceResponseBody(ListDeploymentJobResourceResponseBody &&) = default ;
    ListDeploymentJobResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobResourceResponseBody() = default ;
    ListDeploymentJobResourceResponseBody& operator=(const ListDeploymentJobResourceResponseBody &) = default ;
    ListDeploymentJobResourceResponseBody& operator=(ListDeploymentJobResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDeploymentJobResourceResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDeploymentJobResourceResponseBodyData>) };
    inline vector<ListDeploymentJobResourceResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListDeploymentJobResourceResponseBodyData>) };
    inline ListDeploymentJobResourceResponseBody& setData(const vector<ListDeploymentJobResourceResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeploymentJobResourceResponseBody& setData(vector<ListDeploymentJobResourceResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentJobResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<vector<ListDeploymentJobResourceResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
