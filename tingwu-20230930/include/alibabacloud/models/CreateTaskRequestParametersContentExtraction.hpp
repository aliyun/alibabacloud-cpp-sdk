// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCONTENTEXTRACTION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSCONTENTEXTRACTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTaskRequestParametersContentExtractionExtractionContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersContentExtraction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersContentExtraction& obj) { 
      DARABONBA_PTR_TO_JSON(ExtractionContents, extractionContents_);
      DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
      DARABONBA_ANY_TO_JSON(SpeakerMap, speakerMap_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersContentExtraction& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtractionContents, extractionContents_);
      DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
      DARABONBA_ANY_FROM_JSON(SpeakerMap, speakerMap_);
    };
    CreateTaskRequestParametersContentExtraction() = default ;
    CreateTaskRequestParametersContentExtraction(const CreateTaskRequestParametersContentExtraction &) = default ;
    CreateTaskRequestParametersContentExtraction(CreateTaskRequestParametersContentExtraction &&) = default ;
    CreateTaskRequestParametersContentExtraction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersContentExtraction() = default ;
    CreateTaskRequestParametersContentExtraction& operator=(const CreateTaskRequestParametersContentExtraction &) = default ;
    CreateTaskRequestParametersContentExtraction& operator=(CreateTaskRequestParametersContentExtraction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extractionContents_ != nullptr
        && this->sceneIntroduction_ != nullptr && this->speakerMap_ != nullptr; };
    // extractionContents Field Functions 
    bool hasExtractionContents() const { return this->extractionContents_ != nullptr;};
    void deleteExtractionContents() { this->extractionContents_ = nullptr;};
    inline const vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents> & extractionContents() const { DARABONBA_PTR_GET_CONST(extractionContents_, vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents>) };
    inline vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents> extractionContents() { DARABONBA_PTR_GET(extractionContents_, vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents>) };
    inline CreateTaskRequestParametersContentExtraction& setExtractionContents(const vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents> & extractionContents) { DARABONBA_PTR_SET_VALUE(extractionContents_, extractionContents) };
    inline CreateTaskRequestParametersContentExtraction& setExtractionContents(vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents> && extractionContents) { DARABONBA_PTR_SET_RVALUE(extractionContents_, extractionContents) };


    // sceneIntroduction Field Functions 
    bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
    void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
    inline string sceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
    inline CreateTaskRequestParametersContentExtraction& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


    // speakerMap Field Functions 
    bool hasSpeakerMap() const { return this->speakerMap_ != nullptr;};
    void deleteSpeakerMap() { this->speakerMap_ = nullptr;};
    inline     const Darabonba::Json & speakerMap() const { DARABONBA_GET(speakerMap_) };
    Darabonba::Json & speakerMap() { DARABONBA_GET(speakerMap_) };
    inline CreateTaskRequestParametersContentExtraction& setSpeakerMap(const Darabonba::Json & speakerMap) { DARABONBA_SET_VALUE(speakerMap_, speakerMap) };
    inline CreateTaskRequestParametersContentExtraction& setSpeakerMap(Darabonba::Json & speakerMap) { DARABONBA_SET_RVALUE(speakerMap_, speakerMap) };


  protected:
    std::shared_ptr<vector<Models::CreateTaskRequestParametersContentExtractionExtractionContents>> extractionContents_ = nullptr;
    std::shared_ptr<string> sceneIntroduction_ = nullptr;
    Darabonba::Json speakerMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
