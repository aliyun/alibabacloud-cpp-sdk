// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenVbrHealthCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenVbrHealthCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VbrHealthChecks, vbrHealthChecks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenVbrHealthCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VbrHealthChecks, vbrHealthChecks_);
    };
    DescribeCenVbrHealthCheckResponseBody() = default ;
    DescribeCenVbrHealthCheckResponseBody(const DescribeCenVbrHealthCheckResponseBody &) = default ;
    DescribeCenVbrHealthCheckResponseBody(DescribeCenVbrHealthCheckResponseBody &&) = default ;
    DescribeCenVbrHealthCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenVbrHealthCheckResponseBody() = default ;
    DescribeCenVbrHealthCheckResponseBody& operator=(const DescribeCenVbrHealthCheckResponseBody &) = default ;
    DescribeCenVbrHealthCheckResponseBody& operator=(DescribeCenVbrHealthCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VbrHealthChecks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VbrHealthChecks& obj) { 
        DARABONBA_PTR_TO_JSON(VbrHealthCheck, vbrHealthCheck_);
      };
      friend void from_json(const Darabonba::Json& j, VbrHealthChecks& obj) { 
        DARABONBA_PTR_FROM_JSON(VbrHealthCheck, vbrHealthCheck_);
      };
      VbrHealthChecks() = default ;
      VbrHealthChecks(const VbrHealthChecks &) = default ;
      VbrHealthChecks(VbrHealthChecks &&) = default ;
      VbrHealthChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VbrHealthChecks() = default ;
      VbrHealthChecks& operator=(const VbrHealthChecks &) = default ;
      VbrHealthChecks& operator=(VbrHealthChecks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VbrHealthCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VbrHealthCheck& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckOnly, healthCheckOnly_);
          DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
          DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
          DARABONBA_PTR_TO_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
        };
        friend void from_json(const Darabonba::Json& j, VbrHealthCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckOnly, healthCheckOnly_);
          DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
          DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
          DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
          DARABONBA_PTR_FROM_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
        };
        VbrHealthCheck() = default ;
        VbrHealthCheck(const VbrHealthCheck &) = default ;
        VbrHealthCheck(VbrHealthCheck &&) = default ;
        VbrHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VbrHealthCheck() = default ;
        VbrHealthCheck& operator=(const VbrHealthCheck &) = default ;
        VbrHealthCheck& operator=(VbrHealthCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->description_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckOnly_ == nullptr && this->healthCheckSourceIp_ == nullptr && this->healthCheckTargetIp_ == nullptr
        && this->healthyThreshold_ == nullptr && this->vbrInstanceId_ == nullptr && this->vbrInstanceRegionId_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline VbrHealthCheck& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VbrHealthCheck& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline VbrHealthCheck& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckOnly Field Functions 
        bool hasHealthCheckOnly() const { return this->healthCheckOnly_ != nullptr;};
        void deleteHealthCheckOnly() { this->healthCheckOnly_ = nullptr;};
        inline bool getHealthCheckOnly() const { DARABONBA_PTR_GET_DEFAULT(healthCheckOnly_, false) };
        inline VbrHealthCheck& setHealthCheckOnly(bool healthCheckOnly) { DARABONBA_PTR_SET_VALUE(healthCheckOnly_, healthCheckOnly) };


        // healthCheckSourceIp Field Functions 
        bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
        void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
        inline string getHealthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
        inline VbrHealthCheck& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


        // healthCheckTargetIp Field Functions 
        bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
        void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
        inline string getHealthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
        inline VbrHealthCheck& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline VbrHealthCheck& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // vbrInstanceId Field Functions 
        bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
        void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
        inline string getVbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
        inline VbrHealthCheck& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


        // vbrInstanceRegionId Field Functions 
        bool hasVbrInstanceRegionId() const { return this->vbrInstanceRegionId_ != nullptr;};
        void deleteVbrInstanceRegionId() { this->vbrInstanceRegionId_ = nullptr;};
        inline string getVbrInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceRegionId_, "") };
        inline VbrHealthCheck& setVbrInstanceRegionId(string vbrInstanceRegionId) { DARABONBA_PTR_SET_VALUE(vbrInstanceRegionId_, vbrInstanceRegionId) };


      protected:
        // The ID of the CEN instance.
        shared_ptr<string> cenId_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The time interval at which probe packets are sent during the health check. Unit: seconds.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // Indicates whether probing is enabled. Valid values:
        // 
        // *   **true**: Probing is enabled.
        // 
        //         If you enable probing, the system does not switch to another route if the detected route is not reachable.
        // 
        // *   **false**: Probing is disabled.
        // 
        //           If probing is disabled and a redundant route is specified, the system switches to the redundant route when the detected route is not reachable.
        shared_ptr<bool> healthCheckOnly_ {};
        // The source IP address of the health check.
        shared_ptr<string> healthCheckSourceIp_ {};
        // The destination IP address of the health check.
        shared_ptr<string> healthCheckTargetIp_ {};
        // The number of probe packets that are sent during the health check.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The VBR ID.
        shared_ptr<string> vbrInstanceId_ {};
        // The ID of the region where the VBR is deployed.
        shared_ptr<string> vbrInstanceRegionId_ {};
      };

      virtual bool empty() const override { return this->vbrHealthCheck_ == nullptr; };
      // vbrHealthCheck Field Functions 
      bool hasVbrHealthCheck() const { return this->vbrHealthCheck_ != nullptr;};
      void deleteVbrHealthCheck() { this->vbrHealthCheck_ = nullptr;};
      inline const vector<VbrHealthChecks::VbrHealthCheck> & getVbrHealthCheck() const { DARABONBA_PTR_GET_CONST(vbrHealthCheck_, vector<VbrHealthChecks::VbrHealthCheck>) };
      inline vector<VbrHealthChecks::VbrHealthCheck> getVbrHealthCheck() { DARABONBA_PTR_GET(vbrHealthCheck_, vector<VbrHealthChecks::VbrHealthCheck>) };
      inline VbrHealthChecks& setVbrHealthCheck(const vector<VbrHealthChecks::VbrHealthCheck> & vbrHealthCheck) { DARABONBA_PTR_SET_VALUE(vbrHealthCheck_, vbrHealthCheck) };
      inline VbrHealthChecks& setVbrHealthCheck(vector<VbrHealthChecks::VbrHealthCheck> && vbrHealthCheck) { DARABONBA_PTR_SET_RVALUE(vbrHealthCheck_, vbrHealthCheck) };


    protected:
      shared_ptr<vector<VbrHealthChecks::VbrHealthCheck>> vbrHealthCheck_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vbrHealthChecks_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenVbrHealthCheckResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenVbrHealthCheckResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenVbrHealthCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenVbrHealthCheckResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vbrHealthChecks Field Functions 
    bool hasVbrHealthChecks() const { return this->vbrHealthChecks_ != nullptr;};
    void deleteVbrHealthChecks() { this->vbrHealthChecks_ = nullptr;};
    inline const DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks & getVbrHealthChecks() const { DARABONBA_PTR_GET_CONST(vbrHealthChecks_, DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks) };
    inline DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks getVbrHealthChecks() { DARABONBA_PTR_GET(vbrHealthChecks_, DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks) };
    inline DescribeCenVbrHealthCheckResponseBody& setVbrHealthChecks(const DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks & vbrHealthChecks) { DARABONBA_PTR_SET_VALUE(vbrHealthChecks_, vbrHealthChecks) };
    inline DescribeCenVbrHealthCheckResponseBody& setVbrHealthChecks(DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks && vbrHealthChecks) { DARABONBA_PTR_SET_RVALUE(vbrHealthChecks_, vbrHealthChecks) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The health check configuration of the VBR.
    shared_ptr<DescribeCenVbrHealthCheckResponseBody::VbrHealthChecks> vbrHealthChecks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
