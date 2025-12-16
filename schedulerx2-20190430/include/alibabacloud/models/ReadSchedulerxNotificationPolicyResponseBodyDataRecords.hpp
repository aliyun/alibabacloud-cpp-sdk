// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXNOTIFICATIONPOLICYRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXNOTIFICATIONPOLICYRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxNotificationPolicyResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxNotificationPolicyResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelTimeRange, channelTimeRange_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(ReferenceApps, referenceApps_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Updater, updater_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxNotificationPolicyResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelTimeRange, channelTimeRange_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(ReferenceApps, referenceApps_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Updater, updater_);
    };
    ReadSchedulerxNotificationPolicyResponseBodyDataRecords() = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecords(const ReadSchedulerxNotificationPolicyResponseBodyDataRecords &) = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecords(ReadSchedulerxNotificationPolicyResponseBodyDataRecords &&) = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxNotificationPolicyResponseBodyDataRecords() = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecords& operator=(const ReadSchedulerxNotificationPolicyResponseBodyDataRecords &) = default ;
    ReadSchedulerxNotificationPolicyResponseBodyDataRecords& operator=(ReadSchedulerxNotificationPolicyResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelTimeRange_ == nullptr
        && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->description_ == nullptr && return this->policyName_ == nullptr && return this->referenceApps_ == nullptr
        && return this->updateTime_ == nullptr && return this->updater_ == nullptr; };
    // channelTimeRange Field Functions 
    bool hasChannelTimeRange() const { return this->channelTimeRange_ != nullptr;};
    void deleteChannelTimeRange() { this->channelTimeRange_ = nullptr;};
    inline string channelTimeRange() const { DARABONBA_PTR_GET_DEFAULT(channelTimeRange_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setChannelTimeRange(string channelTimeRange) { DARABONBA_PTR_SET_VALUE(channelTimeRange_, channelTimeRange) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // referenceApps Field Functions 
    bool hasReferenceApps() const { return this->referenceApps_ != nullptr;};
    void deleteReferenceApps() { this->referenceApps_ = nullptr;};
    inline const vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps> & referenceApps() const { DARABONBA_PTR_GET_CONST(referenceApps_, vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps>) };
    inline vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps> referenceApps() { DARABONBA_PTR_GET(referenceApps_, vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps>) };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setReferenceApps(const vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps> & referenceApps) { DARABONBA_PTR_SET_VALUE(referenceApps_, referenceApps) };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setReferenceApps(vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps> && referenceApps) { DARABONBA_PTR_SET_RVALUE(referenceApps_, referenceApps) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline string updater() const { DARABONBA_PTR_GET_DEFAULT(updater_, "") };
    inline ReadSchedulerxNotificationPolicyResponseBodyDataRecords& setUpdater(string updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };


  protected:
    // The configuration of the notification policy.
    std::shared_ptr<string> channelTimeRange_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The description of the notification policy.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the notification policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The list of applications associated with the notification policy.
    std::shared_ptr<vector<Models::ReadSchedulerxNotificationPolicyResponseBodyDataRecordsReferenceApps>> referenceApps_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The updater.
    std::shared_ptr<string> updater_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
