// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTSERVICEINSPECTION_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTSERVICEINSPECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeConversationRequestServiceInspectionInspectionContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestServiceInspection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestServiceInspection& obj) { 
      DARABONBA_PTR_TO_JSON(inspectionContents, inspectionContents_);
      DARABONBA_PTR_TO_JSON(inspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_TO_JSON(sceneIntroduction, sceneIntroduction_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestServiceInspection& obj) { 
      DARABONBA_PTR_FROM_JSON(inspectionContents, inspectionContents_);
      DARABONBA_PTR_FROM_JSON(inspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_FROM_JSON(sceneIntroduction, sceneIntroduction_);
    };
    AnalyzeConversationRequestServiceInspection() = default ;
    AnalyzeConversationRequestServiceInspection(const AnalyzeConversationRequestServiceInspection &) = default ;
    AnalyzeConversationRequestServiceInspection(AnalyzeConversationRequestServiceInspection &&) = default ;
    AnalyzeConversationRequestServiceInspection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestServiceInspection() = default ;
    AnalyzeConversationRequestServiceInspection& operator=(const AnalyzeConversationRequestServiceInspection &) = default ;
    AnalyzeConversationRequestServiceInspection& operator=(AnalyzeConversationRequestServiceInspection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inspectionContents_ != nullptr
        && this->inspectionIntroduction_ != nullptr && this->sceneIntroduction_ != nullptr; };
    // inspectionContents Field Functions 
    bool hasInspectionContents() const { return this->inspectionContents_ != nullptr;};
    void deleteInspectionContents() { this->inspectionContents_ = nullptr;};
    inline const vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents> & inspectionContents() const { DARABONBA_PTR_GET_CONST(inspectionContents_, vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents>) };
    inline vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents> inspectionContents() { DARABONBA_PTR_GET(inspectionContents_, vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents>) };
    inline AnalyzeConversationRequestServiceInspection& setInspectionContents(const vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents> & inspectionContents) { DARABONBA_PTR_SET_VALUE(inspectionContents_, inspectionContents) };
    inline AnalyzeConversationRequestServiceInspection& setInspectionContents(vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents> && inspectionContents) { DARABONBA_PTR_SET_RVALUE(inspectionContents_, inspectionContents) };


    // inspectionIntroduction Field Functions 
    bool hasInspectionIntroduction() const { return this->inspectionIntroduction_ != nullptr;};
    void deleteInspectionIntroduction() { this->inspectionIntroduction_ = nullptr;};
    inline string inspectionIntroduction() const { DARABONBA_PTR_GET_DEFAULT(inspectionIntroduction_, "") };
    inline AnalyzeConversationRequestServiceInspection& setInspectionIntroduction(string inspectionIntroduction) { DARABONBA_PTR_SET_VALUE(inspectionIntroduction_, inspectionIntroduction) };


    // sceneIntroduction Field Functions 
    bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
    void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
    inline string sceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
    inline AnalyzeConversationRequestServiceInspection& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::AnalyzeConversationRequestServiceInspectionInspectionContents>> inspectionContents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inspectionIntroduction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneIntroduction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
