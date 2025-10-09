// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
    };
    GetDataQualityRuleTemplateRequest() = default ;
    GetDataQualityRuleTemplateRequest(const GetDataQualityRuleTemplateRequest &) = default ;
    GetDataQualityRuleTemplateRequest(GetDataQualityRuleTemplateRequest &&) = default ;
    GetDataQualityRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleTemplateRequest() = default ;
    GetDataQualityRuleTemplateRequest& operator=(const GetDataQualityRuleTemplateRequest &) = default ;
    GetDataQualityRuleTemplateRequest& operator=(GetDataQualityRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataQualityRuleTemplateRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    // The code for the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
