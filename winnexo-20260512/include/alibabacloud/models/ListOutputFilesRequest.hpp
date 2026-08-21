// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTPUTFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTPUTFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListOutputFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutputFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(itemType, itemType_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sharedOnly, sharedOnly_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutputFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(itemType, itemType_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sharedOnly, sharedOnly_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListOutputFilesRequest() = default ;
    ListOutputFilesRequest(const ListOutputFilesRequest &) = default ;
    ListOutputFilesRequest(ListOutputFilesRequest &&) = default ;
    ListOutputFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutputFilesRequest() = default ;
    ListOutputFilesRequest& operator=(const ListOutputFilesRequest &) = default ;
    ListOutputFilesRequest& operator=(ListOutputFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->itemType_ == nullptr
        && this->keyword_ == nullptr && this->operatingObjectName_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->sharedOnly_ == nullptr
        && this->tenantId_ == nullptr; };
    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline ListOutputFilesRequest& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListOutputFilesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListOutputFilesRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListOutputFilesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOutputFilesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sharedOnly Field Functions 
    bool hasSharedOnly() const { return this->sharedOnly_ != nullptr;};
    void deleteSharedOnly() { this->sharedOnly_ = nullptr;};
    inline bool getSharedOnly() const { DARABONBA_PTR_GET_DEFAULT(sharedOnly_, false) };
    inline ListOutputFilesRequest& setSharedOnly(bool sharedOnly) { DARABONBA_PTR_SET_VALUE(sharedOnly_, sharedOnly) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListOutputFilesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The type of the output item. Valid values: ppt, html, document, picture, slides, video, audio, email, and others.
    shared_ptr<string> itemType_ {};
    // The keyword for searching. Matches output titles or item names.
    shared_ptr<string> keyword_ {};
    // The name of the digital employee (operating object). Used to filter results by name.
    shared_ptr<string> operatingObjectName_ {};
    // The page number, starting from 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // Specifies whether to display only outputs and output items that have sharing enabled.
    shared_ptr<bool> sharedOnly_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass it explicitly with --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
