// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODYTASKINFORECORDFILELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCLOUDRECORDINGFILESRESPONSEBODYTASKINFORECORDFILELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& obj) { 
      DARABONBA_PTR_TO_JSON(HlsFileList, hlsFileList_);
      DARABONBA_PTR_TO_JSON(Mp3FileList, mp3FileList_);
      DARABONBA_PTR_TO_JSON(Mp4FileList, mp4FileList_);
      DARABONBA_PTR_TO_JSON(VodMediaList, vodMediaList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(HlsFileList, hlsFileList_);
      DARABONBA_PTR_FROM_JSON(Mp3FileList, mp3FileList_);
      DARABONBA_PTR_FROM_JSON(Mp4FileList, mp4FileList_);
      DARABONBA_PTR_FROM_JSON(VodMediaList, vodMediaList_);
    };
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList() = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList &) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList(DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList &&) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList() = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& operator=(const DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList &) = default ;
    DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& operator=(DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hlsFileList_ == nullptr
        && return this->mp3FileList_ == nullptr && return this->mp4FileList_ == nullptr && return this->vodMediaList_ == nullptr; };
    // hlsFileList Field Functions 
    bool hasHlsFileList() const { return this->hlsFileList_ != nullptr;};
    void deleteHlsFileList() { this->hlsFileList_ = nullptr;};
    inline const vector<string> & hlsFileList() const { DARABONBA_PTR_GET_CONST(hlsFileList_, vector<string>) };
    inline vector<string> hlsFileList() { DARABONBA_PTR_GET(hlsFileList_, vector<string>) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setHlsFileList(const vector<string> & hlsFileList) { DARABONBA_PTR_SET_VALUE(hlsFileList_, hlsFileList) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setHlsFileList(vector<string> && hlsFileList) { DARABONBA_PTR_SET_RVALUE(hlsFileList_, hlsFileList) };


    // mp3FileList Field Functions 
    bool hasMp3FileList() const { return this->mp3FileList_ != nullptr;};
    void deleteMp3FileList() { this->mp3FileList_ = nullptr;};
    inline const vector<string> & mp3FileList() const { DARABONBA_PTR_GET_CONST(mp3FileList_, vector<string>) };
    inline vector<string> mp3FileList() { DARABONBA_PTR_GET(mp3FileList_, vector<string>) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setMp3FileList(const vector<string> & mp3FileList) { DARABONBA_PTR_SET_VALUE(mp3FileList_, mp3FileList) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setMp3FileList(vector<string> && mp3FileList) { DARABONBA_PTR_SET_RVALUE(mp3FileList_, mp3FileList) };


    // mp4FileList Field Functions 
    bool hasMp4FileList() const { return this->mp4FileList_ != nullptr;};
    void deleteMp4FileList() { this->mp4FileList_ = nullptr;};
    inline const vector<string> & mp4FileList() const { DARABONBA_PTR_GET_CONST(mp4FileList_, vector<string>) };
    inline vector<string> mp4FileList() { DARABONBA_PTR_GET(mp4FileList_, vector<string>) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setMp4FileList(const vector<string> & mp4FileList) { DARABONBA_PTR_SET_VALUE(mp4FileList_, mp4FileList) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setMp4FileList(vector<string> && mp4FileList) { DARABONBA_PTR_SET_RVALUE(mp4FileList_, mp4FileList) };


    // vodMediaList Field Functions 
    bool hasVodMediaList() const { return this->vodMediaList_ != nullptr;};
    void deleteVodMediaList() { this->vodMediaList_ = nullptr;};
    inline const vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList> & vodMediaList() const { DARABONBA_PTR_GET_CONST(vodMediaList_, vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList>) };
    inline vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList> vodMediaList() { DARABONBA_PTR_GET(vodMediaList_, vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList>) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setVodMediaList(const vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList> & vodMediaList) { DARABONBA_PTR_SET_VALUE(vodMediaList_, vodMediaList) };
    inline DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileList& setVodMediaList(vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList> && vodMediaList) { DARABONBA_PTR_SET_RVALUE(vodMediaList_, vodMediaList) };


  protected:
    std::shared_ptr<vector<string>> hlsFileList_ = nullptr;
    std::shared_ptr<vector<string>> mp3FileList_ = nullptr;
    std::shared_ptr<vector<string>> mp4FileList_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRtcCloudRecordingFilesResponseBodyTaskInfoRecordFileListVodMediaList>> vodMediaList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
