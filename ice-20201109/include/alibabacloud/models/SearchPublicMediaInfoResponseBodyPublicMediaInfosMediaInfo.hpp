// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODYPUBLICMEDIAINFOSMEDIAINFO_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPUBLICMEDIAINFORESPONSEBODYPUBLICMEDIAINFOSMEDIAINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData.hpp>
#include <alibabacloud/models/SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_TO_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicMetaData, dynamicMetaData_);
      DARABONBA_PTR_FROM_JSON(MediaBasicInfo, mediaBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo() = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo(const SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo &) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo(SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo &&) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo() = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& operator=(const SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo &) = default ;
    SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& operator=(SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicMetaData_ != nullptr
        && this->mediaBasicInfo_ != nullptr && this->mediaId_ != nullptr; };
    // dynamicMetaData Field Functions 
    bool hasDynamicMetaData() const { return this->dynamicMetaData_ != nullptr;};
    void deleteDynamicMetaData() { this->dynamicMetaData_ = nullptr;};
    inline const Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData & dynamicMetaData() const { DARABONBA_PTR_GET_CONST(dynamicMetaData_, Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData) };
    inline Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData dynamicMetaData() { DARABONBA_PTR_GET(dynamicMetaData_, Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& setDynamicMetaData(const Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData & dynamicMetaData) { DARABONBA_PTR_SET_VALUE(dynamicMetaData_, dynamicMetaData) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& setDynamicMetaData(Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData && dynamicMetaData) { DARABONBA_PTR_SET_RVALUE(dynamicMetaData_, dynamicMetaData) };


    // mediaBasicInfo Field Functions 
    bool hasMediaBasicInfo() const { return this->mediaBasicInfo_ != nullptr;};
    void deleteMediaBasicInfo() { this->mediaBasicInfo_ = nullptr;};
    inline const Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo & mediaBasicInfo() const { DARABONBA_PTR_GET_CONST(mediaBasicInfo_, Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo) };
    inline Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo mediaBasicInfo() { DARABONBA_PTR_GET(mediaBasicInfo_, Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& setMediaBasicInfo(const Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo & mediaBasicInfo) { DARABONBA_PTR_SET_VALUE(mediaBasicInfo_, mediaBasicInfo) };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& setMediaBasicInfo(Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo && mediaBasicInfo) { DARABONBA_PTR_SET_RVALUE(mediaBasicInfo_, mediaBasicInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfo& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoDynamicMetaData> dynamicMetaData_ = nullptr;
    // BasicInfo
    std::shared_ptr<Models::SearchPublicMediaInfoResponseBodyPublicMediaInfosMediaInfoMediaBasicInfo> mediaBasicInfo_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
