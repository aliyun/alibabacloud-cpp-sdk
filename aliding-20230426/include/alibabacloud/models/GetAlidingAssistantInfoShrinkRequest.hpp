// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIDINGASSISTANTINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIDINGASSISTANTINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAlidingAssistantInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlidingAssistantInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlidingAssistantInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetAlidingAssistantInfoShrinkRequest() = default ;
    GetAlidingAssistantInfoShrinkRequest(const GetAlidingAssistantInfoShrinkRequest &) = default ;
    GetAlidingAssistantInfoShrinkRequest(GetAlidingAssistantInfoShrinkRequest &&) = default ;
    GetAlidingAssistantInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlidingAssistantInfoShrinkRequest() = default ;
    GetAlidingAssistantInfoShrinkRequest& operator=(const GetAlidingAssistantInfoShrinkRequest &) = default ;
    GetAlidingAssistantInfoShrinkRequest& operator=(GetAlidingAssistantInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assistantId_ != nullptr
        && this->tenantContextShrink_ != nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string assistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline GetAlidingAssistantInfoShrinkRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetAlidingAssistantInfoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
