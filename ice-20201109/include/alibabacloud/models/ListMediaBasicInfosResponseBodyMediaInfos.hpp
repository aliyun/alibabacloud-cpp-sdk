// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSRESPONSEBODYMEDIAINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIABASICINFOSRESPONSEBODYMEDIAINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaBasicInfosResponseBodyMediaInfosFileInfoList.hpp>
#include <alibabacloud/models/ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaBasicInfosResponseBodyMediaInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaBasicInfosResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaBasicInfosResponseBodyMediaInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FileInfoList, fileInfoList_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    ListMediaBasicInfosResponseBodyMediaInfos() = default ;
    ListMediaBasicInfosResponseBodyMediaInfos(const ListMediaBasicInfosResponseBodyMediaInfos &) = default ;
    ListMediaBasicInfosResponseBodyMediaInfos(ListMediaBasicInfosResponseBodyMediaInfos &&) = default ;
    ListMediaBasicInfosResponseBodyMediaInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaBasicInfosResponseBodyMediaInfos() = default ;
    ListMediaBasicInfosResponseBodyMediaInfos& operator=(const ListMediaBasicInfosResponseBodyMediaInfos &) = default ;
    ListMediaBasicInfosResponseBodyMediaInfos& operator=(ListMediaBasicInfosResponseBodyMediaInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileInfoList_ == nullptr
        && return this->mediaBasicInfo_ == nullptr && return this->mediaId_ == nullptr; };
    // fileInfoList Field Functions 
    bool hasFileInfoList() const { return this->fileInfoList_ != nullptr;};
    void deleteFileInfoList() { this->fileInfoList_ = nullptr;};
    inline const vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList> & fileInfoList() const { DARABONBA_PTR_GET_CONST(fileInfoList_, vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>) };
    inline vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList> fileInfoList() { DARABONBA_PTR_GET(fileInfoList_, vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>) };
    inline ListMediaBasicInfosResponseBodyMediaInfos& setFileInfoList(const vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList> & fileInfoList) { DARABONBA_PTR_SET_VALUE(fileInfoList_, fileInfoList) };
    inline ListMediaBasicInfosResponseBodyMediaInfos& setFileInfoList(vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList> && fileInfoList) { DARABONBA_PTR_SET_RVALUE(fileInfoList_, fileInfoList) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo) };
    inline Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo) };
    inline ListMediaBasicInfosResponseBodyMediaInfos& setMediaBasicInfo(const Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline ListMediaBasicInfosResponseBodyMediaInfos& setMediaBasicInfo(Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListMediaBasicInfosResponseBodyMediaInfos& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // FileInfos
    std::shared_ptr<vector<Models::ListMediaBasicInfosResponseBodyMediaInfosFileInfoList>> fileInfoList_ = nullptr;
    // BasicInfo
    std::shared_ptr<Models::ListMediaBasicInfosResponseBodyMediaInfosMediaBasicInfo> mediaBasicInfo_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
