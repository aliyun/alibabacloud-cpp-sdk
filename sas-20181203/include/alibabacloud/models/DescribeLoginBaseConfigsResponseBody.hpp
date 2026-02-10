// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGINBASECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLoginBaseConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoginBaseConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaseConfigs, baseConfigs_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoginBaseConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseConfigs, baseConfigs_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoginBaseConfigsResponseBody() = default ;
    DescribeLoginBaseConfigsResponseBody(const DescribeLoginBaseConfigsResponseBody &) = default ;
    DescribeLoginBaseConfigsResponseBody(DescribeLoginBaseConfigsResponseBody &&) = default ;
    DescribeLoginBaseConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoginBaseConfigsResponseBody() = default ;
    DescribeLoginBaseConfigsResponseBody& operator=(const DescribeLoginBaseConfigsResponseBody &) = default ;
    DescribeLoginBaseConfigsResponseBody& operator=(DescribeLoginBaseConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaseConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaseConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TargetList, targetList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UuidCount, uuidCount_);
      };
      friend void from_json(const Darabonba::Json& j, BaseConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UuidCount, uuidCount_);
      };
      BaseConfigs() = default ;
      BaseConfigs(const BaseConfigs &) = default ;
      BaseConfigs(BaseConfigs &&) = default ;
      BaseConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaseConfigs() = default ;
      BaseConfigs& operator=(const BaseConfigs &) = default ;
      BaseConfigs& operator=(BaseConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetList& obj) { 
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, TargetList& obj) { 
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        TargetList() = default ;
        TargetList(const TargetList &) = default ;
        TargetList(TargetList &&) = default ;
        TargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetList() = default ;
        TargetList& operator=(const TargetList &) = default ;
        TargetList& operator=(TargetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->target_ == nullptr
        && this->targetType_ == nullptr; };
        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline TargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline TargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The UUID or group ID of the server.
        shared_ptr<string> target_ {};
        // The type of the server to which the configuration is applied. Valid values:
        // 
        // *   **uuid**: a server
        // *   **groupId**: a server group
        // *   **global**: all servers
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr
        && this->endTime_ == nullptr && this->ip_ == nullptr && this->location_ == nullptr && this->remark_ == nullptr && this->startTime_ == nullptr
        && this->targetList_ == nullptr && this->totalCount_ == nullptr && this->uuidCount_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline BaseConfigs& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline BaseConfigs& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline BaseConfigs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline BaseConfigs& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline BaseConfigs& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline BaseConfigs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // targetList Field Functions 
      bool hasTargetList() const { return this->targetList_ != nullptr;};
      void deleteTargetList() { this->targetList_ = nullptr;};
      inline const vector<BaseConfigs::TargetList> & getTargetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<BaseConfigs::TargetList>) };
      inline vector<BaseConfigs::TargetList> getTargetList() { DARABONBA_PTR_GET(targetList_, vector<BaseConfigs::TargetList>) };
      inline BaseConfigs& setTargetList(const vector<BaseConfigs::TargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
      inline BaseConfigs& setTargetList(vector<BaseConfigs::TargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline BaseConfigs& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // uuidCount Field Functions 
      bool hasUuidCount() const { return this->uuidCount_ != nullptr;};
      void deleteUuidCount() { this->uuidCount_ = nullptr;};
      inline int32_t getUuidCount() const { DARABONBA_PTR_GET_DEFAULT(uuidCount_, 0) };
      inline BaseConfigs& setUuidCount(int32_t uuidCount) { DARABONBA_PTR_SET_VALUE(uuidCount_, uuidCount) };


    protected:
      // The common logon account.
      shared_ptr<string> account_ {};
      // The end time of the common logon time range.
      shared_ptr<string> endTime_ {};
      // The common logon IP address.
      shared_ptr<string> ip_ {};
      // The common logon location.
      shared_ptr<string> location_ {};
      // Corresponding configuration remark information.
      shared_ptr<string> remark_ {};
      // The start time of the common logon time range.
      shared_ptr<string> startTime_ {};
      // The details of the servers to which the configuration is applied.
      shared_ptr<vector<BaseConfigs::TargetList>> targetList_ {};
      // The total number of servers.
      shared_ptr<int32_t> totalCount_ {};
      // The number of servers to which the configuration is applied.
      shared_ptr<int32_t> uuidCount_ {};
    };

    virtual bool empty() const override { return this->baseConfigs_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // baseConfigs Field Functions 
    bool hasBaseConfigs() const { return this->baseConfigs_ != nullptr;};
    void deleteBaseConfigs() { this->baseConfigs_ = nullptr;};
    inline const vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs> & getBaseConfigs() const { DARABONBA_PTR_GET_CONST(baseConfigs_, vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs>) };
    inline vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs> getBaseConfigs() { DARABONBA_PTR_GET(baseConfigs_, vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs>) };
    inline DescribeLoginBaseConfigsResponseBody& setBaseConfigs(const vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs> & baseConfigs) { DARABONBA_PTR_SET_VALUE(baseConfigs_, baseConfigs) };
    inline DescribeLoginBaseConfigsResponseBody& setBaseConfigs(vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs> && baseConfigs) { DARABONBA_PTR_SET_RVALUE(baseConfigs_, baseConfigs) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeLoginBaseConfigsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoginBaseConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoginBaseConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoginBaseConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The description of the configuration.
    shared_ptr<vector<DescribeLoginBaseConfigsResponseBody::BaseConfigs>> baseConfigs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
