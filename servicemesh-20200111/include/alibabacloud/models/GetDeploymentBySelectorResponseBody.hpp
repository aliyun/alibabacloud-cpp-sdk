// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTBYSELECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTBYSELECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetDeploymentBySelectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentBySelectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentNameList, deploymentNameList_);
      DARABONBA_PTR_TO_JSON(Mark, mark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentBySelectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentNameList, deploymentNameList_);
      DARABONBA_PTR_FROM_JSON(Mark, mark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDeploymentBySelectorResponseBody() = default ;
    GetDeploymentBySelectorResponseBody(const GetDeploymentBySelectorResponseBody &) = default ;
    GetDeploymentBySelectorResponseBody(GetDeploymentBySelectorResponseBody &&) = default ;
    GetDeploymentBySelectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentBySelectorResponseBody() = default ;
    GetDeploymentBySelectorResponseBody& operator=(const GetDeploymentBySelectorResponseBody &) = default ;
    GetDeploymentBySelectorResponseBody& operator=(GetDeploymentBySelectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentNameList_ == nullptr
        && return this->mark_ == nullptr && return this->requestId_ == nullptr; };
    // deploymentNameList Field Functions 
    bool hasDeploymentNameList() const { return this->deploymentNameList_ != nullptr;};
    void deleteDeploymentNameList() { this->deploymentNameList_ = nullptr;};
    inline const vector<Darabonba::Bytes> & deploymentNameList() const { DARABONBA_PTR_GET_CONST(deploymentNameList_, vector<Darabonba::Bytes>) };
    inline vector<Darabonba::Bytes> deploymentNameList() { DARABONBA_PTR_GET(deploymentNameList_, vector<Darabonba::Bytes>) };
    inline GetDeploymentBySelectorResponseBody& setDeploymentNameList(const vector<Darabonba::Bytes> & deploymentNameList) { DARABONBA_PTR_SET_VALUE(deploymentNameList_, deploymentNameList) };
    inline GetDeploymentBySelectorResponseBody& setDeploymentNameList(vector<Darabonba::Bytes> && deploymentNameList) { DARABONBA_PTR_SET_RVALUE(deploymentNameList_, deploymentNameList) };


    // mark Field Functions 
    bool hasMark() const { return this->mark_ != nullptr;};
    void deleteMark() { this->mark_ = nullptr;};
    inline string mark() const { DARABONBA_PTR_GET_DEFAULT(mark_, "") };
    inline GetDeploymentBySelectorResponseBody& setMark(string mark) { DARABONBA_PTR_SET_VALUE(mark_, mark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeploymentBySelectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried workloads.
    std::shared_ptr<vector<Darabonba::Bytes>> deploymentNameList_ = nullptr;
    // The end-of-data marker.
    std::shared_ptr<string> mark_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
