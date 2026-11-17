// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATMESSAGECONTENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATMESSAGECONTENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListChatMessageContentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatMessageContentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxCharsPerAttachment, maxCharsPerAttachment_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatMessageContentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxCharsPerAttachment, maxCharsPerAttachment_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListChatMessageContentsRequest() = default ;
    ListChatMessageContentsRequest(const ListChatMessageContentsRequest &) = default ;
    ListChatMessageContentsRequest(ListChatMessageContentsRequest &&) = default ;
    ListChatMessageContentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatMessageContentsRequest() = default ;
    ListChatMessageContentsRequest& operator=(const ListChatMessageContentsRequest &) = default ;
    ListChatMessageContentsRequest& operator=(ListChatMessageContentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxCharsPerAttachment_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // maxCharsPerAttachment Field Functions 
    bool hasMaxCharsPerAttachment() const { return this->maxCharsPerAttachment_ != nullptr;};
    void deleteMaxCharsPerAttachment() { this->maxCharsPerAttachment_ = nullptr;};
    inline int32_t getMaxCharsPerAttachment() const { DARABONBA_PTR_GET_DEFAULT(maxCharsPerAttachment_, 0) };
    inline ListChatMessageContentsRequest& setMaxCharsPerAttachment(int32_t maxCharsPerAttachment) { DARABONBA_PTR_SET_VALUE(maxCharsPerAttachment_, maxCharsPerAttachment) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListChatMessageContentsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChatMessageContentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListChatMessageContentsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListChatMessageContentsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The maximum length of the attachment content.
    shared_ptr<int32_t> maxCharsPerAttachment_ {};
    // The page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the data source.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
