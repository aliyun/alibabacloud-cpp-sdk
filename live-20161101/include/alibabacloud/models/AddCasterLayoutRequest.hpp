// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCasterLayoutRequestAudioLayer.hpp>
#include <alibabacloud/models/AddCasterLayoutRequestVideoLayer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_TO_JSON(BlendList, blendList_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VideoLayer, videoLayer_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_FROM_JSON(BlendList, blendList_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VideoLayer, videoLayer_);
    };
    AddCasterLayoutRequest() = default ;
    AddCasterLayoutRequest(const AddCasterLayoutRequest &) = default ;
    AddCasterLayoutRequest(AddCasterLayoutRequest &&) = default ;
    AddCasterLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterLayoutRequest() = default ;
    AddCasterLayoutRequest& operator=(const AddCasterLayoutRequest &) = default ;
    AddCasterLayoutRequest& operator=(AddCasterLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioLayer_ != nullptr
        && this->blendList_ != nullptr && this->casterId_ != nullptr && this->mixList_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->videoLayer_ != nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<AddCasterLayoutRequestAudioLayer> & audioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<AddCasterLayoutRequestAudioLayer>) };
    inline vector<AddCasterLayoutRequestAudioLayer> audioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<AddCasterLayoutRequestAudioLayer>) };
    inline AddCasterLayoutRequest& setAudioLayer(const vector<AddCasterLayoutRequestAudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline AddCasterLayoutRequest& setAudioLayer(vector<AddCasterLayoutRequestAudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    // blendList Field Functions 
    bool hasBlendList() const { return this->blendList_ != nullptr;};
    void deleteBlendList() { this->blendList_ = nullptr;};
    inline const vector<string> & blendList() const { DARABONBA_PTR_GET_CONST(blendList_, vector<string>) };
    inline vector<string> blendList() { DARABONBA_PTR_GET(blendList_, vector<string>) };
    inline AddCasterLayoutRequest& setBlendList(const vector<string> & blendList) { DARABONBA_PTR_SET_VALUE(blendList_, blendList) };
    inline AddCasterLayoutRequest& setBlendList(vector<string> && blendList) { DARABONBA_PTR_SET_RVALUE(blendList_, blendList) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const vector<string> & mixList() const { DARABONBA_PTR_GET_CONST(mixList_, vector<string>) };
    inline vector<string> mixList() { DARABONBA_PTR_GET(mixList_, vector<string>) };
    inline AddCasterLayoutRequest& setMixList(const vector<string> & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline AddCasterLayoutRequest& setMixList(vector<string> && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // videoLayer Field Functions 
    bool hasVideoLayer() const { return this->videoLayer_ != nullptr;};
    void deleteVideoLayer() { this->videoLayer_ = nullptr;};
    inline const vector<AddCasterLayoutRequestVideoLayer> & videoLayer() const { DARABONBA_PTR_GET_CONST(videoLayer_, vector<AddCasterLayoutRequestVideoLayer>) };
    inline vector<AddCasterLayoutRequestVideoLayer> videoLayer() { DARABONBA_PTR_GET(videoLayer_, vector<AddCasterLayoutRequestVideoLayer>) };
    inline AddCasterLayoutRequest& setVideoLayer(const vector<AddCasterLayoutRequestVideoLayer> & videoLayer) { DARABONBA_PTR_SET_VALUE(videoLayer_, videoLayer) };
    inline AddCasterLayoutRequest& setVideoLayer(vector<AddCasterLayoutRequestVideoLayer> && videoLayer) { DARABONBA_PTR_SET_RVALUE(videoLayer_, videoLayer) };


  protected:
    // Audio layout.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddCasterLayoutRequestAudioLayer>> audioLayer_ = nullptr;
    // The element represents the location ID of the video resource, i.e., LocationId. Refer to [Adding Video Source](https://help.aliyun.com/document_detail/60250.html) for LocationId, which corresponds in order with the VideoLayers elements.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> blendList_ = nullptr;
    // The ID of the production studio.
    // 
    // If you create a production studio through the [CreateCaster](~~69338#doc-api-live-CreateCaster~~ "Creates a production studio.") interface, check the value of the CasterId parameter in the response.
    // 
    // If you create a production studio through the ApsaraVideo Live Console, log in to the console, then check the ID of the production studio through the following path:
    // 
    // Production Studios > Production Studio Management
    // 
    // >  The CasterId is reflected in the Name column on the Production Studio Management page.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The element represents the location ID of the audio resource, i.e., LocationId.
    // LocationId is referred to in [Adding Video Source](https://help.aliyun.com/document_detail/60250.html), and corresponds in order with the AudioLayers elements.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> mixList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Video layout.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddCasterLayoutRequestVideoLayer>> videoLayer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
