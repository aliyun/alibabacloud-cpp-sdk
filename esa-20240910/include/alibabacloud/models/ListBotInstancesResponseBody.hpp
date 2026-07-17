// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBOTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBOTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListBotInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBotInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListBotInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceInfo, instanceInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListBotInstancesResponseBody() = default ;
    ListBotInstancesResponseBody(const ListBotInstancesResponseBody &) = default ;
    ListBotInstancesResponseBody(ListBotInstancesResponseBody &&) = default ;
    ListBotInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBotInstancesResponseBody() = default ;
    ListBotInstancesResponseBody& operator=(const ListBotInstancesResponseBody &) = default ;
    ListBotInstancesResponseBody& operator=(ListBotInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BotInstanceLevel, botInstanceLevel_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ReserveReleaseTime, reserveReleaseTime_);
        DARABONBA_PTR_TO_JSON(SiteInstanceId, siteInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BotInstanceLevel, botInstanceLevel_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ReserveReleaseTime, reserveReleaseTime_);
        DARABONBA_PTR_FROM_JSON(SiteInstanceId, siteInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstanceInfo() = default ;
      InstanceInfo(const InstanceInfo &) = default ;
      InstanceInfo(InstanceInfo &&) = default ;
      InstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceInfo() = default ;
      InstanceInfo& operator=(const InstanceInfo &) = default ;
      InstanceInfo& operator=(InstanceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->botInstanceLevel_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->reserveReleaseTime_ == nullptr && this->siteInstanceId_ == nullptr && this->status_ == nullptr; };
      // botInstanceLevel Field Functions 
      bool hasBotInstanceLevel() const { return this->botInstanceLevel_ != nullptr;};
      void deleteBotInstanceLevel() { this->botInstanceLevel_ = nullptr;};
      inline string getBotInstanceLevel() const { DARABONBA_PTR_GET_DEFAULT(botInstanceLevel_, "") };
      inline InstanceInfo& setBotInstanceLevel(string botInstanceLevel) { DARABONBA_PTR_SET_VALUE(botInstanceLevel_, botInstanceLevel) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // reserveReleaseTime Field Functions 
      bool hasReserveReleaseTime() const { return this->reserveReleaseTime_ != nullptr;};
      void deleteReserveReleaseTime() { this->reserveReleaseTime_ = nullptr;};
      inline string getReserveReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(reserveReleaseTime_, "") };
      inline InstanceInfo& setReserveReleaseTime(string reserveReleaseTime) { DARABONBA_PTR_SET_VALUE(reserveReleaseTime_, reserveReleaseTime) };


      // siteInstanceId Field Functions 
      bool hasSiteInstanceId() const { return this->siteInstanceId_ != nullptr;};
      void deleteSiteInstanceId() { this->siteInstanceId_ = nullptr;};
      inline string getSiteInstanceId() const { DARABONBA_PTR_GET_DEFAULT(siteInstanceId_, "") };
      inline InstanceInfo& setSiteInstanceId(string siteInstanceId) { DARABONBA_PTR_SET_VALUE(siteInstanceId_, siteInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The Bot protection instance level. If this parameter is empty, the plan does not include a Bot protection instance. If a value is returned, the plan includes a Bot protection instance. Valid values:
      // 
      // - enterprise_bot: web edition.
      // 
      // - enterprise_bot_with_app: app edition.
      shared_ptr<string> botInstanceLevel_ {};
      // The time when the instance was purchased. The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The scheduled release time. The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> reserveReleaseTime_ {};
      // The ID of the associated site plan instance.
      shared_ptr<string> siteInstanceId_ {};
      // The instance status. Valid values:
      // - **online**: The instance is running normally.
      // - **offline**: The instance has expired but has not exceeded the retention period and is unavailable.
      // - **disable**: The instance has been released.
      // - **overdue**: The instance has been stopped due to an overdue payment.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceInfo_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // instanceInfo Field Functions 
    bool hasInstanceInfo() const { return this->instanceInfo_ != nullptr;};
    void deleteInstanceInfo() { this->instanceInfo_ = nullptr;};
    inline const vector<ListBotInstancesResponseBody::InstanceInfo> & getInstanceInfo() const { DARABONBA_PTR_GET_CONST(instanceInfo_, vector<ListBotInstancesResponseBody::InstanceInfo>) };
    inline vector<ListBotInstancesResponseBody::InstanceInfo> getInstanceInfo() { DARABONBA_PTR_GET(instanceInfo_, vector<ListBotInstancesResponseBody::InstanceInfo>) };
    inline ListBotInstancesResponseBody& setInstanceInfo(const vector<ListBotInstancesResponseBody::InstanceInfo> & instanceInfo) { DARABONBA_PTR_SET_VALUE(instanceInfo_, instanceInfo) };
    inline ListBotInstancesResponseBody& setInstanceInfo(vector<ListBotInstancesResponseBody::InstanceInfo> && instanceInfo) { DARABONBA_PTR_SET_RVALUE(instanceInfo_, instanceInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBotInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBotInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBotInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBotInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListBotInstancesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The instances that match the specified conditions under the current account.
    shared_ptr<vector<ListBotInstancesResponseBody::InstanceInfo>> instanceInfo_ {};
    // The current page number, which is the same as the PageNumber request parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
