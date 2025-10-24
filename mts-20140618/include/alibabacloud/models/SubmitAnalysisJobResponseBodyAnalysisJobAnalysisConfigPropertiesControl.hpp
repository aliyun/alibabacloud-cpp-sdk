// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBANALYSISCONFIGPROPERTIESCONTROL_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBANALYSISCONFIGPROPERTIESCONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& obj) { 
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(Deinterlace, deinterlace_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(Deinterlace, deinterlace_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl(const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl(SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& operator=(SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crop_ == nullptr
        && return this->deinterlace_ == nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop & crop() const { DARABONBA_PTR_GET_CONST(crop_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop crop() { DARABONBA_PTR_GET(crop_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& setCrop(const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop & crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& setCrop(Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop && crop) { DARABONBA_PTR_SET_RVALUE(crop_, crop) };


    // deinterlace Field Functions 
    bool hasDeinterlace() const { return this->deinterlace_ != nullptr;};
    void deleteDeinterlace() { this->deinterlace_ = nullptr;};
    inline string deinterlace() const { DARABONBA_PTR_GET_DEFAULT(deinterlace_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl& setDeinterlace(string deinterlace) { DARABONBA_PTR_SET_VALUE(deinterlace_, deinterlace) };


  protected:
    // The cropping configurations of video images.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControlCrop> crop_ = nullptr;
    // Indicates whether deinterlacing was forced to run. Valid values:
    // 
    // *   **Auto**: Deinterlacing was automatically run.
    // *   **Force**: Deinterlacing was forced to run.
    // *   **None**: Deinterlacing was forced not to run.
    std::shared_ptr<string> deinterlace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
