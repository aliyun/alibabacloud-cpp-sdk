// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEASRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEASRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateAsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateAsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
      DARABONBA_PTR_TO_JSON(RecordSide, recordSide_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(SupportMp3, supportMp3_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateAsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
      DARABONBA_PTR_FROM_JSON(RecordSide, recordSide_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(SupportMp3, supportMp3_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
    };
    CloudCreateAsrRequest() = default ;
    CloudCreateAsrRequest(const CloudCreateAsrRequest &) = default ;
    CloudCreateAsrRequest(CloudCreateAsrRequest &&) = default ;
    CloudCreateAsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateAsrRequest() = default ;
    CloudCreateAsrRequest& operator=(const CloudCreateAsrRequest &) = default ;
    CloudCreateAsrRequest& operator=(CloudCreateAsrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callType_ == nullptr
        && this->enterpriseId_ == nullptr && this->mainUniqueId_ == nullptr && this->recordFile_ == nullptr && this->recordSide_ == nullptr && this->recordType_ == nullptr
        && this->supportMp3_ == nullptr && this->uniqueId_ == nullptr; };
    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
    inline CloudCreateAsrRequest& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateAsrRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline CloudCreateAsrRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


    // recordFile Field Functions 
    bool hasRecordFile() const { return this->recordFile_ != nullptr;};
    void deleteRecordFile() { this->recordFile_ = nullptr;};
    inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
    inline CloudCreateAsrRequest& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


    // recordSide Field Functions 
    bool hasRecordSide() const { return this->recordSide_ != nullptr;};
    void deleteRecordSide() { this->recordSide_ = nullptr;};
    inline int64_t getRecordSide() const { DARABONBA_PTR_GET_DEFAULT(recordSide_, 0L) };
    inline CloudCreateAsrRequest& setRecordSide(int64_t recordSide) { DARABONBA_PTR_SET_VALUE(recordSide_, recordSide) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline CloudCreateAsrRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // supportMp3 Field Functions 
    bool hasSupportMp3() const { return this->supportMp3_ != nullptr;};
    void deleteSupportMp3() { this->supportMp3_ = nullptr;};
    inline string getSupportMp3() const { DARABONBA_PTR_GET_DEFAULT(supportMp3_, "") };
    inline CloudCreateAsrRequest& setSupportMp3(string supportMp3) { DARABONBA_PTR_SET_VALUE(supportMp3_, supportMp3) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline CloudCreateAsrRequest& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    // 通话类型；1:呼入,2:webcall,4:预览外呼,5:预测外呼,6:主叫外呼,9:内部呼叫
    // 
    // This parameter is required.
    shared_ptr<int64_t> callType_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 主通道的唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> mainUniqueId_ {};
    // 录音文件名；例: 7000002-20170320140327-1581-1500-record-sip-2-148998.366
    // 
    // This parameter is required.
    shared_ptr<string> recordFile_ {};
    // 录音通道类型；取值范围：0：混音 1：分线录音时客户侧,2：分线录音时座席侧,3:分线录音时客户侧和座席侧
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordSide_ {};
    // 语音文件类型,取值：record,voicemail 说明：record是录音， voicemail是留言
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
    // 当wav过期时，是否支持使用mp3进行转写；0-不支持（默认）；1-代表支持，如果通话wav过期，则自动使用mp3转写，转写结果中通道类型会被设置为混音类型；混音mp3无法区分两侧，双声道mp3可以区分两侧内容
    shared_ptr<string> supportMp3_ {};
    // 从通道的唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> uniqueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
