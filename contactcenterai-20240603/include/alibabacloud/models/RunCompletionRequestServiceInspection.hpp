// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUESTSERVICEINSPECTION_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUESTSERVICEINSPECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCompletionRequestServiceInspectionInspectionContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionRequestServiceInspection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionRequestServiceInspection& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionContents, inspectionContents_);
      DARABONBA_PTR_TO_JSON(InspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionRequestServiceInspection& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionContents, inspectionContents_);
      DARABONBA_PTR_FROM_JSON(InspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
    };
    RunCompletionRequestServiceInspection() = default ;
    RunCompletionRequestServiceInspection(const RunCompletionRequestServiceInspection &) = default ;
    RunCompletionRequestServiceInspection(RunCompletionRequestServiceInspection &&) = default ;
    RunCompletionRequestServiceInspection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionRequestServiceInspection() = default ;
    RunCompletionRequestServiceInspection& operator=(const RunCompletionRequestServiceInspection &) = default ;
    RunCompletionRequestServiceInspection& operator=(RunCompletionRequestServiceInspection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inspectionContents_ != nullptr
        && this->inspectionIntroduction_ != nullptr && this->sceneIntroduction_ != nullptr; };
    // inspectionContents Field Functions 
    bool hasInspectionContents() const { return this->inspectionContents_ != nullptr;};
    void deleteInspectionContents() { this->inspectionContents_ = nullptr;};
    inline const vector<Models::RunCompletionRequestServiceInspectionInspectionContents> & inspectionContents() const { DARABONBA_PTR_GET_CONST(inspectionContents_, vector<Models::RunCompletionRequestServiceInspectionInspectionContents>) };
    inline vector<Models::RunCompletionRequestServiceInspectionInspectionContents> inspectionContents() { DARABONBA_PTR_GET(inspectionContents_, vector<Models::RunCompletionRequestServiceInspectionInspectionContents>) };
    inline RunCompletionRequestServiceInspection& setInspectionContents(const vector<Models::RunCompletionRequestServiceInspectionInspectionContents> & inspectionContents) { DARABONBA_PTR_SET_VALUE(inspectionContents_, inspectionContents) };
    inline RunCompletionRequestServiceInspection& setInspectionContents(vector<Models::RunCompletionRequestServiceInspectionInspectionContents> && inspectionContents) { DARABONBA_PTR_SET_RVALUE(inspectionContents_, inspectionContents) };


    // inspectionIntroduction Field Functions 
    bool hasInspectionIntroduction() const { return this->inspectionIntroduction_ != nullptr;};
    void deleteInspectionIntroduction() { this->inspectionIntroduction_ = nullptr;};
    inline string inspectionIntroduction() const { DARABONBA_PTR_GET_DEFAULT(inspectionIntroduction_, "") };
    inline RunCompletionRequestServiceInspection& setInspectionIntroduction(string inspectionIntroduction) { DARABONBA_PTR_SET_VALUE(inspectionIntroduction_, inspectionIntroduction) };


    // sceneIntroduction Field Functions 
    bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
    void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
    inline string sceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
    inline RunCompletionRequestServiceInspection& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


  protected:
    std::shared_ptr<vector<Models::RunCompletionRequestServiceInspectionInspectionContents>> inspectionContents_ = nullptr;
    std::shared_ptr<string> inspectionIntroduction_ = nullptr;
    std::shared_ptr<string> sceneIntroduction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
