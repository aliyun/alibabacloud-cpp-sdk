// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETSELECTIONTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETSELECTIONTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetSelectionTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetSelectionTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetSelectionTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
    };
    ListAssetSelectionTargetRequest() = default ;
    ListAssetSelectionTargetRequest(const ListAssetSelectionTargetRequest &) = default ;
    ListAssetSelectionTargetRequest(ListAssetSelectionTargetRequest &&) = default ;
    ListAssetSelectionTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetSelectionTargetRequest() = default ;
    ListAssetSelectionTargetRequest& operator=(const ListAssetSelectionTargetRequest &) = default ;
    ListAssetSelectionTargetRequest& operator=(ListAssetSelectionTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr && this->selectionKey_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAssetSelectionTargetRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAssetSelectionTargetRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string selectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline ListAssetSelectionTargetRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


  protected:
    // The number of the page to return. Pages start from page 1. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The globally unique identifier (GUID) of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> selectionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
