// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCustomDomainSampleRateResponseBodyContentContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCustomDomainSampleRateResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomDomainSampleRateResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomDomainSampleRateResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
    };
    ModifyCustomDomainSampleRateResponseBodyContent() = default ;
    ModifyCustomDomainSampleRateResponseBodyContent(const ModifyCustomDomainSampleRateResponseBodyContent &) = default ;
    ModifyCustomDomainSampleRateResponseBodyContent(ModifyCustomDomainSampleRateResponseBodyContent &&) = default ;
    ModifyCustomDomainSampleRateResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomDomainSampleRateResponseBodyContent() = default ;
    ModifyCustomDomainSampleRateResponseBodyContent& operator=(const ModifyCustomDomainSampleRateResponseBodyContent &) = default ;
    ModifyCustomDomainSampleRateResponseBodyContent& operator=(ModifyCustomDomainSampleRateResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent>) };
    inline vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent> content() { DARABONBA_PTR_GET(content_, vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent>) };
    inline ModifyCustomDomainSampleRateResponseBodyContent& setContent(const vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ModifyCustomDomainSampleRateResponseBodyContent& setContent(vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


  protected:
    std::shared_ptr<vector<Models::ModifyCustomDomainSampleRateResponseBodyContentContent>> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
