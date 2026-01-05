// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeApplicationsResponseBody() = default ;
    DescribeApplicationsResponseBody(const DescribeApplicationsResponseBody &) = default ;
    DescribeApplicationsResponseBody(DescribeApplicationsResponseBody &&) = default ;
    DescribeApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationsResponseBody() = default ;
    DescribeApplicationsResponseBody& operator=(const DescribeApplicationsResponseBody &) = default ;
    DescribeApplicationsResponseBody& operator=(DescribeApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Applications, applications_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Applications, applications_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Applications() = default ;
        Applications(const Applications &) = default ;
        Applications(Applications &&) = default ;
        Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Applications() = default ;
        Applications& operator=(const Applications &) = default ;
        Applications& operator=(Applications &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Endpoints : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
            DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          };
          friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
            DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          };
          Endpoints() = default ;
          Endpoints(const Endpoints &) = default ;
          Endpoints(Endpoints &&) = default ;
          Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Endpoints() = default ;
          Endpoints& operator=(const Endpoints &) = default ;
          Endpoints& operator=(Endpoints &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Endpoint : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
              DARABONBA_PTR_TO_JSON(IP, IP_);
              DARABONBA_PTR_TO_JSON(NetType, netType_);
              DARABONBA_PTR_TO_JSON(Port, port_);
            };
            friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
              DARABONBA_PTR_FROM_JSON(IP, IP_);
              DARABONBA_PTR_FROM_JSON(NetType, netType_);
              DARABONBA_PTR_FROM_JSON(Port, port_);
            };
            Endpoint() = default ;
            Endpoint(const Endpoint &) = default ;
            Endpoint(Endpoint &&) = default ;
            Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Endpoint() = default ;
            Endpoint& operator=(const Endpoint &) = default ;
            Endpoint& operator=(Endpoint &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->IP_ == nullptr
        && this->netType_ == nullptr && this->port_ == nullptr; };
            // IP Field Functions 
            bool hasIP() const { return this->IP_ != nullptr;};
            void deleteIP() { this->IP_ = nullptr;};
            inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
            inline Endpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


            // netType Field Functions 
            bool hasNetType() const { return this->netType_ != nullptr;};
            void deleteNetType() { this->netType_ = nullptr;};
            inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
            inline Endpoint& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline Endpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          protected:
            shared_ptr<string> IP_ {};
            shared_ptr<string> netType_ {};
            shared_ptr<string> port_ {};
          };

          virtual bool empty() const override { return this->endpoint_ == nullptr; };
          // endpoint Field Functions 
          bool hasEndpoint() const { return this->endpoint_ != nullptr;};
          void deleteEndpoint() { this->endpoint_ = nullptr;};
          inline const vector<Endpoints::Endpoint> & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, vector<Endpoints::Endpoint>) };
          inline vector<Endpoints::Endpoint> getEndpoint() { DARABONBA_PTR_GET(endpoint_, vector<Endpoints::Endpoint>) };
          inline Endpoints& setEndpoint(const vector<Endpoints::Endpoint> & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
          inline Endpoints& setEndpoint(vector<Endpoints::Endpoint> && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


        protected:
          shared_ptr<vector<Endpoints::Endpoint>> endpoint_ {};
        };

        virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->creationTime_ == nullptr && this->DBClusterId_ == nullptr && this->description_ == nullptr && this->endpoints_ == nullptr
        && this->engineVersion_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->payType_ == nullptr && this->polarFSInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->zoneId_ == nullptr; };
        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
        inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // applicationType Field Functions 
        bool hasApplicationType() const { return this->applicationType_ != nullptr;};
        void deleteApplicationType() { this->applicationType_ = nullptr;};
        inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
        inline Applications& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Applications& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Applications& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Applications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endpoints Field Functions 
        bool hasEndpoints() const { return this->endpoints_ != nullptr;};
        void deleteEndpoints() { this->endpoints_ = nullptr;};
        inline const Applications::Endpoints & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, Applications::Endpoints) };
        inline Applications::Endpoints getEndpoints() { DARABONBA_PTR_GET(endpoints_, Applications::Endpoints) };
        inline Applications& setEndpoints(const Applications::Endpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
        inline Applications& setEndpoints(Applications::Endpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Applications& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline Applications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
        inline Applications& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline Applications& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // polarFSInstanceId Field Functions 
        bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
        void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
        inline string getPolarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
        inline Applications& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Applications& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Applications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Applications& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> applicationId_ {};
        shared_ptr<string> applicationType_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> DBClusterId_ {};
        shared_ptr<string> description_ {};
        shared_ptr<Applications::Endpoints> endpoints_ {};
        shared_ptr<string> engineVersion_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> expired_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> polarFSInstanceId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->applications_ == nullptr; };
      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Items::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Items::Applications>) };
      inline vector<Items::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<Items::Applications>) };
      inline Items& setApplications(const vector<Items::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline Items& setApplications(vector<Items::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    protected:
      shared_ptr<vector<Items::Applications>> applications_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeApplicationsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeApplicationsResponseBody::Items) };
    inline DescribeApplicationsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeApplicationsResponseBody::Items) };
    inline DescribeApplicationsResponseBody& setItems(const DescribeApplicationsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeApplicationsResponseBody& setItems(DescribeApplicationsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApplicationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeApplicationsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeApplicationsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribeApplicationsResponseBody::Items> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
