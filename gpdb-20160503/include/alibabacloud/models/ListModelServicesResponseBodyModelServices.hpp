// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSERVICESRESPONSEBODYMODELSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSERVICESRESPONSEBODYMODELSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListModelServicesResponseBodyModelServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelServicesResponseBodyModelServices& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodes, aiNodes_);
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(PrivateConnUrl, privateConnUrl_);
      DARABONBA_PTR_TO_JSON(PublicConnUrl, publicConnUrl_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelServicesResponseBodyModelServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodes, aiNodes_);
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(PrivateConnUrl, privateConnUrl_);
      DARABONBA_PTR_FROM_JSON(PublicConnUrl, publicConnUrl_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListModelServicesResponseBodyModelServices() = default ;
    ListModelServicesResponseBodyModelServices(const ListModelServicesResponseBodyModelServices &) = default ;
    ListModelServicesResponseBodyModelServices(ListModelServicesResponseBodyModelServices &&) = default ;
    ListModelServicesResponseBodyModelServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelServicesResponseBodyModelServices() = default ;
    ListModelServicesResponseBodyModelServices& operator=(const ListModelServicesResponseBodyModelServices &) = default ;
    ListModelServicesResponseBodyModelServices& operator=(ListModelServicesResponseBodyModelServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiNodes_ != nullptr
        && this->apiKey_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->modelName_ != nullptr && this->modelParams_ != nullptr
        && this->modelServiceId_ != nullptr && this->privateConnUrl_ != nullptr && this->publicConnUrl_ != nullptr && this->securityIPList_ != nullptr && this->status_ != nullptr; };
    // aiNodes Field Functions 
    bool hasAiNodes() const { return this->aiNodes_ != nullptr;};
    void deleteAiNodes() { this->aiNodes_ = nullptr;};
    inline const vector<string> & aiNodes() const { DARABONBA_PTR_GET_CONST(aiNodes_, vector<string>) };
    inline vector<string> aiNodes() { DARABONBA_PTR_GET(aiNodes_, vector<string>) };
    inline ListModelServicesResponseBodyModelServices& setAiNodes(const vector<string> & aiNodes) { DARABONBA_PTR_SET_VALUE(aiNodes_, aiNodes) };
    inline ListModelServicesResponseBodyModelServices& setAiNodes(vector<string> && aiNodes) { DARABONBA_PTR_SET_RVALUE(aiNodes_, aiNodes) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ListModelServicesResponseBodyModelServices& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListModelServicesResponseBodyModelServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListModelServicesResponseBodyModelServices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListModelServicesResponseBodyModelServices& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline const map<string, string> & modelParams() const { DARABONBA_PTR_GET_CONST(modelParams_, map<string, string>) };
    inline map<string, string> modelParams() { DARABONBA_PTR_GET(modelParams_, map<string, string>) };
    inline ListModelServicesResponseBodyModelServices& setModelParams(const map<string, string> & modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };
    inline ListModelServicesResponseBodyModelServices& setModelParams(map<string, string> && modelParams) { DARABONBA_PTR_SET_RVALUE(modelParams_, modelParams) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string modelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline ListModelServicesResponseBodyModelServices& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // privateConnUrl Field Functions 
    bool hasPrivateConnUrl() const { return this->privateConnUrl_ != nullptr;};
    void deletePrivateConnUrl() { this->privateConnUrl_ = nullptr;};
    inline string privateConnUrl() const { DARABONBA_PTR_GET_DEFAULT(privateConnUrl_, "") };
    inline ListModelServicesResponseBodyModelServices& setPrivateConnUrl(string privateConnUrl) { DARABONBA_PTR_SET_VALUE(privateConnUrl_, privateConnUrl) };


    // publicConnUrl Field Functions 
    bool hasPublicConnUrl() const { return this->publicConnUrl_ != nullptr;};
    void deletePublicConnUrl() { this->publicConnUrl_ = nullptr;};
    inline string publicConnUrl() const { DARABONBA_PTR_GET_DEFAULT(publicConnUrl_, "") };
    inline ListModelServicesResponseBodyModelServices& setPublicConnUrl(string publicConnUrl) { DARABONBA_PTR_SET_VALUE(publicConnUrl_, publicConnUrl) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ListModelServicesResponseBodyModelServices& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListModelServicesResponseBodyModelServices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<string>> aiNodes_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<map<string, string>> modelParams_ = nullptr;
    std::shared_ptr<string> modelServiceId_ = nullptr;
    std::shared_ptr<string> privateConnUrl_ = nullptr;
    std::shared_ptr<string> publicConnUrl_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
