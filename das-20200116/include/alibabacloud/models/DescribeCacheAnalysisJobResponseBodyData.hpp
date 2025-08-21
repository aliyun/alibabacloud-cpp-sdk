// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataBigKeys.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes.hpp>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_TO_JSON(BigKeysOfNum, bigKeysOfNum_);
      DARABONBA_PTR_TO_JSON(ExpiryKeysLevelCount, expiryKeysLevelCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(KeyPrefixes, keyPrefixes_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      DARABONBA_PTR_TO_JSON(UnexBigKeysOfBytes, unexBigKeysOfBytes_);
      DARABONBA_PTR_TO_JSON(UnexBigKeysOfNum, unexBigKeysOfNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_FROM_JSON(BigKeysOfNum, bigKeysOfNum_);
      DARABONBA_PTR_FROM_JSON(ExpiryKeysLevelCount, expiryKeysLevelCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(KeyPrefixes, keyPrefixes_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
      DARABONBA_PTR_FROM_JSON(UnexBigKeysOfBytes, unexBigKeysOfBytes_);
      DARABONBA_PTR_FROM_JSON(UnexBigKeysOfNum, unexBigKeysOfNum_);
    };
    DescribeCacheAnalysisJobResponseBodyData() = default ;
    DescribeCacheAnalysisJobResponseBodyData(const DescribeCacheAnalysisJobResponseBodyData &) = default ;
    DescribeCacheAnalysisJobResponseBodyData(DescribeCacheAnalysisJobResponseBodyData &&) = default ;
    DescribeCacheAnalysisJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyData() = default ;
    DescribeCacheAnalysisJobResponseBodyData& operator=(const DescribeCacheAnalysisJobResponseBodyData &) = default ;
    DescribeCacheAnalysisJobResponseBodyData& operator=(DescribeCacheAnalysisJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bigKeys_ != nullptr
        && this->bigKeysOfNum_ != nullptr && this->expiryKeysLevelCount_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->keyPrefixes_ != nullptr
        && this->message_ != nullptr && this->nodeId_ != nullptr && this->taskState_ != nullptr && this->unexBigKeysOfBytes_ != nullptr && this->unexBigKeysOfNum_ != nullptr; };
    // bigKeys Field Functions 
    bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
    void deleteBigKeys() { this->bigKeys_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys & bigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys) };
    inline Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys bigKeys() { DARABONBA_PTR_GET(bigKeys_, Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys) };
    inline DescribeCacheAnalysisJobResponseBodyData& setBigKeys(const Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
    inline DescribeCacheAnalysisJobResponseBodyData& setBigKeys(Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


    // bigKeysOfNum Field Functions 
    bool hasBigKeysOfNum() const { return this->bigKeysOfNum_ != nullptr;};
    void deleteBigKeysOfNum() { this->bigKeysOfNum_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum & bigKeysOfNum() const { DARABONBA_PTR_GET_CONST(bigKeysOfNum_, Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum) };
    inline Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum bigKeysOfNum() { DARABONBA_PTR_GET(bigKeysOfNum_, Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum) };
    inline DescribeCacheAnalysisJobResponseBodyData& setBigKeysOfNum(const Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum & bigKeysOfNum) { DARABONBA_PTR_SET_VALUE(bigKeysOfNum_, bigKeysOfNum) };
    inline DescribeCacheAnalysisJobResponseBodyData& setBigKeysOfNum(Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum && bigKeysOfNum) { DARABONBA_PTR_SET_RVALUE(bigKeysOfNum_, bigKeysOfNum) };


    // expiryKeysLevelCount Field Functions 
    bool hasExpiryKeysLevelCount() const { return this->expiryKeysLevelCount_ != nullptr;};
    void deleteExpiryKeysLevelCount() { this->expiryKeysLevelCount_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount & expiryKeysLevelCount() const { DARABONBA_PTR_GET_CONST(expiryKeysLevelCount_, Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount) };
    inline Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount expiryKeysLevelCount() { DARABONBA_PTR_GET(expiryKeysLevelCount_, Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount) };
    inline DescribeCacheAnalysisJobResponseBodyData& setExpiryKeysLevelCount(const Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount & expiryKeysLevelCount) { DARABONBA_PTR_SET_VALUE(expiryKeysLevelCount_, expiryKeysLevelCount) };
    inline DescribeCacheAnalysisJobResponseBodyData& setExpiryKeysLevelCount(Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount && expiryKeysLevelCount) { DARABONBA_PTR_SET_RVALUE(expiryKeysLevelCount_, expiryKeysLevelCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCacheAnalysisJobResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeCacheAnalysisJobResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // keyPrefixes Field Functions 
    bool hasKeyPrefixes() const { return this->keyPrefixes_ != nullptr;};
    void deleteKeyPrefixes() { this->keyPrefixes_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes & keyPrefixes() const { DARABONBA_PTR_GET_CONST(keyPrefixes_, Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes) };
    inline Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes keyPrefixes() { DARABONBA_PTR_GET(keyPrefixes_, Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes) };
    inline DescribeCacheAnalysisJobResponseBodyData& setKeyPrefixes(const Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes & keyPrefixes) { DARABONBA_PTR_SET_VALUE(keyPrefixes_, keyPrefixes) };
    inline DescribeCacheAnalysisJobResponseBodyData& setKeyPrefixes(Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes && keyPrefixes) { DARABONBA_PTR_SET_RVALUE(keyPrefixes_, keyPrefixes) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCacheAnalysisJobResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeCacheAnalysisJobResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // taskState Field Functions 
    bool hasTaskState() const { return this->taskState_ != nullptr;};
    void deleteTaskState() { this->taskState_ = nullptr;};
    inline string taskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
    inline DescribeCacheAnalysisJobResponseBodyData& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


    // unexBigKeysOfBytes Field Functions 
    bool hasUnexBigKeysOfBytes() const { return this->unexBigKeysOfBytes_ != nullptr;};
    void deleteUnexBigKeysOfBytes() { this->unexBigKeysOfBytes_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes & unexBigKeysOfBytes() const { DARABONBA_PTR_GET_CONST(unexBigKeysOfBytes_, Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes) };
    inline Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes unexBigKeysOfBytes() { DARABONBA_PTR_GET(unexBigKeysOfBytes_, Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes) };
    inline DescribeCacheAnalysisJobResponseBodyData& setUnexBigKeysOfBytes(const Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes & unexBigKeysOfBytes) { DARABONBA_PTR_SET_VALUE(unexBigKeysOfBytes_, unexBigKeysOfBytes) };
    inline DescribeCacheAnalysisJobResponseBodyData& setUnexBigKeysOfBytes(Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes && unexBigKeysOfBytes) { DARABONBA_PTR_SET_RVALUE(unexBigKeysOfBytes_, unexBigKeysOfBytes) };


    // unexBigKeysOfNum Field Functions 
    bool hasUnexBigKeysOfNum() const { return this->unexBigKeysOfNum_ != nullptr;};
    void deleteUnexBigKeysOfNum() { this->unexBigKeysOfNum_ = nullptr;};
    inline const Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum & unexBigKeysOfNum() const { DARABONBA_PTR_GET_CONST(unexBigKeysOfNum_, Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum) };
    inline Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum unexBigKeysOfNum() { DARABONBA_PTR_GET(unexBigKeysOfNum_, Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum) };
    inline DescribeCacheAnalysisJobResponseBodyData& setUnexBigKeysOfNum(const Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum & unexBigKeysOfNum) { DARABONBA_PTR_SET_VALUE(unexBigKeysOfNum_, unexBigKeysOfNum) };
    inline DescribeCacheAnalysisJobResponseBodyData& setUnexBigKeysOfNum(Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum && unexBigKeysOfNum) { DARABONBA_PTR_SET_RVALUE(unexBigKeysOfNum_, unexBigKeysOfNum) };


  protected:
    // The details of the large keys. The returned large keys are sorted in descending order based on the number of bytes occupied by the keys.
    std::shared_ptr<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeys> bigKeys_ = nullptr;
    // The details of the large keys. The returned large keys are sorted in descending order based on the number of keys.
    std::shared_ptr<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum> bigKeysOfNum_ = nullptr;
    // The statistics of the keys that have expired.
    std::shared_ptr<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount> expiryKeysLevelCount_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the cache analysis task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The prefixes of the keys.
    std::shared_ptr<Models::DescribeCacheAnalysisJobResponseBodyDataKeyPrefixes> keyPrefixes_ = nullptr;
    // The message that is returned for the request.
    // 
    // >  If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the data node on the instance.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The state of the cache analysis task. Valid values:
    // 
    // *   **BACKUP**: The data is being backed up.
    // *   **ANALYZING**: The data is being analyzed.
    // *   **FINISHED**: The data is analyzed.
    // *   **FAILED**: An error occurred.
    std::shared_ptr<string> taskState_ = nullptr;
    // The details of permanent keys. The returned keys are sorted in descending order based on the number of bytes occupied by the keys.
    std::shared_ptr<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes> unexBigKeysOfBytes_ = nullptr;
    // The details of permanent keys. The returned keys are sorted in descending order based on the number of keys.
    std::shared_ptr<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum> unexBigKeysOfNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
