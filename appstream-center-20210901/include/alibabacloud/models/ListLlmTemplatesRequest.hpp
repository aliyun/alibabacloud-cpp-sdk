// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMTEMPLATESREQUEST_HPP_
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
  class ListLlmTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLlmTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
      DARABONBA_PTR_TO_JSON(LlmTemplateIds, llmTemplateIds_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLlmTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
      DARABONBA_PTR_FROM_JSON(LlmTemplateIds, llmTemplateIds_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
    };
    ListLlmTemplatesRequest() = default ;
    ListLlmTemplatesRequest(const ListLlmTemplatesRequest &) = default ;
    ListLlmTemplatesRequest(ListLlmTemplatesRequest &&) = default ;
    ListLlmTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLlmTemplatesRequest() = default ;
    ListLlmTemplatesRequest& operator=(const ListLlmTemplatesRequest &) = default ;
    ListLlmTemplatesRequest& operator=(ListLlmTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmCode_ == nullptr
        && this->llmTemplateIds_ == nullptr && this->modelTemplateId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->providerTemplateId_ == nullptr; };
    // llmCode Field Functions 
    bool hasLlmCode() const { return this->llmCode_ != nullptr;};
    void deleteLlmCode() { this->llmCode_ = nullptr;};
    inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
    inline ListLlmTemplatesRequest& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


    // llmTemplateIds Field Functions 
    bool hasLlmTemplateIds() const { return this->llmTemplateIds_ != nullptr;};
    void deleteLlmTemplateIds() { this->llmTemplateIds_ = nullptr;};
    inline const vector<string> & getLlmTemplateIds() const { DARABONBA_PTR_GET_CONST(llmTemplateIds_, vector<string>) };
    inline vector<string> getLlmTemplateIds() { DARABONBA_PTR_GET(llmTemplateIds_, vector<string>) };
    inline ListLlmTemplatesRequest& setLlmTemplateIds(const vector<string> & llmTemplateIds) { DARABONBA_PTR_SET_VALUE(llmTemplateIds_, llmTemplateIds) };
    inline ListLlmTemplatesRequest& setLlmTemplateIds(vector<string> && llmTemplateIds) { DARABONBA_PTR_SET_RVALUE(llmTemplateIds_, llmTemplateIds) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline ListLlmTemplatesRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLlmTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLlmTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline ListLlmTemplatesRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


  protected:
    // The model code used for filtering. Fuzzy match is supported.
    shared_ptr<string> llmCode_ {};
    // The model template IDs used for filtering.
    shared_ptr<vector<string>> llmTemplateIds_ {};
    // The ID of the associated model group.
    shared_ptr<string> modelTemplateId_ {};
    // The page number. Pages start from page 1. Values 0 and 1 return the same result.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the model provider template.
    shared_ptr<string> providerTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
