// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERTEMPLATESRESPONSEBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterTemplatesResponseBodyParametersTemplateRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterTemplatesResponseBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterTemplatesResponseBodyParameters& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateRecord, templateRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterTemplatesResponseBodyParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateRecord, templateRecord_);
    };
    DescribeParameterTemplatesResponseBodyParameters() = default ;
    DescribeParameterTemplatesResponseBodyParameters(const DescribeParameterTemplatesResponseBodyParameters &) = default ;
    DescribeParameterTemplatesResponseBodyParameters(DescribeParameterTemplatesResponseBodyParameters &&) = default ;
    DescribeParameterTemplatesResponseBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterTemplatesResponseBodyParameters() = default ;
    DescribeParameterTemplatesResponseBodyParameters& operator=(const DescribeParameterTemplatesResponseBodyParameters &) = default ;
    DescribeParameterTemplatesResponseBodyParameters& operator=(DescribeParameterTemplatesResponseBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateRecord_ == nullptr; };
    // templateRecord Field Functions 
    bool hasTemplateRecord() const { return this->templateRecord_ != nullptr;};
    void deleteTemplateRecord() { this->templateRecord_ = nullptr;};
    inline const vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord> & templateRecord() const { DARABONBA_PTR_GET_CONST(templateRecord_, vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord>) };
    inline vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord> templateRecord() { DARABONBA_PTR_GET(templateRecord_, vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord>) };
    inline DescribeParameterTemplatesResponseBodyParameters& setTemplateRecord(const vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord> & templateRecord) { DARABONBA_PTR_SET_VALUE(templateRecord_, templateRecord) };
    inline DescribeParameterTemplatesResponseBodyParameters& setTemplateRecord(vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord> && templateRecord) { DARABONBA_PTR_SET_RVALUE(templateRecord_, templateRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeParameterTemplatesResponseBodyParametersTemplateRecord>> templateRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
