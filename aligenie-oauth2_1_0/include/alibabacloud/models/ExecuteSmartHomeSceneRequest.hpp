// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESMARTHOMESCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESMARTHOMESCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class ExecuteSmartHomeSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSmartHomeSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FamilyId, familyId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSmartHomeSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FamilyId, familyId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    ExecuteSmartHomeSceneRequest() = default ;
    ExecuteSmartHomeSceneRequest(const ExecuteSmartHomeSceneRequest &) = default ;
    ExecuteSmartHomeSceneRequest(ExecuteSmartHomeSceneRequest &&) = default ;
    ExecuteSmartHomeSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSmartHomeSceneRequest() = default ;
    ExecuteSmartHomeSceneRequest& operator=(const ExecuteSmartHomeSceneRequest &) = default ;
    ExecuteSmartHomeSceneRequest& operator=(ExecuteSmartHomeSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->familyId_ != nullptr
        && this->sceneId_ != nullptr; };
    // familyId Field Functions 
    bool hasFamilyId() const { return this->familyId_ != nullptr;};
    void deleteFamilyId() { this->familyId_ = nullptr;};
    inline string familyId() const { DARABONBA_PTR_GET_DEFAULT(familyId_, "") };
    inline ExecuteSmartHomeSceneRequest& setFamilyId(string familyId) { DARABONBA_PTR_SET_VALUE(familyId_, familyId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ExecuteSmartHomeSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> familyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
