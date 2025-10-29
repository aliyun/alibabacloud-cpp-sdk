// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODYTASKINFORECORDFILELISTVODMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODYTASKINFORECORDFILELISTVODMEDIALIST_HPP_
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
  class DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(MergedIds, mergedIds_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(MergedIds, mergedIds_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList() = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList &) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList(DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList &&) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList() = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& operator=(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList &) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& operator=(DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr
        && return this->mergedIds_ == nullptr && return this->stream_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline const vector<string> & mediaIds() const { DARABONBA_PTR_GET_CONST(mediaIds_, vector<string>) };
    inline vector<string> mediaIds() { DARABONBA_PTR_GET(mediaIds_, vector<string>) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& setMediaIds(const vector<string> & mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& setMediaIds(vector<string> && mediaIds) { DARABONBA_PTR_SET_RVALUE(mediaIds_, mediaIds) };


    // mergedIds Field Functions 
    bool hasMergedIds() const { return this->mergedIds_ != nullptr;};
    void deleteMergedIds() { this->mergedIds_ = nullptr;};
    inline const vector<string> & mergedIds() const { DARABONBA_PTR_GET_CONST(mergedIds_, vector<string>) };
    inline vector<string> mergedIds() { DARABONBA_PTR_GET(mergedIds_, vector<string>) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& setMergedIds(const vector<string> & mergedIds) { DARABONBA_PTR_SET_VALUE(mergedIds_, mergedIds) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& setMergedIds(vector<string> && mergedIds) { DARABONBA_PTR_SET_RVALUE(mergedIds_, mergedIds) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    std::shared_ptr<vector<string>> mediaIds_ = nullptr;
    std::shared_ptr<vector<string>> mergedIds_ = nullptr;
    std::shared_ptr<string> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
