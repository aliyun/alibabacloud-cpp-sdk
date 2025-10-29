// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartRtcCloudRecordingRequestStorageParamsFileInfo.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestStorageParamsOSSParams.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestStorageParamsVodParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestStorageParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestStorageParams& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(OSSParams, OSSParams_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(VodParams, vodParams_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestStorageParams& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(OSSParams, OSSParams_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(VodParams, vodParams_);
    };
    StartRtcCloudRecordingRequestStorageParams() = default ;
    StartRtcCloudRecordingRequestStorageParams(const StartRtcCloudRecordingRequestStorageParams &) = default ;
    StartRtcCloudRecordingRequestStorageParams(StartRtcCloudRecordingRequestStorageParams &&) = default ;
    StartRtcCloudRecordingRequestStorageParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestStorageParams() = default ;
    StartRtcCloudRecordingRequestStorageParams& operator=(const StartRtcCloudRecordingRequestStorageParams &) = default ;
    StartRtcCloudRecordingRequestStorageParams& operator=(StartRtcCloudRecordingRequestStorageParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileInfo_ == nullptr
        && return this->OSSParams_ == nullptr && return this->storageType_ == nullptr && return this->vodParams_ == nullptr; };
    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo> & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo>) };
    inline vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo> fileInfo() { DARABONBA_PTR_GET(fileInfo_, vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo>) };
    inline StartRtcCloudRecordingRequestStorageParams& setFileInfo(const vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo> & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline StartRtcCloudRecordingRequestStorageParams& setFileInfo(vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo> && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // OSSParams Field Functions 
    bool hasOSSParams() const { return this->OSSParams_ != nullptr;};
    void deleteOSSParams() { this->OSSParams_ = nullptr;};
    inline const Models::StartRtcCloudRecordingRequestStorageParamsOSSParams & OSSParams() const { DARABONBA_PTR_GET_CONST(OSSParams_, Models::StartRtcCloudRecordingRequestStorageParamsOSSParams) };
    inline Models::StartRtcCloudRecordingRequestStorageParamsOSSParams OSSParams() { DARABONBA_PTR_GET(OSSParams_, Models::StartRtcCloudRecordingRequestStorageParamsOSSParams) };
    inline StartRtcCloudRecordingRequestStorageParams& setOSSParams(const Models::StartRtcCloudRecordingRequestStorageParamsOSSParams & OSSParams) { DARABONBA_PTR_SET_VALUE(OSSParams_, OSSParams) };
    inline StartRtcCloudRecordingRequestStorageParams& setOSSParams(Models::StartRtcCloudRecordingRequestStorageParamsOSSParams && OSSParams) { DARABONBA_PTR_SET_RVALUE(OSSParams_, OSSParams) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline int32_t storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, 0) };
    inline StartRtcCloudRecordingRequestStorageParams& setStorageType(int32_t storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // vodParams Field Functions 
    bool hasVodParams() const { return this->vodParams_ != nullptr;};
    void deleteVodParams() { this->vodParams_ = nullptr;};
    inline const Models::StartRtcCloudRecordingRequestStorageParamsVodParams & vodParams() const { DARABONBA_PTR_GET_CONST(vodParams_, Models::StartRtcCloudRecordingRequestStorageParamsVodParams) };
    inline Models::StartRtcCloudRecordingRequestStorageParamsVodParams vodParams() { DARABONBA_PTR_GET(vodParams_, Models::StartRtcCloudRecordingRequestStorageParamsVodParams) };
    inline StartRtcCloudRecordingRequestStorageParams& setVodParams(const Models::StartRtcCloudRecordingRequestStorageParamsVodParams & vodParams) { DARABONBA_PTR_SET_VALUE(vodParams_, vodParams) };
    inline StartRtcCloudRecordingRequestStorageParams& setVodParams(Models::StartRtcCloudRecordingRequestStorageParamsVodParams && vodParams) { DARABONBA_PTR_SET_RVALUE(vodParams_, vodParams) };


  protected:
    std::shared_ptr<vector<Models::StartRtcCloudRecordingRequestStorageParamsFileInfo>> fileInfo_ = nullptr;
    std::shared_ptr<Models::StartRtcCloudRecordingRequestStorageParamsOSSParams> OSSParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> storageType_ = nullptr;
    std::shared_ptr<Models::StartRtcCloudRecordingRequestStorageParamsVodParams> vodParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
