// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETRECORDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETRECORDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetRecordUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetRecordUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(RecordSide, recordSide_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetRecordUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(RecordSide, recordSide_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
    };
    CloudGetRecordUrlRequest() = default ;
    CloudGetRecordUrlRequest(const CloudGetRecordUrlRequest &) = default ;
    CloudGetRecordUrlRequest(CloudGetRecordUrlRequest &&) = default ;
    CloudGetRecordUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetRecordUrlRequest() = default ;
    CloudGetRecordUrlRequest& operator=(const CloudGetRecordUrlRequest &) = default ;
    CloudGetRecordUrlRequest& operator=(CloudGetRecordUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callType_ == nullptr
        && this->download_ == nullptr && this->enterpriseId_ == nullptr && this->recordFile_ == nullptr && this->recordFormat_ == nullptr && this->recordSide_ == nullptr
        && this->recordType_ == nullptr; };
    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
    inline CloudGetRecordUrlRequest& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline int64_t getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, 0L) };
    inline CloudGetRecordUrlRequest& setDownload(int64_t download) { DARABONBA_PTR_SET_VALUE(download_, download) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudGetRecordUrlRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // recordFile Field Functions 
    bool hasRecordFile() const { return this->recordFile_ != nullptr;};
    void deleteRecordFile() { this->recordFile_ = nullptr;};
    inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
    inline CloudGetRecordUrlRequest& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline int64_t getRecordFormat() const { DARABONBA_PTR_GET_DEFAULT(recordFormat_, 0L) };
    inline CloudGetRecordUrlRequest& setRecordFormat(int64_t recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };


    // recordSide Field Functions 
    bool hasRecordSide() const { return this->recordSide_ != nullptr;};
    void deleteRecordSide() { this->recordSide_ = nullptr;};
    inline int64_t getRecordSide() const { DARABONBA_PTR_GET_DEFAULT(recordSide_, 0L) };
    inline CloudGetRecordUrlRequest& setRecordSide(int64_t recordSide) { DARABONBA_PTR_SET_VALUE(recordSide_, recordSide) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline CloudGetRecordUrlRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


  protected:
    // 呼叫类型；说明：开启分线录音时，获取客户侧或座席侧录音需要，recordFormat=1时有效，recordFormat=0时忽略。取值范围：1,2,4,5（数字含义：呼入,webcall,预览外呼,预测外呼）
    shared_ptr<int64_t> callType_ {};
    // 是否下载；１为下载，空或０表示试听
    shared_ptr<int64_t> download_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 录音文件名；如7000101-20160815140025-01087120766-01087120766--record-sip-1-1471240825.87
    // 
    // This parameter is required.
    shared_ptr<string> recordFile_ {};
    // 录音文件类型；取值说明：0为mp3，1为wav，默认为mp3类型
    shared_ptr<int64_t> recordFormat_ {};
    // 分线录音录音侧；说明：开启分线录音时，获取客户侧或座席侧录音需要，recordFormat=1时有效，recordFormat=0时忽略。取值范围：1,2 (数字含义：客户侧，座席侧)recordSide不为空时，callType必选
    shared_ptr<int64_t> recordSide_ {};
    // 录音类型，不填可根据 recordFile 解析；record:录音voicemail:留言tsi:彩铃、当开启号码录音状态识别，发起预览外呼，客户号码是手机且客户未接听时返回该地址 rasr:语音机器人客户侧录音 transfer:转接consult:咨询threeway:三方
    shared_ptr<string> recordType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
