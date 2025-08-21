// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2REQUESTOPENCREATEPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTOAUTH2REQUESTOPENCREATEPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentList, contentList_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(NeedAlbumContinued, needAlbumContinued_);
      DARABONBA_PTR_TO_JSON(PlayFrom, playFrom_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(NeedAlbumContinued, needAlbumContinued_);
      DARABONBA_PTR_FROM_JSON(PlayFrom, playFrom_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
    };
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest() = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest(const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest &) = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest(CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest &&) = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest() = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& operator=(const CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest &) = default ;
    CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& operator=(CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentList_ != nullptr
        && this->contentType_ != nullptr && this->extendInfo_ != nullptr && this->index_ != nullptr && this->needAlbumContinued_ != nullptr && this->playFrom_ != nullptr
        && this->playMode_ != nullptr; };
    // contentList Field Functions 
    bool hasContentList() const { return this->contentList_ != nullptr;};
    void deleteContentList() { this->contentList_ = nullptr;};
    inline const vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList> & contentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList>) };
    inline vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList> contentList() { DARABONBA_PTR_GET(contentList_, vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList>) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setContentList(const vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setContentList(vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // needAlbumContinued Field Functions 
    bool hasNeedAlbumContinued() const { return this->needAlbumContinued_ != nullptr;};
    void deleteNeedAlbumContinued() { this->needAlbumContinued_ = nullptr;};
    inline bool needAlbumContinued() const { DARABONBA_PTR_GET_DEFAULT(needAlbumContinued_, false) };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setNeedAlbumContinued(bool needAlbumContinued) { DARABONBA_PTR_SET_VALUE(needAlbumContinued_, needAlbumContinued) };


    // playFrom Field Functions 
    bool hasPlayFrom() const { return this->playFrom_ != nullptr;};
    void deletePlayFrom() { this->playFrom_ = nullptr;};
    inline string playFrom() const { DARABONBA_PTR_GET_DEFAULT(playFrom_, "") };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setPlayFrom(string playFrom) { DARABONBA_PTR_SET_VALUE(playFrom_, playFrom) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string playMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline CreatePlayingListOAuth2RequestOpenCreatePlayingListRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreatePlayingListOAuth2RequestOpenCreatePlayingListRequestContentList>> contentList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contentType_ = nullptr;
    Darabonba::Json extendInfo_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<bool> needAlbumContinued_ = nullptr;
    std::shared_ptr<string> playFrom_ = nullptr;
    std::shared_ptr<string> playMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
