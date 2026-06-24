// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelProviderTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProviderTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProviderTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelProviderTemplatesResponseBody() = default ;
    ListModelProviderTemplatesResponseBody(const ListModelProviderTemplatesResponseBody &) = default ;
    ListModelProviderTemplatesResponseBody(ListModelProviderTemplatesResponseBody &&) = default ;
    ListModelProviderTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProviderTemplatesResponseBody() = default ;
    ListModelProviderTemplatesResponseBody& operator=(const ListModelProviderTemplatesResponseBody &) = default ;
    ListModelProviderTemplatesResponseBody& operator=(ListModelProviderTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableWuyingProxy, enableWuyingProxy_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
        DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
        DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableWuyingProxy, enableWuyingProxy_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
        DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
        DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->description_ == nullptr && this->enableWuyingProxy_ == nullptr && this->name_ == nullptr && this->providerName_ == nullptr && this->providerTemplateId_ == nullptr
        && this->providerType_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Data& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableWuyingProxy Field Functions 
      bool hasEnableWuyingProxy() const { return this->enableWuyingProxy_ != nullptr;};
      void deleteEnableWuyingProxy() { this->enableWuyingProxy_ = nullptr;};
      inline bool getEnableWuyingProxy() const { DARABONBA_PTR_GET_DEFAULT(enableWuyingProxy_, false) };
      inline Data& setEnableWuyingProxy(bool enableWuyingProxy) { DARABONBA_PTR_SET_VALUE(enableWuyingProxy_, enableWuyingProxy) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline Data& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // providerTemplateId Field Functions 
      bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
      void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
      inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
      inline Data& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


      // providerType Field Functions 
      bool hasProviderType() const { return this->providerType_ != nullptr;};
      void deleteProviderType() { this->providerType_ = nullptr;};
      inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
      inline Data& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    protected:
      // The model provider configuration as a JSON object.
      shared_ptr<string> config_ {};
      // The description of the model provider template.
      shared_ptr<string> description_ {};
      // Indicates whether the WUYING secure gateway proxy is enabled.
      shared_ptr<bool> enableWuyingProxy_ {};
      // The name of the model provider template.
      shared_ptr<string> name_ {};
      // The name of the model provider.
      shared_ptr<string> providerName_ {};
      // The model provider template ID.
      shared_ptr<string> providerTemplateId_ {};
      // The model provider type.
      shared_ptr<string> providerType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListModelProviderTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListModelProviderTemplatesResponseBody::Data>) };
    inline vector<ListModelProviderTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListModelProviderTemplatesResponseBody::Data>) };
    inline ListModelProviderTemplatesResponseBody& setData(const vector<ListModelProviderTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListModelProviderTemplatesResponseBody& setData(vector<ListModelProviderTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelProviderTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelProviderTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelProviderTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListModelProviderTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of returned data objects.
    shared_ptr<vector<ListModelProviderTemplatesResponseBody::Data>> data_ {};
    // The page number of the current query result.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page in the query result.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
