// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModelServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodes, aiNodes_);
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_ANY_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(PrivateConnectUrl, privateConnectUrl_);
      DARABONBA_PTR_TO_JSON(PublicConnectUrl, publicConnectUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodes, aiNodes_);
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_ANY_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(PrivateConnectUrl, privateConnectUrl_);
      DARABONBA_PTR_FROM_JSON(PublicConnectUrl, publicConnectUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeModelServiceResponseBody() = default ;
    DescribeModelServiceResponseBody(const DescribeModelServiceResponseBody &) = default ;
    DescribeModelServiceResponseBody(DescribeModelServiceResponseBody &&) = default ;
    DescribeModelServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelServiceResponseBody() = default ;
    DescribeModelServiceResponseBody& operator=(const DescribeModelServiceResponseBody &) = default ;
    DescribeModelServiceResponseBody& operator=(DescribeModelServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiNodes_ != nullptr
        && this->apiKey_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->modelName_ != nullptr && this->modelParams_ != nullptr
        && this->modelServiceId_ != nullptr && this->privateConnectUrl_ != nullptr && this->publicConnectUrl_ != nullptr && this->requestId_ != nullptr && this->securityIpList_ != nullptr
        && this->status_ != nullptr; };
    // aiNodes Field Functions 
    bool hasAiNodes() const { return this->aiNodes_ != nullptr;};
    void deleteAiNodes() { this->aiNodes_ = nullptr;};
    inline const vector<string> & aiNodes() const { DARABONBA_PTR_GET_CONST(aiNodes_, vector<string>) };
    inline vector<string> aiNodes() { DARABONBA_PTR_GET(aiNodes_, vector<string>) };
    inline DescribeModelServiceResponseBody& setAiNodes(const vector<string> & aiNodes) { DARABONBA_PTR_SET_VALUE(aiNodes_, aiNodes) };
    inline DescribeModelServiceResponseBody& setAiNodes(vector<string> && aiNodes) { DARABONBA_PTR_SET_RVALUE(aiNodes_, aiNodes) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeModelServiceResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeModelServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeModelServiceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeModelServiceResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline     const Darabonba::Json & modelParams() const { DARABONBA_GET(modelParams_) };
    Darabonba::Json & modelParams() { DARABONBA_GET(modelParams_) };
    inline DescribeModelServiceResponseBody& setModelParams(const Darabonba::Json & modelParams) { DARABONBA_SET_VALUE(modelParams_, modelParams) };
    inline DescribeModelServiceResponseBody& setModelParams(Darabonba::Json & modelParams) { DARABONBA_SET_RVALUE(modelParams_, modelParams) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string modelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline DescribeModelServiceResponseBody& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // privateConnectUrl Field Functions 
    bool hasPrivateConnectUrl() const { return this->privateConnectUrl_ != nullptr;};
    void deletePrivateConnectUrl() { this->privateConnectUrl_ = nullptr;};
    inline string privateConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(privateConnectUrl_, "") };
    inline DescribeModelServiceResponseBody& setPrivateConnectUrl(string privateConnectUrl) { DARABONBA_PTR_SET_VALUE(privateConnectUrl_, privateConnectUrl) };


    // publicConnectUrl Field Functions 
    bool hasPublicConnectUrl() const { return this->publicConnectUrl_ != nullptr;};
    void deletePublicConnectUrl() { this->publicConnectUrl_ = nullptr;};
    inline string publicConnectUrl() const { DARABONBA_PTR_GET_DEFAULT(publicConnectUrl_, "") };
    inline DescribeModelServiceResponseBody& setPublicConnectUrl(string publicConnectUrl) { DARABONBA_PTR_SET_VALUE(publicConnectUrl_, publicConnectUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIpList Field Functions 
    bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
    void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
    inline string securityIpList() const { DARABONBA_PTR_GET_DEFAULT(securityIpList_, "") };
    inline DescribeModelServiceResponseBody& setSecurityIpList(string securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeModelServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<string>> aiNodes_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    Darabonba::Json modelParams_ = nullptr;
    std::shared_ptr<string> modelServiceId_ = nullptr;
    std::shared_ptr<string> privateConnectUrl_ = nullptr;
    std::shared_ptr<string> publicConnectUrl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> securityIpList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
