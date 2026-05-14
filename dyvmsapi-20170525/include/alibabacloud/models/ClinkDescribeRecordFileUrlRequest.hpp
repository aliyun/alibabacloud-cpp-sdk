// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDESCRIBERECORDFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKDESCRIBERECORDFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkDescribeRecordFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDescribeRecordFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Download, download_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecordSide, recordSide_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDescribeRecordFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Download, download_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecordSide, recordSide_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    ClinkDescribeRecordFileUrlRequest() = default ;
    ClinkDescribeRecordFileUrlRequest(const ClinkDescribeRecordFileUrlRequest &) = default ;
    ClinkDescribeRecordFileUrlRequest(ClinkDescribeRecordFileUrlRequest &&) = default ;
    ClinkDescribeRecordFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDescribeRecordFileUrlRequest() = default ;
    ClinkDescribeRecordFileUrlRequest& operator=(const ClinkDescribeRecordFileUrlRequest &) = default ;
    ClinkDescribeRecordFileUrlRequest& operator=(ClinkDescribeRecordFileUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->download_ == nullptr
        && this->enterpriseId_ == nullptr && this->mainUniqueId_ == nullptr && this->ownerId_ == nullptr && this->recordSide_ == nullptr && this->recordType_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->timeout_ == nullptr; };
    // download Field Functions 
    bool hasDownload() const { return this->download_ != nullptr;};
    void deleteDownload() { this->download_ = nullptr;};
    inline int64_t getDownload() const { DARABONBA_PTR_GET_DEFAULT(download_, 0L) };
    inline ClinkDescribeRecordFileUrlRequest& setDownload(int64_t download) { DARABONBA_PTR_SET_VALUE(download_, download) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkDescribeRecordFileUrlRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // mainUniqueId Field Functions 
    bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
    void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
    inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
    inline ClinkDescribeRecordFileUrlRequest& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkDescribeRecordFileUrlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recordSide Field Functions 
    bool hasRecordSide() const { return this->recordSide_ != nullptr;};
    void deleteRecordSide() { this->recordSide_ = nullptr;};
    inline int64_t getRecordSide() const { DARABONBA_PTR_GET_DEFAULT(recordSide_, 0L) };
    inline ClinkDescribeRecordFileUrlRequest& setRecordSide(int64_t recordSide) { DARABONBA_PTR_SET_VALUE(recordSide_, recordSide) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline ClinkDescribeRecordFileUrlRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkDescribeRecordFileUrlRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkDescribeRecordFileUrlRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline ClinkDescribeRecordFileUrlRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // ０表示试听，１为下载，默认为1
    shared_ptr<int64_t> download_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 通话记录唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> mainUniqueId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 不传递获取mp3格式录音，传递时获取wav格式录音。1：双轨录音客户侧，2：双轨录音座席侧，3：两侧合成录音
    shared_ptr<int64_t> recordSide_ {};
    // 录音类型。 "record": 通话录音，"voicemail": 留言。默认值为 "record"
    shared_ptr<string> recordType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 获取录音地址超时时长，单位为秒，默认为一小时，范围在一到二十四小时。
    shared_ptr<int64_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
