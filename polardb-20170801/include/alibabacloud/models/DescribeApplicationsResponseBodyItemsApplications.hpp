// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMSAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMSAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApplicationsResponseBodyItemsApplicationsEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationsResponseBodyItemsApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationsResponseBodyItemsApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
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
    friend void from_json(const Darabonba::Json& j, DescribeApplicationsResponseBodyItemsApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
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
    DescribeApplicationsResponseBodyItemsApplications() = default ;
    DescribeApplicationsResponseBodyItemsApplications(const DescribeApplicationsResponseBodyItemsApplications &) = default ;
    DescribeApplicationsResponseBodyItemsApplications(DescribeApplicationsResponseBodyItemsApplications &&) = default ;
    DescribeApplicationsResponseBodyItemsApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationsResponseBodyItemsApplications() = default ;
    DescribeApplicationsResponseBodyItemsApplications& operator=(const DescribeApplicationsResponseBodyItemsApplications &) = default ;
    DescribeApplicationsResponseBodyItemsApplications& operator=(DescribeApplicationsResponseBodyItemsApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationType_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->endpoints_ != nullptr && this->engineVersion_ != nullptr
        && this->expireTime_ != nullptr && this->expired_ != nullptr && this->payType_ != nullptr && this->polarFSInstanceId_ != nullptr && this->regionId_ != nullptr
        && this->status_ != nullptr && this->zoneId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints) };
    inline Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints endpoints() { DARABONBA_PTR_GET(endpoints_, Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints) };
    inline DescribeApplicationsResponseBodyItemsApplications& setEndpoints(const Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeApplicationsResponseBodyItemsApplications& setEndpoints(Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string polarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeApplicationsResponseBodyItemsApplications& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> applicationType_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::DescribeApplicationsResponseBodyItemsApplicationsEndpoints> endpoints_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> expired_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> polarFSInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
