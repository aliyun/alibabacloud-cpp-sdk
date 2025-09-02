// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGQUERYDEFAULTTEMPLATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DSGQUERYDEFAULTTEMPLATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DataDesensPlanTemplateValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgQueryDefaultTemplatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgQueryDefaultTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DesensPlanTemplate, desensPlanTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DsgQueryDefaultTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DesensPlanTemplate, desensPlanTemplate_);
    };
    DsgQueryDefaultTemplatesResponseBodyData() = default ;
    DsgQueryDefaultTemplatesResponseBodyData(const DsgQueryDefaultTemplatesResponseBodyData &) = default ;
    DsgQueryDefaultTemplatesResponseBodyData(DsgQueryDefaultTemplatesResponseBodyData &&) = default ;
    DsgQueryDefaultTemplatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgQueryDefaultTemplatesResponseBodyData() = default ;
    DsgQueryDefaultTemplatesResponseBodyData& operator=(const DsgQueryDefaultTemplatesResponseBodyData &) = default ;
    DsgQueryDefaultTemplatesResponseBodyData& operator=(DsgQueryDefaultTemplatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->desensPlanTemplate_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DsgQueryDefaultTemplatesResponseBodyData& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // desensPlanTemplate Field Functions 
    bool hasDesensPlanTemplate() const { return this->desensPlanTemplate_ != nullptr;};
    void deleteDesensPlanTemplate() { this->desensPlanTemplate_ = nullptr;};
    inline const map<string, vector<Models::DataDesensPlanTemplateValue>> & desensPlanTemplate() const { DARABONBA_PTR_GET_CONST(desensPlanTemplate_, map<string, vector<Models::DataDesensPlanTemplateValue>>) };
    inline map<string, vector<Models::DataDesensPlanTemplateValue>> desensPlanTemplate() { DARABONBA_PTR_GET(desensPlanTemplate_, map<string, vector<Models::DataDesensPlanTemplateValue>>) };
    inline DsgQueryDefaultTemplatesResponseBodyData& setDesensPlanTemplate(const map<string, vector<Models::DataDesensPlanTemplateValue>> & desensPlanTemplate) { DARABONBA_PTR_SET_VALUE(desensPlanTemplate_, desensPlanTemplate) };
    inline DsgQueryDefaultTemplatesResponseBodyData& setDesensPlanTemplate(map<string, vector<Models::DataDesensPlanTemplateValue>> && desensPlanTemplate) { DARABONBA_PTR_SET_RVALUE(desensPlanTemplate_, desensPlanTemplate) };


  protected:
    // The sensitive field type.
    std::shared_ptr<string> dataType_ = nullptr;
    // The supported data masking methods and parameter descriptions.
    std::shared_ptr<map<string, vector<Models::DataDesensPlanTemplateValue>>> desensPlanTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
