// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPTSSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPTSSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class CreatePtsSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePtsSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePtsSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    CreatePtsSceneRequest() = default ;
    CreatePtsSceneRequest(const CreatePtsSceneRequest &) = default ;
    CreatePtsSceneRequest(CreatePtsSceneRequest &&) = default ;
    CreatePtsSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePtsSceneRequest() = default ;
    CreatePtsSceneRequest& operator=(const CreatePtsSceneRequest &) = default ;
    CreatePtsSceneRequest& operator=(CreatePtsSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreatePtsSceneRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // The scenario details.
    // 
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
