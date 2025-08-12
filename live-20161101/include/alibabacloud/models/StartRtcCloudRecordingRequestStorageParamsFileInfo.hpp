// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMSFILEINFO_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTSTORAGEPARAMSFILEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestStorageParamsFileInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestStorageParamsFileInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FileNamePattern, fileNamePattern_);
      DARABONBA_PTR_TO_JSON(FilePathPrefix, filePathPrefix_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(SliceNamePattern, sliceNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestStorageParamsFileInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FileNamePattern, fileNamePattern_);
      DARABONBA_PTR_FROM_JSON(FilePathPrefix, filePathPrefix_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(SliceNamePattern, sliceNamePattern_);
    };
    StartRtcCloudRecordingRequestStorageParamsFileInfo() = default ;
    StartRtcCloudRecordingRequestStorageParamsFileInfo(const StartRtcCloudRecordingRequestStorageParamsFileInfo &) = default ;
    StartRtcCloudRecordingRequestStorageParamsFileInfo(StartRtcCloudRecordingRequestStorageParamsFileInfo &&) = default ;
    StartRtcCloudRecordingRequestStorageParamsFileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestStorageParamsFileInfo() = default ;
    StartRtcCloudRecordingRequestStorageParamsFileInfo& operator=(const StartRtcCloudRecordingRequestStorageParamsFileInfo &) = default ;
    StartRtcCloudRecordingRequestStorageParamsFileInfo& operator=(StartRtcCloudRecordingRequestStorageParamsFileInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileNamePattern_ != nullptr
        && this->filePathPrefix_ != nullptr && this->format_ != nullptr && this->sliceNamePattern_ != nullptr; };
    // fileNamePattern Field Functions 
    bool hasFileNamePattern() const { return this->fileNamePattern_ != nullptr;};
    void deleteFileNamePattern() { this->fileNamePattern_ = nullptr;};
    inline string fileNamePattern() const { DARABONBA_PTR_GET_DEFAULT(fileNamePattern_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsFileInfo& setFileNamePattern(string fileNamePattern) { DARABONBA_PTR_SET_VALUE(fileNamePattern_, fileNamePattern) };


    // filePathPrefix Field Functions 
    bool hasFilePathPrefix() const { return this->filePathPrefix_ != nullptr;};
    void deleteFilePathPrefix() { this->filePathPrefix_ = nullptr;};
    inline const vector<string> & filePathPrefix() const { DARABONBA_PTR_GET_CONST(filePathPrefix_, vector<string>) };
    inline vector<string> filePathPrefix() { DARABONBA_PTR_GET(filePathPrefix_, vector<string>) };
    inline StartRtcCloudRecordingRequestStorageParamsFileInfo& setFilePathPrefix(const vector<string> & filePathPrefix) { DARABONBA_PTR_SET_VALUE(filePathPrefix_, filePathPrefix) };
    inline StartRtcCloudRecordingRequestStorageParamsFileInfo& setFilePathPrefix(vector<string> && filePathPrefix) { DARABONBA_PTR_SET_RVALUE(filePathPrefix_, filePathPrefix) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsFileInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // sliceNamePattern Field Functions 
    bool hasSliceNamePattern() const { return this->sliceNamePattern_ != nullptr;};
    void deleteSliceNamePattern() { this->sliceNamePattern_ = nullptr;};
    inline string sliceNamePattern() const { DARABONBA_PTR_GET_DEFAULT(sliceNamePattern_, "") };
    inline StartRtcCloudRecordingRequestStorageParamsFileInfo& setSliceNamePattern(string sliceNamePattern) { DARABONBA_PTR_SET_VALUE(sliceNamePattern_, sliceNamePattern) };


  protected:
    std::shared_ptr<string> fileNamePattern_ = nullptr;
    std::shared_ptr<vector<string>> filePathPrefix_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> sliceNamePattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
