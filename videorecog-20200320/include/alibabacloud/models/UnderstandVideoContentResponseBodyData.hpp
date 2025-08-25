// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnderstandVideoContentResponseBodyDataVideoInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class UnderstandVideoContentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnderstandVideoContentResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(TagInfo, tagInfo_);
      DARABONBA_PTR_TO_JSON(VideoInfo, videoInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UnderstandVideoContentResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(TagInfo, tagInfo_);
      DARABONBA_PTR_FROM_JSON(VideoInfo, videoInfo_);
    };
    UnderstandVideoContentResponseBodyData() = default ;
    UnderstandVideoContentResponseBodyData(const UnderstandVideoContentResponseBodyData &) = default ;
    UnderstandVideoContentResponseBodyData(UnderstandVideoContentResponseBodyData &&) = default ;
    UnderstandVideoContentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnderstandVideoContentResponseBodyData() = default ;
    UnderstandVideoContentResponseBodyData& operator=(const UnderstandVideoContentResponseBodyData &) = default ;
    UnderstandVideoContentResponseBodyData& operator=(UnderstandVideoContentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagInfo_ != nullptr
        && this->videoInfo_ != nullptr; };
    // tagInfo Field Functions 
    bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
    void deleteTagInfo() { this->tagInfo_ = nullptr;};
    inline     const Darabonba::Json & tagInfo() const { DARABONBA_GET(tagInfo_) };
    Darabonba::Json & tagInfo() { DARABONBA_GET(tagInfo_) };
    inline UnderstandVideoContentResponseBodyData& setTagInfo(const Darabonba::Json & tagInfo) { DARABONBA_SET_VALUE(tagInfo_, tagInfo) };
    inline UnderstandVideoContentResponseBodyData& setTagInfo(Darabonba::Json & tagInfo) { DARABONBA_SET_RVALUE(tagInfo_, tagInfo) };


    // videoInfo Field Functions 
    bool hasVideoInfo() const { return this->videoInfo_ != nullptr;};
    void deleteVideoInfo() { this->videoInfo_ = nullptr;};
    inline const Models::UnderstandVideoContentResponseBodyDataVideoInfo & videoInfo() const { DARABONBA_PTR_GET_CONST(videoInfo_, Models::UnderstandVideoContentResponseBodyDataVideoInfo) };
    inline Models::UnderstandVideoContentResponseBodyDataVideoInfo videoInfo() { DARABONBA_PTR_GET(videoInfo_, Models::UnderstandVideoContentResponseBodyDataVideoInfo) };
    inline UnderstandVideoContentResponseBodyData& setVideoInfo(const Models::UnderstandVideoContentResponseBodyDataVideoInfo & videoInfo) { DARABONBA_PTR_SET_VALUE(videoInfo_, videoInfo) };
    inline UnderstandVideoContentResponseBodyData& setVideoInfo(Models::UnderstandVideoContentResponseBodyDataVideoInfo && videoInfo) { DARABONBA_PTR_SET_RVALUE(videoInfo_, videoInfo) };


  protected:
    Darabonba::Json tagInfo_ = nullptr;
    std::shared_ptr<Models::UnderstandVideoContentResponseBodyDataVideoInfo> videoInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
