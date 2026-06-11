// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class ListPromptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_TO_JSON(Search, search_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
    };
    ListPromptsRequest() = default ;
    ListPromptsRequest(const ListPromptsRequest &) = default ;
    ListPromptsRequest(ListPromptsRequest &&) = default ;
    ListPromptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptsRequest() = default ;
    ListPromptsRequest& operator=(const ListPromptsRequest &) = default ;
    ListPromptsRequest& operator=(ListPromptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->namespaceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->promptKey_ == nullptr && this->search_ == nullptr; };
    // bizTags Field Functions 
    bool hasBizTags() const { return this->bizTags_ != nullptr;};
    void deleteBizTags() { this->bizTags_ = nullptr;};
    inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
    inline ListPromptsRequest& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListPromptsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListPromptsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPromptsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // promptKey Field Functions 
    bool hasPromptKey() const { return this->promptKey_ != nullptr;};
    void deletePromptKey() { this->promptKey_ = nullptr;};
    inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
    inline ListPromptsRequest& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListPromptsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


  protected:
    shared_ptr<string> bizTags_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> promptKey_ {};
    shared_ptr<string> search_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
