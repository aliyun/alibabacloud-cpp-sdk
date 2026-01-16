// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTRESPONSEBODY_HPP_
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
  class DedicatedIpPoolListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpPoolListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(IpPools, ipPools_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpPoolListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(IpPools, ipPools_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    DedicatedIpPoolListResponseBody() = default ;
    DedicatedIpPoolListResponseBody(const DedicatedIpPoolListResponseBody &) = default ;
    DedicatedIpPoolListResponseBody(DedicatedIpPoolListResponseBody &&) = default ;
    DedicatedIpPoolListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpPoolListResponseBody() = default ;
    DedicatedIpPoolListResponseBody& operator=(const DedicatedIpPoolListResponseBody &) = default ;
    DedicatedIpPoolListResponseBody& operator=(DedicatedIpPoolListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpPools& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
        DARABONBA_PTR_TO_JSON(Ips, ips_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, IpPools& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
        DARABONBA_PTR_FROM_JSON(Ips, ips_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      IpPools() = default ;
      IpPools(const IpPools &) = default ;
      IpPools(IpPools &&) = default ;
      IpPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpPools() = default ;
      IpPools& operator=(const IpPools &) = default ;
      IpPools& operator=(IpPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ips : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ips& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Ips& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->ip_ == nullptr && this->zoneId_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Ips& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Ips& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Ips& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // Instance purchase ID
        shared_ptr<string> id_ {};
        // IP address
        shared_ptr<string> ip_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->ipCount_ == nullptr && this->ips_ == nullptr && this->name_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IpPools& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline IpPools& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ipCount Field Functions 
      bool hasIpCount() const { return this->ipCount_ != nullptr;};
      void deleteIpCount() { this->ipCount_ = nullptr;};
      inline int32_t getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0) };
      inline IpPools& setIpCount(int32_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


      // ips Field Functions 
      bool hasIps() const { return this->ips_ != nullptr;};
      void deleteIps() { this->ips_ = nullptr;};
      inline const vector<IpPools::Ips> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<IpPools::Ips>) };
      inline vector<IpPools::Ips> getIps() { DARABONBA_PTR_GET(ips_, vector<IpPools::Ips>) };
      inline IpPools& setIps(const vector<IpPools::Ips> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
      inline IpPools& setIps(vector<IpPools::Ips> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline IpPools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Creation time
      shared_ptr<string> createTime_ {};
      // IP pool ID
      shared_ptr<string> id_ {};
      // Number of source IP addresses
      shared_ptr<int32_t> ipCount_ {};
      // List of IPs
      shared_ptr<vector<IpPools::Ips>> ips_ {};
      // IP pool name
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasMore_ == nullptr && this->ipPools_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DedicatedIpPoolListResponseBody& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline DedicatedIpPoolListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // ipPools Field Functions 
    bool hasIpPools() const { return this->ipPools_ != nullptr;};
    void deleteIpPools() { this->ipPools_ = nullptr;};
    inline const vector<DedicatedIpPoolListResponseBody::IpPools> & getIpPools() const { DARABONBA_PTR_GET_CONST(ipPools_, vector<DedicatedIpPoolListResponseBody::IpPools>) };
    inline vector<DedicatedIpPoolListResponseBody::IpPools> getIpPools() { DARABONBA_PTR_GET(ipPools_, vector<DedicatedIpPoolListResponseBody::IpPools>) };
    inline DedicatedIpPoolListResponseBody& setIpPools(const vector<DedicatedIpPoolListResponseBody::IpPools> & ipPools) { DARABONBA_PTR_SET_VALUE(ipPools_, ipPools) };
    inline DedicatedIpPoolListResponseBody& setIpPools(vector<DedicatedIpPoolListResponseBody::IpPools> && ipPools) { DARABONBA_PTR_SET_RVALUE(ipPools_, ipPools) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DedicatedIpPoolListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DedicatedIpPoolListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline DedicatedIpPoolListResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // Current page
    shared_ptr<string> currentPage_ {};
    // Whether there is a next page
    shared_ptr<bool> hasMore_ {};
    // List of IP pools
    shared_ptr<vector<DedicatedIpPoolListResponseBody::IpPools>> ipPools_ {};
    // Page size
    shared_ptr<string> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total number of data under the current request conditions
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
