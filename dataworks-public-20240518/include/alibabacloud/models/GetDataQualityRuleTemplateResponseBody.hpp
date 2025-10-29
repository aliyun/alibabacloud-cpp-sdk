// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRuleTemplate, dataQualityRuleTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRuleTemplate, dataQualityRuleTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityRuleTemplateResponseBody() = default ;
    GetDataQualityRuleTemplateResponseBody(const GetDataQualityRuleTemplateResponseBody &) = default ;
    GetDataQualityRuleTemplateResponseBody(GetDataQualityRuleTemplateResponseBody &&) = default ;
    GetDataQualityRuleTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleTemplateResponseBody() = default ;
    GetDataQualityRuleTemplateResponseBody& operator=(const GetDataQualityRuleTemplateResponseBody &) = default ;
    GetDataQualityRuleTemplateResponseBody& operator=(GetDataQualityRuleTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityRuleTemplate_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataQualityRuleTemplate Field Functions 
    bool hasDataQualityRuleTemplate() const { return this->dataQualityRuleTemplate_ != nullptr;};
    void deleteDataQualityRuleTemplate() { this->dataQualityRuleTemplate_ = nullptr;};
    inline const GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate & dataQualityRuleTemplate() const { DARABONBA_PTR_GET_CONST(dataQualityRuleTemplate_, GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate) };
    inline GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate dataQualityRuleTemplate() { DARABONBA_PTR_GET(dataQualityRuleTemplate_, GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate) };
    inline GetDataQualityRuleTemplateResponseBody& setDataQualityRuleTemplate(const GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate & dataQualityRuleTemplate) { DARABONBA_PTR_SET_VALUE(dataQualityRuleTemplate_, dataQualityRuleTemplate) };
    inline GetDataQualityRuleTemplateResponseBody& setDataQualityRuleTemplate(GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate && dataQualityRuleTemplate) { DARABONBA_PTR_SET_RVALUE(dataQualityRuleTemplate_, dataQualityRuleTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityRuleTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the template.
    std::shared_ptr<GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplate> dataQualityRuleTemplate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
