// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterSceneAudioResponseBodyAudioLayers.hpp>
#include <alibabacloud/models/DescribeCasterSceneAudioResponseBodyMixList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterSceneAudioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterSceneAudioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayers, audioLayers_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterSceneAudioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayers, audioLayers_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCasterSceneAudioResponseBody() = default ;
    DescribeCasterSceneAudioResponseBody(const DescribeCasterSceneAudioResponseBody &) = default ;
    DescribeCasterSceneAudioResponseBody(DescribeCasterSceneAudioResponseBody &&) = default ;
    DescribeCasterSceneAudioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterSceneAudioResponseBody() = default ;
    DescribeCasterSceneAudioResponseBody& operator=(const DescribeCasterSceneAudioResponseBody &) = default ;
    DescribeCasterSceneAudioResponseBody& operator=(DescribeCasterSceneAudioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLayers_ == nullptr
        && return this->casterId_ == nullptr && return this->followEnable_ == nullptr && return this->mixList_ == nullptr && return this->requestId_ == nullptr; };
    // audioLayers Field Functions 
    bool hasAudioLayers() const { return this->audioLayers_ != nullptr;};
    void deleteAudioLayers() { this->audioLayers_ = nullptr;};
    inline const DescribeCasterSceneAudioResponseBodyAudioLayers & audioLayers() const { DARABONBA_PTR_GET_CONST(audioLayers_, DescribeCasterSceneAudioResponseBodyAudioLayers) };
    inline DescribeCasterSceneAudioResponseBodyAudioLayers audioLayers() { DARABONBA_PTR_GET(audioLayers_, DescribeCasterSceneAudioResponseBodyAudioLayers) };
    inline DescribeCasterSceneAudioResponseBody& setAudioLayers(const DescribeCasterSceneAudioResponseBodyAudioLayers & audioLayers) { DARABONBA_PTR_SET_VALUE(audioLayers_, audioLayers) };
    inline DescribeCasterSceneAudioResponseBody& setAudioLayers(DescribeCasterSceneAudioResponseBodyAudioLayers && audioLayers) { DARABONBA_PTR_SET_RVALUE(audioLayers_, audioLayers) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterSceneAudioResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // followEnable Field Functions 
    bool hasFollowEnable() const { return this->followEnable_ != nullptr;};
    void deleteFollowEnable() { this->followEnable_ = nullptr;};
    inline int32_t followEnable() const { DARABONBA_PTR_GET_DEFAULT(followEnable_, 0) };
    inline DescribeCasterSceneAudioResponseBody& setFollowEnable(int32_t followEnable) { DARABONBA_PTR_SET_VALUE(followEnable_, followEnable) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const DescribeCasterSceneAudioResponseBodyMixList & mixList() const { DARABONBA_PTR_GET_CONST(mixList_, DescribeCasterSceneAudioResponseBodyMixList) };
    inline DescribeCasterSceneAudioResponseBodyMixList mixList() { DARABONBA_PTR_GET(mixList_, DescribeCasterSceneAudioResponseBodyMixList) };
    inline DescribeCasterSceneAudioResponseBody& setMixList(const DescribeCasterSceneAudioResponseBodyMixList & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline DescribeCasterSceneAudioResponseBody& setMixList(DescribeCasterSceneAudioResponseBodyMixList && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterSceneAudioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the audio layers.
    std::shared_ptr<DescribeCasterSceneAudioResponseBodyAudioLayers> audioLayers_ = nullptr;
    // The ID of the production studio. You can specify the ID in a request to start a scene in the production studio.
    std::shared_ptr<string> casterId_ = nullptr;
    // The audio mode. By default, the audio follows video (AFV) mode is used. Valid values:
    // 
    // *   **0**: the audio mixing mode
    // *   **1**: the AFV mode
    std::shared_ptr<int32_t> followEnable_ = nullptr;
    std::shared_ptr<DescribeCasterSceneAudioResponseBodyMixList> mixList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
