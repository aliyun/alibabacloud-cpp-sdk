// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMSVODPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMSVODPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestStorageParamsVodParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestStorageParamsVodParams& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_TO_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestStorageParamsVodParams& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCompose, autoCompose_);
      DARABONBA_PTR_FROM_JSON(ComposeVodTranscodeGroupId, composeVodTranscodeGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(VodTranscodeGroupId, vodTranscodeGroupId_);
    };
    StartRtcCloudRecordingRequestStorageParamsVodParams() = default ;
    StartRtcCloudRecordingRequestStorageParamsVodParams(const StartRtcCloudRecordingRequestStorageParamsVodParams &) = default ;
    StartRtcCloudRecordingRequestStorageParamsVodParams(StartRtcCloudRecordingRequestStorageParamsVodParams &&) = default ;
    StartRtcCloudRecordingRequestStorageParamsVodParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestStorageParamsVodParams() = default ;
    StartRtcCloudRecordingRequestStorageParamsVodParams& operator=(const StartRtcCloudRecordingRequestStorageParamsVodParams &) = default ;
    StartRtcCloudRecordingRequestStorageParamsVodParams& operator=(StartRtcCloudRecordingRequestStorageParamsVodParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCompose_ == nullptr
        && return this->composeVodTranscodeGroupId_ == nullptr && return this->storageLocation_ == nullptr && return this->vodTranscodeGroupId_ == nullptr; };
    // autoCompose Field Functions 
    bool hasAutoCompose() const { return this->autoCompose_ != nullptr;};
    void deleteAutoCompose() { this->autoCompose_ = nullptr;};
    inline int32_t autoCompose() const { DARABONBA_PTR_GET_DEFAULT(autoCompose_, 0) };
    inline StartRtcCloudRecordingRequestStorageParamsVodParams& setAutoCompose(int32_t autoCompose) { DARABONBA_PTR_SET_VALUE(autoCompose_, autoCompose) };


    // composeVodTranscodeGroupId Field Functions 
    bool hasComposeVodTranscodeGroupId() const { return this->composeVodTranscodeGroupId_ != nullptr;};
    void deleteComposeVodTranscodeGroupId() { this->composeVodTranscodeGroupId_ = nullptr;};
    inline string composeVodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(composeVodTranscodeGroupId_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsVodParams& setComposeVodTranscodeGroupId(string composeVodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(composeVodTranscodeGroupId_, composeVodTranscodeGroupId) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsVodParams& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // vodTranscodeGroupId Field Functions 
    bool hasVodTranscodeGroupId() const { return this->vodTranscodeGroupId_ != nullptr;};
    void deleteVodTranscodeGroupId() { this->vodTranscodeGroupId_ = nullptr;};
    inline string vodTranscodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(vodTranscodeGroupId_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsVodParams& setVodTranscodeGroupId(string vodTranscodeGroupId) { DARABONBA_PTR_SET_VALUE(vodTranscodeGroupId_, vodTranscodeGroupId) };


  protected:
    std::shared_ptr<int32_t> autoCompose_ = nullptr;
    std::shared_ptr<string> composeVodTranscodeGroupId_ = nullptr;
    std::shared_ptr<string> storageLocation_ = nullptr;
    std::shared_ptr<string> vodTranscodeGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
