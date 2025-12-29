// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSAGESTATISTICSBYTAGIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSAGESTATISTICSBYTAGIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryUsageStatisticsByTagIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUsageStatisticsByTagIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUsageStatisticsByTagIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    QueryUsageStatisticsByTagIdRequest() = default ;
    QueryUsageStatisticsByTagIdRequest(const QueryUsageStatisticsByTagIdRequest &) = default ;
    QueryUsageStatisticsByTagIdRequest(QueryUsageStatisticsByTagIdRequest &&) = default ;
    QueryUsageStatisticsByTagIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUsageStatisticsByTagIdRequest() = default ;
    QueryUsageStatisticsByTagIdRequest& operator=(const QueryUsageStatisticsByTagIdRequest &) = default ;
    QueryUsageStatisticsByTagIdRequest& operator=(QueryUsageStatisticsByTagIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tagId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline QueryUsageStatisticsByTagIdRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryUsageStatisticsByTagIdRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryUsageStatisticsByTagIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryUsageStatisticsByTagIdRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryUsageStatisticsByTagIdRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryUsageStatisticsByTagIdRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryUsageStatisticsByTagIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
    inline QueryUsageStatisticsByTagIdRequest& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The beginning of the time range to query.
    shared_ptr<string> beginTime_ {};
    // The end of the time range to query.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag ID.
    shared_ptr<int64_t> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
