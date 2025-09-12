// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSSERVICEINSPECTION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSSERVICEINSPECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTaskRequestParametersServiceInspectionInspectionContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersServiceInspection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersServiceInspection& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionContents, inspectionContents_);
      DARABONBA_PTR_TO_JSON(InspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
      DARABONBA_ANY_TO_JSON(SpeakerMap, speakerMap_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersServiceInspection& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionContents, inspectionContents_);
      DARABONBA_PTR_FROM_JSON(InspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
      DARABONBA_ANY_FROM_JSON(SpeakerMap, speakerMap_);
    };
    CreateTaskRequestParametersServiceInspection() = default ;
    CreateTaskRequestParametersServiceInspection(const CreateTaskRequestParametersServiceInspection &) = default ;
    CreateTaskRequestParametersServiceInspection(CreateTaskRequestParametersServiceInspection &&) = default ;
    CreateTaskRequestParametersServiceInspection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersServiceInspection() = default ;
    CreateTaskRequestParametersServiceInspection& operator=(const CreateTaskRequestParametersServiceInspection &) = default ;
    CreateTaskRequestParametersServiceInspection& operator=(CreateTaskRequestParametersServiceInspection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inspectionContents_ != nullptr
        && this->inspectionIntroduction_ != nullptr && this->sceneIntroduction_ != nullptr && this->speakerMap_ != nullptr; };
    // inspectionContents Field Functions 
    bool hasInspectionContents() const { return this->inspectionContents_ != nullptr;};
    void deleteInspectionContents() { this->inspectionContents_ = nullptr;};
    inline const vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents> & inspectionContents() const { DARABONBA_PTR_GET_CONST(inspectionContents_, vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents>) };
    inline vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents> inspectionContents() { DARABONBA_PTR_GET(inspectionContents_, vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents>) };
    inline CreateTaskRequestParametersServiceInspection& setInspectionContents(const vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents> & inspectionContents) { DARABONBA_PTR_SET_VALUE(inspectionContents_, inspectionContents) };
    inline CreateTaskRequestParametersServiceInspection& setInspectionContents(vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents> && inspectionContents) { DARABONBA_PTR_SET_RVALUE(inspectionContents_, inspectionContents) };


    // inspectionIntroduction Field Functions 
    bool hasInspectionIntroduction() const { return this->inspectionIntroduction_ != nullptr;};
    void deleteInspectionIntroduction() { this->inspectionIntroduction_ = nullptr;};
    inline string inspectionIntroduction() const { DARABONBA_PTR_GET_DEFAULT(inspectionIntroduction_, "") };
    inline CreateTaskRequestParametersServiceInspection& setInspectionIntroduction(string inspectionIntroduction) { DARABONBA_PTR_SET_VALUE(inspectionIntroduction_, inspectionIntroduction) };


    // sceneIntroduction Field Functions 
    bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
    void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
    inline string sceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
    inline CreateTaskRequestParametersServiceInspection& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


    // speakerMap Field Functions 
    bool hasSpeakerMap() const { return this->speakerMap_ != nullptr;};
    void deleteSpeakerMap() { this->speakerMap_ = nullptr;};
    inline     const Darabonba::Json & speakerMap() const { DARABONBA_GET(speakerMap_) };
    Darabonba::Json & speakerMap() { DARABONBA_GET(speakerMap_) };
    inline CreateTaskRequestParametersServiceInspection& setSpeakerMap(const Darabonba::Json & speakerMap) { DARABONBA_SET_VALUE(speakerMap_, speakerMap) };
    inline CreateTaskRequestParametersServiceInspection& setSpeakerMap(Darabonba::Json & speakerMap) { DARABONBA_SET_RVALUE(speakerMap_, speakerMap) };


  protected:
    std::shared_ptr<vector<Models::CreateTaskRequestParametersServiceInspectionInspectionContents>> inspectionContents_ = nullptr;
    std::shared_ptr<string> inspectionIntroduction_ = nullptr;
    std::shared_ptr<string> sceneIntroduction_ = nullptr;
    Darabonba::Json speakerMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
