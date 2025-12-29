// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCUSCENESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCUSCENESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class CreateRcuSceneShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRcuSceneShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneRelationExtDTO, sceneRelationExtDTOShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRcuSceneShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneRelationExtDTO, sceneRelationExtDTOShrink_);
    };
    CreateRcuSceneShrinkRequest() = default ;
    CreateRcuSceneShrinkRequest(const CreateRcuSceneShrinkRequest &) = default ;
    CreateRcuSceneShrinkRequest(CreateRcuSceneShrinkRequest &&) = default ;
    CreateRcuSceneShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRcuSceneShrinkRequest() = default ;
    CreateRcuSceneShrinkRequest& operator=(const CreateRcuSceneShrinkRequest &) = default ;
    CreateRcuSceneShrinkRequest& operator=(CreateRcuSceneShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->sceneId_ == nullptr && this->sceneRelationExtDTOShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline CreateRcuSceneShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline CreateRcuSceneShrinkRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneRelationExtDTOShrink Field Functions 
    bool hasSceneRelationExtDTOShrink() const { return this->sceneRelationExtDTOShrink_ != nullptr;};
    void deleteSceneRelationExtDTOShrink() { this->sceneRelationExtDTOShrink_ = nullptr;};
    inline string getSceneRelationExtDTOShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneRelationExtDTOShrink_, "") };
    inline CreateRcuSceneShrinkRequest& setSceneRelationExtDTOShrink(string sceneRelationExtDTOShrink) { DARABONBA_PTR_SET_VALUE(sceneRelationExtDTOShrink_, sceneRelationExtDTOShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
    // This parameter is required.
    shared_ptr<string> sceneRelationExtDTOShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
