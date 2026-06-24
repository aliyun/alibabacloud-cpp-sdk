// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMTEMPLATESRESPONSEBODY_HPP_
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
  class ListLlmTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLlmTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLlmTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLlmTemplatesResponseBody() = default ;
    ListLlmTemplatesResponseBody(const ListLlmTemplatesResponseBody &) = default ;
    ListLlmTemplatesResponseBody(ListLlmTemplatesResponseBody &&) = default ;
    ListLlmTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLlmTemplatesResponseBody() = default ;
    ListLlmTemplatesResponseBody& operator=(const ListLlmTemplatesResponseBody &) = default ;
    ListLlmTemplatesResponseBody& operator=(ListLlmTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefaultModel, isDefaultModel_);
        DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
        DARABONBA_PTR_TO_JSON(LlmTemplateId, llmTemplateId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefaultModel, isDefaultModel_);
        DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
        DARABONBA_PTR_FROM_JSON(LlmTemplateId, llmTemplateId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
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
        && this->description_ == nullptr && this->isDefaultModel_ == nullptr && this->llmCode_ == nullptr && this->llmTemplateId_ == nullptr && this->name_ == nullptr
        && this->providerTemplateId_ == nullptr; };
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


      // isDefaultModel Field Functions 
      bool hasIsDefaultModel() const { return this->isDefaultModel_ != nullptr;};
      void deleteIsDefaultModel() { this->isDefaultModel_ = nullptr;};
      inline bool getIsDefaultModel() const { DARABONBA_PTR_GET_DEFAULT(isDefaultModel_, false) };
      inline Data& setIsDefaultModel(bool isDefaultModel) { DARABONBA_PTR_SET_VALUE(isDefaultModel_, isDefaultModel) };


      // llmCode Field Functions 
      bool hasLlmCode() const { return this->llmCode_ != nullptr;};
      void deleteLlmCode() { this->llmCode_ = nullptr;};
      inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
      inline Data& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


      // llmTemplateId Field Functions 
      bool hasLlmTemplateId() const { return this->llmTemplateId_ != nullptr;};
      void deleteLlmTemplateId() { this->llmTemplateId_ = nullptr;};
      inline string getLlmTemplateId() const { DARABONBA_PTR_GET_DEFAULT(llmTemplateId_, "") };
      inline Data& setLlmTemplateId(string llmTemplateId) { DARABONBA_PTR_SET_VALUE(llmTemplateId_, llmTemplateId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // providerTemplateId Field Functions 
      bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
      void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
      inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
      inline Data& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


    protected:
      // The model configuration JSON object.
      shared_ptr<string> config_ {};
      // The template description.
      shared_ptr<string> description_ {};
      // Indicates whether this is the default model in the associated model group.
      shared_ptr<bool> isDefaultModel_ {};
      // The model code.
      shared_ptr<string> llmCode_ {};
      // The model template ID.
      shared_ptr<string> llmTemplateId_ {};
      // The template name.
      shared_ptr<string> name_ {};
      // The ID of the model provider template.
      shared_ptr<string> providerTemplateId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListLlmTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListLlmTemplatesResponseBody::Data>) };
    inline vector<ListLlmTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListLlmTemplatesResponseBody::Data>) };
    inline ListLlmTemplatesResponseBody& setData(const vector<ListLlmTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLlmTemplatesResponseBody& setData(vector<ListLlmTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLlmTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLlmTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLlmTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLlmTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of returned data objects.
    shared_ptr<vector<ListLlmTemplatesResponseBody::Data>> data_ {};
    // The page number of the current page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
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
