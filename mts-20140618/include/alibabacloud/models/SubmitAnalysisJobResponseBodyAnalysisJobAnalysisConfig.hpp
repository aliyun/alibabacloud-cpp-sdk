// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBANALYSISCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBANALYSISCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PropertiesControl, propertiesControl_);
      DARABONBA_PTR_TO_JSON(QualityControl, qualityControl_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertiesControl, propertiesControl_);
      DARABONBA_PTR_FROM_JSON(QualityControl, qualityControl_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig(const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig(SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& operator=(SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertiesControl_ == nullptr
        && return this->qualityControl_ == nullptr; };
    // propertiesControl Field Functions 
    bool hasPropertiesControl() const { return this->propertiesControl_ != nullptr;};
    void deletePropertiesControl() { this->propertiesControl_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl & propertiesControl() const { DARABONBA_PTR_GET_CONST(propertiesControl_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl propertiesControl() { DARABONBA_PTR_GET(propertiesControl_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& setPropertiesControl(const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl & propertiesControl) { DARABONBA_PTR_SET_VALUE(propertiesControl_, propertiesControl) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& setPropertiesControl(Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl && propertiesControl) { DARABONBA_PTR_SET_RVALUE(propertiesControl_, propertiesControl) };


    // qualityControl Field Functions 
    bool hasQualityControl() const { return this->qualityControl_ != nullptr;};
    void deleteQualityControl() { this->qualityControl_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl & qualityControl() const { DARABONBA_PTR_GET_CONST(qualityControl_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl qualityControl() { DARABONBA_PTR_GET(qualityControl_, Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& setQualityControl(const Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl & qualityControl) { DARABONBA_PTR_SET_VALUE(qualityControl_, qualityControl) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfig& setQualityControl(Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl && qualityControl) { DARABONBA_PTR_SET_RVALUE(qualityControl_, qualityControl) };


  protected:
    // The control on the attributes of the job output.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigPropertiesControl> propertiesControl_ = nullptr;
    // The quality control on the job output.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobAnalysisConfigQualityControl> qualityControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
