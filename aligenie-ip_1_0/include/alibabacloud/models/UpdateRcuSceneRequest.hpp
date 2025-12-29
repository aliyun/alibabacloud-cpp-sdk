// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERCUSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERCUSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateRcuSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRcuSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneRelationExtDTO, sceneRelationExtDTO_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRcuSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneRelationExtDTO, sceneRelationExtDTO_);
    };
    UpdateRcuSceneRequest() = default ;
    UpdateRcuSceneRequest(const UpdateRcuSceneRequest &) = default ;
    UpdateRcuSceneRequest(UpdateRcuSceneRequest &&) = default ;
    UpdateRcuSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRcuSceneRequest() = default ;
    UpdateRcuSceneRequest& operator=(const UpdateRcuSceneRequest &) = default ;
    UpdateRcuSceneRequest& operator=(UpdateRcuSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SceneRelationExtDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SceneRelationExtDTO& obj) { 
        DARABONBA_PTR_TO_JSON(CorpusList, corpusList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, SceneRelationExtDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpusList, corpusList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      SceneRelationExtDTO() = default ;
      SceneRelationExtDTO(const SceneRelationExtDTO &) = default ;
      SceneRelationExtDTO(SceneRelationExtDTO &&) = default ;
      SceneRelationExtDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SceneRelationExtDTO() = default ;
      SceneRelationExtDTO& operator=(const SceneRelationExtDTO &) = default ;
      SceneRelationExtDTO& operator=(SceneRelationExtDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->corpusList_ == nullptr
        && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr; };
      // corpusList Field Functions 
      bool hasCorpusList() const { return this->corpusList_ != nullptr;};
      void deleteCorpusList() { this->corpusList_ = nullptr;};
      inline const vector<string> & getCorpusList() const { DARABONBA_PTR_GET_CONST(corpusList_, vector<string>) };
      inline vector<string> getCorpusList() { DARABONBA_PTR_GET(corpusList_, vector<string>) };
      inline SceneRelationExtDTO& setCorpusList(const vector<string> & corpusList) { DARABONBA_PTR_SET_VALUE(corpusList_, corpusList) };
      inline SceneRelationExtDTO& setCorpusList(vector<string> && corpusList) { DARABONBA_PTR_SET_RVALUE(corpusList_, corpusList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SceneRelationExtDTO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline SceneRelationExtDTO& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SceneRelationExtDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<vector<string>> corpusList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> icon_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->sceneId_ == nullptr && this->sceneRelationExtDTO_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateRcuSceneRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateRcuSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneRelationExtDTO Field Functions 
    bool hasSceneRelationExtDTO() const { return this->sceneRelationExtDTO_ != nullptr;};
    void deleteSceneRelationExtDTO() { this->sceneRelationExtDTO_ = nullptr;};
    inline const UpdateRcuSceneRequest::SceneRelationExtDTO & getSceneRelationExtDTO() const { DARABONBA_PTR_GET_CONST(sceneRelationExtDTO_, UpdateRcuSceneRequest::SceneRelationExtDTO) };
    inline UpdateRcuSceneRequest::SceneRelationExtDTO getSceneRelationExtDTO() { DARABONBA_PTR_GET(sceneRelationExtDTO_, UpdateRcuSceneRequest::SceneRelationExtDTO) };
    inline UpdateRcuSceneRequest& setSceneRelationExtDTO(const UpdateRcuSceneRequest::SceneRelationExtDTO & sceneRelationExtDTO) { DARABONBA_PTR_SET_VALUE(sceneRelationExtDTO_, sceneRelationExtDTO) };
    inline UpdateRcuSceneRequest& setSceneRelationExtDTO(UpdateRcuSceneRequest::SceneRelationExtDTO && sceneRelationExtDTO) { DARABONBA_PTR_SET_RVALUE(sceneRelationExtDTO_, sceneRelationExtDTO) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
    // This parameter is required.
    shared_ptr<UpdateRcuSceneRequest::SceneRelationExtDTO> sceneRelationExtDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
