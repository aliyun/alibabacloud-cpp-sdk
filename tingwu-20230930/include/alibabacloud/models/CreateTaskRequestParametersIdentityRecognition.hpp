// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSIDENTITYRECOGNITION_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSIDENTITYRECOGNITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTaskRequestParametersIdentityRecognitionIdentityContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersIdentityRecognition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersIdentityRecognition& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityContents, identityContents_);
      DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersIdentityRecognition& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityContents, identityContents_);
      DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
    };
    CreateTaskRequestParametersIdentityRecognition() = default ;
    CreateTaskRequestParametersIdentityRecognition(const CreateTaskRequestParametersIdentityRecognition &) = default ;
    CreateTaskRequestParametersIdentityRecognition(CreateTaskRequestParametersIdentityRecognition &&) = default ;
    CreateTaskRequestParametersIdentityRecognition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersIdentityRecognition() = default ;
    CreateTaskRequestParametersIdentityRecognition& operator=(const CreateTaskRequestParametersIdentityRecognition &) = default ;
    CreateTaskRequestParametersIdentityRecognition& operator=(CreateTaskRequestParametersIdentityRecognition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->identityContents_ != nullptr
        && this->sceneIntroduction_ != nullptr; };
    // identityContents Field Functions 
    bool hasIdentityContents() const { return this->identityContents_ != nullptr;};
    void deleteIdentityContents() { this->identityContents_ = nullptr;};
    inline const vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents> & identityContents() const { DARABONBA_PTR_GET_CONST(identityContents_, vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents>) };
    inline vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents> identityContents() { DARABONBA_PTR_GET(identityContents_, vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents>) };
    inline CreateTaskRequestParametersIdentityRecognition& setIdentityContents(const vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents> & identityContents) { DARABONBA_PTR_SET_VALUE(identityContents_, identityContents) };
    inline CreateTaskRequestParametersIdentityRecognition& setIdentityContents(vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents> && identityContents) { DARABONBA_PTR_SET_RVALUE(identityContents_, identityContents) };


    // sceneIntroduction Field Functions 
    bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
    void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
    inline string sceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
    inline CreateTaskRequestParametersIdentityRecognition& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


  protected:
    std::shared_ptr<vector<Models::CreateTaskRequestParametersIdentityRecognitionIdentityContents>> identityContents_ = nullptr;
    std::shared_ptr<string> sceneIntroduction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
