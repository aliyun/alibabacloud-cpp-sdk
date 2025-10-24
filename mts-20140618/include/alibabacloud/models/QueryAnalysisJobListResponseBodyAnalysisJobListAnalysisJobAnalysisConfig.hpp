// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBANALYSISCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBANALYSISCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PropertiesControl, propertiesControl_);
      DARABONBA_PTR_TO_JSON(QualityControl, qualityControl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertiesControl, propertiesControl_);
      DARABONBA_PTR_FROM_JSON(QualityControl, qualityControl_);
    };
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig &&) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& operator=(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& operator=(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertiesControl_ == nullptr
        && return this->qualityControl_ == nullptr; };
    // propertiesControl Field Functions 
    bool hasPropertiesControl() const { return this->propertiesControl_ != nullptr;};
    void deletePropertiesControl() { this->propertiesControl_ = nullptr;};
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl & propertiesControl() const { DARABONBA_PTR_GET_CONST(propertiesControl_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl propertiesControl() { DARABONBA_PTR_GET(propertiesControl_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& setPropertiesControl(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl & propertiesControl) { DARABONBA_PTR_SET_VALUE(propertiesControl_, propertiesControl) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& setPropertiesControl(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl && propertiesControl) { DARABONBA_PTR_SET_RVALUE(propertiesControl_, propertiesControl) };


    // qualityControl Field Functions 
    bool hasQualityControl() const { return this->qualityControl_ != nullptr;};
    void deleteQualityControl() { this->qualityControl_ = nullptr;};
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl & qualityControl() const { DARABONBA_PTR_GET_CONST(qualityControl_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl qualityControl() { DARABONBA_PTR_GET(qualityControl_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& setQualityControl(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl & qualityControl) { DARABONBA_PTR_SET_VALUE(qualityControl_, qualityControl) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfig& setQualityControl(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl && qualityControl) { DARABONBA_PTR_SET_RVALUE(qualityControl_, qualityControl) };


  protected:
    // The control on the attributes of the job output.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigPropertiesControl> propertiesControl_ = nullptr;
    // The quality control on the job output.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobAnalysisConfigQualityControl> qualityControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
