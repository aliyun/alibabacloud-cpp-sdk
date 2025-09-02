// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATADESENSPLANTEMPLATEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATADESENSPLANTEMPLATEVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DataDesensPlanTemplateValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataDesensPlanTemplateValue& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SupportWaterMark, supportWaterMark_);
      DARABONBA_PTR_TO_JSON(ExtParamTemplate, extParamTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DataDesensPlanTemplateValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SupportWaterMark, supportWaterMark_);
      DARABONBA_PTR_FROM_JSON(ExtParamTemplate, extParamTemplate_);
    };
    DataDesensPlanTemplateValue() = default ;
    DataDesensPlanTemplateValue(const DataDesensPlanTemplateValue &) = default ;
    DataDesensPlanTemplateValue(DataDesensPlanTemplateValue &&) = default ;
    DataDesensPlanTemplateValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataDesensPlanTemplateValue() = default ;
    DataDesensPlanTemplateValue& operator=(const DataDesensPlanTemplateValue &) = default ;
    DataDesensPlanTemplateValue& operator=(DataDesensPlanTemplateValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->supportWaterMark_ != nullptr && this->extParamTemplate_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataDesensPlanTemplateValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // supportWaterMark Field Functions 
    bool hasSupportWaterMark() const { return this->supportWaterMark_ != nullptr;};
    void deleteSupportWaterMark() { this->supportWaterMark_ = nullptr;};
    inline bool supportWaterMark() const { DARABONBA_PTR_GET_DEFAULT(supportWaterMark_, false) };
    inline DataDesensPlanTemplateValue& setSupportWaterMark(bool supportWaterMark) { DARABONBA_PTR_SET_VALUE(supportWaterMark_, supportWaterMark) };


    // extParamTemplate Field Functions 
    bool hasExtParamTemplate() const { return this->extParamTemplate_ != nullptr;};
    void deleteExtParamTemplate() { this->extParamTemplate_ = nullptr;};
    inline const vector<Darabonba::Json> & extParamTemplate() const { DARABONBA_PTR_GET_CONST(extParamTemplate_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extParamTemplate() { DARABONBA_PTR_GET(extParamTemplate_, vector<Darabonba::Json>) };
    inline DataDesensPlanTemplateValue& setExtParamTemplate(const vector<Darabonba::Json> & extParamTemplate) { DARABONBA_PTR_SET_VALUE(extParamTemplate_, extParamTemplate) };
    inline DataDesensPlanTemplateValue& setExtParamTemplate(vector<Darabonba::Json> && extParamTemplate) { DARABONBA_PTR_SET_RVALUE(extParamTemplate_, extParamTemplate) };


  protected:
    // The name of the data masking method.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether a watermark is added. Valid values:
    // 
    // *   true: allow
    // *   false: disallow
    std::shared_ptr<bool> supportWaterMark_ = nullptr;
    // The data masking parameters and their descriptions.
    std::shared_ptr<vector<Darabonba::Json>> extParamTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
