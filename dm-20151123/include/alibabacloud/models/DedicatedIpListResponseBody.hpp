// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    DedicatedIpListResponseBody() = default ;
    DedicatedIpListResponseBody(const DedicatedIpListResponseBody &) = default ;
    DedicatedIpListResponseBody(DedicatedIpListResponseBody &&) = default ;
    DedicatedIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpListResponseBody() = default ;
    DedicatedIpListResponseBody& operator=(const DedicatedIpListResponseBody &) = default ;
    DedicatedIpListResponseBody& operator=(DedicatedIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ips& obj) { 
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(IpExt, ipExt_);
        DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WarmupStatus, warmupStatus_);
        DARABONBA_PTR_TO_JSON(WarmupType, warmupType_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Ips& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(IpExt, ipExt_);
        DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WarmupStatus, warmupStatus_);
        DARABONBA_PTR_FROM_JSON(WarmupType, warmupType_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Ips() = default ;
      Ips(const Ips &) = default ;
      Ips(Ips &&) = default ;
      Ips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ips() = default ;
      Ips& operator=(const Ips &) = default ;
      Ips& operator=(Ips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpExt : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpExt& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_TO_JSON(HasSendMail, hasSendMail_);
          DARABONBA_PTR_TO_JSON(LastWarmUpTypeChangedTime, lastWarmUpTypeChangedTime_);
        };
        friend void from_json(const Darabonba::Json& j, IpExt& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
          DARABONBA_PTR_FROM_JSON(HasSendMail, hasSendMail_);
          DARABONBA_PTR_FROM_JSON(LastWarmUpTypeChangedTime, lastWarmUpTypeChangedTime_);
        };
        IpExt() = default ;
        IpExt(const IpExt &) = default ;
        IpExt(IpExt &&) = default ;
        IpExt(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpExt() = default ;
        IpExt& operator=(const IpExt &) = default ;
        IpExt& operator=(IpExt &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewal_ == nullptr
        && this->hasSendMail_ == nullptr && this->lastWarmUpTypeChangedTime_ == nullptr; };
        // autoRenewal Field Functions 
        bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
        void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
        inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
        inline IpExt& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


        // hasSendMail Field Functions 
        bool hasHasSendMail() const { return this->hasSendMail_ != nullptr;};
        void deleteHasSendMail() { this->hasSendMail_ = nullptr;};
        inline bool getHasSendMail() const { DARABONBA_PTR_GET_DEFAULT(hasSendMail_, false) };
        inline IpExt& setHasSendMail(bool hasSendMail) { DARABONBA_PTR_SET_VALUE(hasSendMail_, hasSendMail) };


        // lastWarmUpTypeChangedTime Field Functions 
        bool hasLastWarmUpTypeChangedTime() const { return this->lastWarmUpTypeChangedTime_ != nullptr;};
        void deleteLastWarmUpTypeChangedTime() { this->lastWarmUpTypeChangedTime_ = nullptr;};
        inline string getLastWarmUpTypeChangedTime() const { DARABONBA_PTR_GET_DEFAULT(lastWarmUpTypeChangedTime_, "") };
        inline IpExt& setLastWarmUpTypeChangedTime(string lastWarmUpTypeChangedTime) { DARABONBA_PTR_SET_VALUE(lastWarmUpTypeChangedTime_, lastWarmUpTypeChangedTime) };


      protected:
        // Whether auto-renewal is enabled
        shared_ptr<bool> autoRenewal_ {};
        // Whether an email has been sent
        shared_ptr<bool> hasSendMail_ {};
        shared_ptr<string> lastWarmUpTypeChangedTime_ {};
      };

      virtual bool empty() const override { return this->expiredTime_ == nullptr
        && this->id_ == nullptr && this->instanceId_ == nullptr && this->ip_ == nullptr && this->ipExt_ == nullptr && this->ipPoolName_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->warmupStatus_ == nullptr && this->warmupType_ == nullptr && this->zoneId_ == nullptr; };
      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Ips& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Ips& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Ips& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Ips& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // ipExt Field Functions 
      bool hasIpExt() const { return this->ipExt_ != nullptr;};
      void deleteIpExt() { this->ipExt_ = nullptr;};
      inline const Ips::IpExt & getIpExt() const { DARABONBA_PTR_GET_CONST(ipExt_, Ips::IpExt) };
      inline Ips::IpExt getIpExt() { DARABONBA_PTR_GET(ipExt_, Ips::IpExt) };
      inline Ips& setIpExt(const Ips::IpExt & ipExt) { DARABONBA_PTR_SET_VALUE(ipExt_, ipExt) };
      inline Ips& setIpExt(Ips::IpExt && ipExt) { DARABONBA_PTR_SET_RVALUE(ipExt_, ipExt) };


      // ipPoolName Field Functions 
      bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
      void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
      inline string getIpPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
      inline Ips& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Ips& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Ips& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // warmupStatus Field Functions 
      bool hasWarmupStatus() const { return this->warmupStatus_ != nullptr;};
      void deleteWarmupStatus() { this->warmupStatus_ = nullptr;};
      inline string getWarmupStatus() const { DARABONBA_PTR_GET_DEFAULT(warmupStatus_, "") };
      inline Ips& setWarmupStatus(string warmupStatus) { DARABONBA_PTR_SET_VALUE(warmupStatus_, warmupStatus) };


      // warmupType Field Functions 
      bool hasWarmupType() const { return this->warmupType_ != nullptr;};
      void deleteWarmupType() { this->warmupType_ = nullptr;};
      inline string getWarmupType() const { DARABONBA_PTR_GET_DEFAULT(warmupType_, "") };
      inline Ips& setWarmupType(string warmupType) { DARABONBA_PTR_SET_VALUE(warmupType_, warmupType) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Ips& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Expiration time
      shared_ptr<string> expiredTime_ {};
      // IP ID, consistent with the purchased instance ID
      shared_ptr<string> id_ {};
      // Purchased instance ID
      shared_ptr<string> instanceId_ {};
      // IP address
      shared_ptr<string> ip_ {};
      // Extended information
      shared_ptr<Ips::IpExt> ipExt_ {};
      // Name of the IP pool
      shared_ptr<string> ipPoolName_ {};
      // Purchase time
      shared_ptr<string> startTime_ {};
      // IP status
      shared_ptr<string> status_ {};
      // Warm-up status
      shared_ptr<string> warmupStatus_ {};
      // Warm-up method
      shared_ptr<string> warmupType_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasMore_ == nullptr && this->ips_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DedicatedIpListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline DedicatedIpListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<DedicatedIpListResponseBody::Ips> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<DedicatedIpListResponseBody::Ips>) };
    inline vector<DedicatedIpListResponseBody::Ips> getIps() { DARABONBA_PTR_GET(ips_, vector<DedicatedIpListResponseBody::Ips>) };
    inline DedicatedIpListResponseBody& setIps(const vector<DedicatedIpListResponseBody::Ips> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DedicatedIpListResponseBody& setIps(vector<DedicatedIpListResponseBody::Ips> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DedicatedIpListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DedicatedIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline DedicatedIpListResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // Current page
    shared_ptr<int32_t> currentPage_ {};
    // Whether there is a next page
    shared_ptr<bool> hasMore_ {};
    // IP list
    shared_ptr<vector<DedicatedIpListResponseBody::Ips>> ips_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total amount of purchased IP data
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
