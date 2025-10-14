// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetTextTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(industry, industry_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(industry, industry_);
    };
    GetTextTemplateRequest() = default ;
    GetTextTemplateRequest(const GetTextTemplateRequest &) = default ;
    GetTextTemplateRequest(GetTextTemplateRequest &&) = default ;
    GetTextTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextTemplateRequest() = default ;
    GetTextTemplateRequest& operator=(const GetTextTemplateRequest &) = default ;
    GetTextTemplateRequest& operator=(GetTextTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->industry_ == nullptr; };
    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline GetTextTemplateRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


  protected:
    std::shared_ptr<string> industry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
