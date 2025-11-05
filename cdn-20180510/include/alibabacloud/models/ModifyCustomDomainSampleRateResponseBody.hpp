// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMDOMAINSAMPLERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyCustomDomainSampleRateResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCustomDomainSampleRateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomDomainSampleRateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomDomainSampleRateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCustomDomainSampleRateResponseBody() = default ;
    ModifyCustomDomainSampleRateResponseBody(const ModifyCustomDomainSampleRateResponseBody &) = default ;
    ModifyCustomDomainSampleRateResponseBody(ModifyCustomDomainSampleRateResponseBody &&) = default ;
    ModifyCustomDomainSampleRateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomDomainSampleRateResponseBody() = default ;
    ModifyCustomDomainSampleRateResponseBody& operator=(const ModifyCustomDomainSampleRateResponseBody &) = default ;
    ModifyCustomDomainSampleRateResponseBody& operator=(ModifyCustomDomainSampleRateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ModifyCustomDomainSampleRateResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, ModifyCustomDomainSampleRateResponseBodyContent) };
    inline ModifyCustomDomainSampleRateResponseBodyContent content() { DARABONBA_PTR_GET(content_, ModifyCustomDomainSampleRateResponseBodyContent) };
    inline ModifyCustomDomainSampleRateResponseBody& setContent(const ModifyCustomDomainSampleRateResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ModifyCustomDomainSampleRateResponseBody& setContent(ModifyCustomDomainSampleRateResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCustomDomainSampleRateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ModifyCustomDomainSampleRateResponseBodyContent> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
