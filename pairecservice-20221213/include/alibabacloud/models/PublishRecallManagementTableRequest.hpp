// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHRECALLMANAGEMENTTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHRECALLMANAGEMENTTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class PublishRecallManagementTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(SkipThresholdCheck, skipThresholdCheck_);
      DARABONBA_PTR_TO_JSON(StartTimestampMs, startTimestampMs_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(SkipThresholdCheck, skipThresholdCheck_);
      DARABONBA_PTR_FROM_JSON(StartTimestampMs, startTimestampMs_);
    };
    PublishRecallManagementTableRequest() = default ;
    PublishRecallManagementTableRequest(const PublishRecallManagementTableRequest &) = default ;
    PublishRecallManagementTableRequest(PublishRecallManagementTableRequest &&) = default ;
    PublishRecallManagementTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRecallManagementTableRequest() = default ;
    PublishRecallManagementTableRequest& operator=(const PublishRecallManagementTableRequest &) = default ;
    PublishRecallManagementTableRequest& operator=(PublishRecallManagementTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mode_ == nullptr && this->partition_ == nullptr && this->partitions_ == nullptr && this->skipThresholdCheck_ == nullptr && this->startTimestampMs_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PublishRecallManagementTableRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline PublishRecallManagementTableRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const map<string, string> & getPartition() const { DARABONBA_PTR_GET_CONST(partition_, map<string, string>) };
    inline map<string, string> getPartition() { DARABONBA_PTR_GET(partition_, map<string, string>) };
    inline PublishRecallManagementTableRequest& setPartition(const map<string, string> & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline PublishRecallManagementTableRequest& setPartition(map<string, string> && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, string> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, string>) };
    inline map<string, string> getPartitions() { DARABONBA_PTR_GET(partitions_, map<string, string>) };
    inline PublishRecallManagementTableRequest& setPartitions(const map<string, string> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline PublishRecallManagementTableRequest& setPartitions(map<string, string> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // skipThresholdCheck Field Functions 
    bool hasSkipThresholdCheck() const { return this->skipThresholdCheck_ != nullptr;};
    void deleteSkipThresholdCheck() { this->skipThresholdCheck_ = nullptr;};
    inline bool getSkipThresholdCheck() const { DARABONBA_PTR_GET_DEFAULT(skipThresholdCheck_, false) };
    inline PublishRecallManagementTableRequest& setSkipThresholdCheck(bool skipThresholdCheck) { DARABONBA_PTR_SET_VALUE(skipThresholdCheck_, skipThresholdCheck) };


    // startTimestampMs Field Functions 
    bool hasStartTimestampMs() const { return this->startTimestampMs_ != nullptr;};
    void deleteStartTimestampMs() { this->startTimestampMs_ = nullptr;};
    inline int64_t getStartTimestampMs() const { DARABONBA_PTR_GET_DEFAULT(startTimestampMs_, 0L) };
    inline PublishRecallManagementTableRequest& setStartTimestampMs(int64_t startTimestampMs) { DARABONBA_PTR_SET_VALUE(startTimestampMs_, startTimestampMs) };


  protected:
    // **The instance ID.**
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // **The enumeration value for the table synchronization mode**:
    // - `Merge`: Merge.
    shared_ptr<string> mode_ {};
    // The partition of the table to be published.
    shared_ptr<map<string, string>> partition_ {};
    // The partition of the table to be published.
    shared_ptr<map<string, string>> partitions_ {};
    // **Specifies whether to skip the threshold check when synchronizing the table.**
    shared_ptr<bool> skipThresholdCheck_ {};
    // The start time of incremental data playback (UNIX milliseconds).
    shared_ptr<int64_t> startTimestampMs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
