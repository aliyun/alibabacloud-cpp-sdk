// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERECOVERYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERECOVERYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableRecoveryTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrossBackupId, crossBackupId_);
      DARABONBA_PTR_TO_JSON(RecoveryBeginTime, recoveryBeginTime_);
      DARABONBA_PTR_TO_JSON(RecoveryEndTime, recoveryEndTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossBackupId, crossBackupId_);
      DARABONBA_PTR_FROM_JSON(RecoveryBeginTime, recoveryBeginTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryEndTime, recoveryEndTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableRecoveryTimeResponseBody() = default ;
    DescribeAvailableRecoveryTimeResponseBody(const DescribeAvailableRecoveryTimeResponseBody &) = default ;
    DescribeAvailableRecoveryTimeResponseBody(DescribeAvailableRecoveryTimeResponseBody &&) = default ;
    DescribeAvailableRecoveryTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableRecoveryTimeResponseBody() = default ;
    DescribeAvailableRecoveryTimeResponseBody& operator=(const DescribeAvailableRecoveryTimeResponseBody &) = default ;
    DescribeAvailableRecoveryTimeResponseBody& operator=(DescribeAvailableRecoveryTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossBackupId_ == nullptr
        && this->recoveryBeginTime_ == nullptr && this->recoveryEndTime_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // crossBackupId Field Functions 
    bool hasCrossBackupId() const { return this->crossBackupId_ != nullptr;};
    void deleteCrossBackupId() { this->crossBackupId_ = nullptr;};
    inline int32_t getCrossBackupId() const { DARABONBA_PTR_GET_DEFAULT(crossBackupId_, 0) };
    inline DescribeAvailableRecoveryTimeResponseBody& setCrossBackupId(int32_t crossBackupId) { DARABONBA_PTR_SET_VALUE(crossBackupId_, crossBackupId) };


    // recoveryBeginTime Field Functions 
    bool hasRecoveryBeginTime() const { return this->recoveryBeginTime_ != nullptr;};
    void deleteRecoveryBeginTime() { this->recoveryBeginTime_ = nullptr;};
    inline string getRecoveryBeginTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryBeginTime_, "") };
    inline DescribeAvailableRecoveryTimeResponseBody& setRecoveryBeginTime(string recoveryBeginTime) { DARABONBA_PTR_SET_VALUE(recoveryBeginTime_, recoveryBeginTime) };


    // recoveryEndTime Field Functions 
    bool hasRecoveryEndTime() const { return this->recoveryEndTime_ != nullptr;};
    void deleteRecoveryEndTime() { this->recoveryEndTime_ = nullptr;};
    inline string getRecoveryEndTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryEndTime_, "") };
    inline DescribeAvailableRecoveryTimeResponseBody& setRecoveryEndTime(string recoveryEndTime) { DARABONBA_PTR_SET_VALUE(recoveryEndTime_, recoveryEndTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableRecoveryTimeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableRecoveryTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> crossBackupId_ {};
    shared_ptr<string> recoveryBeginTime_ {};
    shared_ptr<string> recoveryEndTime_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
