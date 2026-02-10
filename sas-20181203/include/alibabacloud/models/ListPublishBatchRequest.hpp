// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPublishBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchName, batchName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UpgradeVersion, upgradeVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchName, batchName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UpgradeVersion, upgradeVersion_);
    };
    ListPublishBatchRequest() = default ;
    ListPublishBatchRequest(const ListPublishBatchRequest &) = default ;
    ListPublishBatchRequest(ListPublishBatchRequest &&) = default ;
    ListPublishBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishBatchRequest() = default ;
    ListPublishBatchRequest& operator=(const ListPublishBatchRequest &) = default ;
    ListPublishBatchRequest& operator=(ListPublishBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchName_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->upgradeVersion_ == nullptr; };
    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string getBatchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline ListPublishBatchRequest& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListPublishBatchRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublishBatchRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // upgradeVersion Field Functions 
    bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
    void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
    inline string getUpgradeVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeVersion_, "") };
    inline ListPublishBatchRequest& setUpgradeVersion(string upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };


  protected:
    // The name of the release batch.
    shared_ptr<string> batchName_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The destination version of the Security Center agent.
    // 
    // This parameter is required.
    shared_ptr<string> upgradeVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
