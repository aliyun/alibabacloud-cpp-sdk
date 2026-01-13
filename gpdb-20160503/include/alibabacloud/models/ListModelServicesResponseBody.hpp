// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSERVICESRESPONSEBODY_HPP_
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
  class ListModelServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelServices, modelServices_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelServices, modelServices_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListModelServicesResponseBody() = default ;
    ListModelServicesResponseBody(const ListModelServicesResponseBody &) = default ;
    ListModelServicesResponseBody(ListModelServicesResponseBody &&) = default ;
    ListModelServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelServicesResponseBody() = default ;
    ListModelServicesResponseBody& operator=(const ListModelServicesResponseBody &) = default ;
    ListModelServicesResponseBody& operator=(ListModelServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelServices& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ModelServices& obj) { 
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
      ModelServices() = default ;
      ModelServices(const ModelServices &) = default ;
      ModelServices(ModelServices &&) = default ;
      ModelServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelServices() = default ;
      ModelServices& operator=(const ModelServices &) = default ;
      ModelServices& operator=(ModelServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aiNodes_ == nullptr
        && this->apiKey_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->modelName_ == nullptr && this->modelParams_ == nullptr
        && this->modelServiceId_ == nullptr && this->privateConnUrl_ == nullptr && this->publicConnUrl_ == nullptr && this->securityIPList_ == nullptr && this->status_ == nullptr; };
      // aiNodes Field Functions 
      bool hasAiNodes() const { return this->aiNodes_ != nullptr;};
      void deleteAiNodes() { this->aiNodes_ = nullptr;};
      inline const vector<string> & getAiNodes() const { DARABONBA_PTR_GET_CONST(aiNodes_, vector<string>) };
      inline vector<string> getAiNodes() { DARABONBA_PTR_GET(aiNodes_, vector<string>) };
      inline ModelServices& setAiNodes(const vector<string> & aiNodes) { DARABONBA_PTR_SET_VALUE(aiNodes_, aiNodes) };
      inline ModelServices& setAiNodes(vector<string> && aiNodes) { DARABONBA_PTR_SET_RVALUE(aiNodes_, aiNodes) };


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline ModelServices& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ModelServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ModelServices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline ModelServices& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelParams Field Functions 
      bool hasModelParams() const { return this->modelParams_ != nullptr;};
      void deleteModelParams() { this->modelParams_ = nullptr;};
      inline const map<string, string> & getModelParams() const { DARABONBA_PTR_GET_CONST(modelParams_, map<string, string>) };
      inline map<string, string> getModelParams() { DARABONBA_PTR_GET(modelParams_, map<string, string>) };
      inline ModelServices& setModelParams(const map<string, string> & modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };
      inline ModelServices& setModelParams(map<string, string> && modelParams) { DARABONBA_PTR_SET_RVALUE(modelParams_, modelParams) };


      // modelServiceId Field Functions 
      bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
      void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
      inline string getModelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
      inline ModelServices& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


      // privateConnUrl Field Functions 
      bool hasPrivateConnUrl() const { return this->privateConnUrl_ != nullptr;};
      void deletePrivateConnUrl() { this->privateConnUrl_ = nullptr;};
      inline string getPrivateConnUrl() const { DARABONBA_PTR_GET_DEFAULT(privateConnUrl_, "") };
      inline ModelServices& setPrivateConnUrl(string privateConnUrl) { DARABONBA_PTR_SET_VALUE(privateConnUrl_, privateConnUrl) };


      // publicConnUrl Field Functions 
      bool hasPublicConnUrl() const { return this->publicConnUrl_ != nullptr;};
      void deletePublicConnUrl() { this->publicConnUrl_ = nullptr;};
      inline string getPublicConnUrl() const { DARABONBA_PTR_GET_DEFAULT(publicConnUrl_, "") };
      inline ModelServices& setPublicConnUrl(string publicConnUrl) { DARABONBA_PTR_SET_VALUE(publicConnUrl_, publicConnUrl) };


      // securityIPList Field Functions 
      bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
      void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
      inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
      inline ModelServices& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ModelServices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // A list of AI nodes for model deployment.
      shared_ptr<vector<string>> aiNodes_ {};
      // The API key.
      shared_ptr<string> apiKey_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The model name.
      shared_ptr<string> modelName_ {};
      // Model service parameters (not available).
      shared_ptr<map<string, string>> modelParams_ {};
      // Model service ID.
      shared_ptr<string> modelServiceId_ {};
      // Private Endpoint.
      shared_ptr<string> privateConnUrl_ {};
      // Public endpoint.
      shared_ptr<string> publicConnUrl_ {};
      // The IP addresses listed in the whitelist. Up to 1,000 IP addresses are contained in a whitelist and separated by commas (,). The IP addresses must use one of the following formats:
      // 
      // *   0.0.0.0/0
      // *   10.23.12.24(IP)
      // *   10.23.12.24/24 (This is a CIDR block. The value`/24`indicates the network prefix length, which must be an integer and in the range of `[1,32]`.)
      shared_ptr<string> securityIPList_ {};
      // The status of the operation. Valid values:
      // 
      // *   **success**
      // *   **fail**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->modelServices_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // modelServices Field Functions 
    bool hasModelServices() const { return this->modelServices_ != nullptr;};
    void deleteModelServices() { this->modelServices_ = nullptr;};
    inline const vector<ListModelServicesResponseBody::ModelServices> & getModelServices() const { DARABONBA_PTR_GET_CONST(modelServices_, vector<ListModelServicesResponseBody::ModelServices>) };
    inline vector<ListModelServicesResponseBody::ModelServices> getModelServices() { DARABONBA_PTR_GET(modelServices_, vector<ListModelServicesResponseBody::ModelServices>) };
    inline ListModelServicesResponseBody& setModelServices(const vector<ListModelServicesResponseBody::ModelServices> & modelServices) { DARABONBA_PTR_SET_VALUE(modelServices_, modelServices) };
    inline ListModelServicesResponseBody& setModelServices(vector<ListModelServicesResponseBody::ModelServices> && modelServices) { DARABONBA_PTR_SET_RVALUE(modelServices_, modelServices) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelServicesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListModelServicesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListModelServicesResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Model services.
    shared_ptr<vector<ListModelServicesResponseBody::ModelServices>> modelServices_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
