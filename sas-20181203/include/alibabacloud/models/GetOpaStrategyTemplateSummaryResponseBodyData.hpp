// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYTEMPLATESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYTEMPLATESUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyTemplateSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyTemplateSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyTemplateSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetOpaStrategyTemplateSummaryResponseBodyData() = default ;
    GetOpaStrategyTemplateSummaryResponseBodyData(const GetOpaStrategyTemplateSummaryResponseBodyData &) = default ;
    GetOpaStrategyTemplateSummaryResponseBodyData(GetOpaStrategyTemplateSummaryResponseBodyData &&) = default ;
    GetOpaStrategyTemplateSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyTemplateSummaryResponseBodyData() = default ;
    GetOpaStrategyTemplateSummaryResponseBodyData& operator=(const GetOpaStrategyTemplateSummaryResponseBodyData &) = default ;
    GetOpaStrategyTemplateSummaryResponseBodyData& operator=(GetOpaStrategyTemplateSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->description_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetOpaStrategyTemplateSummaryResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOpaStrategyTemplateSummaryResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetOpaStrategyTemplateSummaryResponseBodyData& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetOpaStrategyTemplateSummaryResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The number of times that the template is used.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
