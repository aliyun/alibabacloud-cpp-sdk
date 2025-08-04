// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTSERVICEINSPECTION_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTSERVICEINSPECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCloudNoteRequestServiceInspectionInspectionContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestServiceInspection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestServiceInspection& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(InspectionContents, inspectionContents_);
      DARABONBA_PTR_TO_JSON(InspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_TO_JSON(SceneIntroduction, sceneIntroduction_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestServiceInspection& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(InspectionContents, inspectionContents_);
      DARABONBA_PTR_FROM_JSON(InspectionIntroduction, inspectionIntroduction_);
      DARABONBA_PTR_FROM_JSON(SceneIntroduction, sceneIntroduction_);
    };
    StartCloudNoteRequestServiceInspection() = default ;
    StartCloudNoteRequestServiceInspection(const StartCloudNoteRequestServiceInspection &) = default ;
    StartCloudNoteRequestServiceInspection(StartCloudNoteRequestServiceInspection &&) = default ;
    StartCloudNoteRequestServiceInspection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestServiceInspection() = default ;
    StartCloudNoteRequestServiceInspection& operator=(const StartCloudNoteRequestServiceInspection &) = default ;
    StartCloudNoteRequestServiceInspection& operator=(StartCloudNoteRequestServiceInspection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->inspectionContents_ != nullptr && this->inspectionIntroduction_ != nullptr && this->sceneIntroduction_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestServiceInspection& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // inspectionContents Field Functions 
    bool hasInspectionContents() const { return this->inspectionContents_ != nullptr;};
    void deleteInspectionContents() { this->inspectionContents_ = nullptr;};
    inline const vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents> & inspectionContents() const { DARABONBA_PTR_GET_CONST(inspectionContents_, vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents>) };
    inline vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents> inspectionContents() { DARABONBA_PTR_GET(inspectionContents_, vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents>) };
    inline StartCloudNoteRequestServiceInspection& setInspectionContents(const vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents> & inspectionContents) { DARABONBA_PTR_SET_VALUE(inspectionContents_, inspectionContents) };
    inline StartCloudNoteRequestServiceInspection& setInspectionContents(vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents> && inspectionContents) { DARABONBA_PTR_SET_RVALUE(inspectionContents_, inspectionContents) };


    // inspectionIntroduction Field Functions 
    bool hasInspectionIntroduction() const { return this->inspectionIntroduction_ != nullptr;};
    void deleteInspectionIntroduction() { this->inspectionIntroduction_ = nullptr;};
    inline string inspectionIntroduction() const { DARABONBA_PTR_GET_DEFAULT(inspectionIntroduction_, "") };
    inline StartCloudNoteRequestServiceInspection& setInspectionIntroduction(string inspectionIntroduction) { DARABONBA_PTR_SET_VALUE(inspectionIntroduction_, inspectionIntroduction) };


    // sceneIntroduction Field Functions 
    bool hasSceneIntroduction() const { return this->sceneIntroduction_ != nullptr;};
    void deleteSceneIntroduction() { this->sceneIntroduction_ = nullptr;};
    inline string sceneIntroduction() const { DARABONBA_PTR_GET_DEFAULT(sceneIntroduction_, "") };
    inline StartCloudNoteRequestServiceInspection& setSceneIntroduction(string sceneIntroduction) { DARABONBA_PTR_SET_VALUE(sceneIntroduction_, sceneIntroduction) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::StartCloudNoteRequestServiceInspectionInspectionContents>> inspectionContents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inspectionIntroduction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneIntroduction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
