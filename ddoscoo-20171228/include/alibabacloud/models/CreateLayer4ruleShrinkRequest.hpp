// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYER4RULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYER4RULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class CreateLayer4RuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayer4RuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_TO_JSON(UsTimeout, usTimeoutShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayer4RuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(ProxyEnable, proxyEnable_);
      DARABONBA_PTR_FROM_JSON(UsTimeout, usTimeoutShrink_);
    };
    CreateLayer4RuleShrinkRequest() = default ;
    CreateLayer4RuleShrinkRequest(const CreateLayer4RuleShrinkRequest &) = default ;
    CreateLayer4RuleShrinkRequest(CreateLayer4RuleShrinkRequest &&) = default ;
    CreateLayer4RuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayer4RuleShrinkRequest() = default ;
    CreateLayer4RuleShrinkRequest& operator=(const CreateLayer4RuleShrinkRequest &) = default ;
    CreateLayer4RuleShrinkRequest& operator=(CreateLayer4RuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr
        && this->proxyEnable_ != nullptr && this->usTimeoutShrink_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline CreateLayer4RuleShrinkRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


    // proxyEnable Field Functions 
    bool hasProxyEnable() const { return this->proxyEnable_ != nullptr;};
    void deleteProxyEnable() { this->proxyEnable_ = nullptr;};
    inline int32_t proxyEnable() const { DARABONBA_PTR_GET_DEFAULT(proxyEnable_, 0) };
    inline CreateLayer4RuleShrinkRequest& setProxyEnable(int32_t proxyEnable) { DARABONBA_PTR_SET_VALUE(proxyEnable_, proxyEnable) };


    // usTimeoutShrink Field Functions 
    bool hasUsTimeoutShrink() const { return this->usTimeoutShrink_ != nullptr;};
    void deleteUsTimeoutShrink() { this->usTimeoutShrink_ = nullptr;};
    inline string usTimeoutShrink() const { DARABONBA_PTR_GET_DEFAULT(usTimeoutShrink_, "") };
    inline CreateLayer4RuleShrinkRequest& setUsTimeoutShrink(string usTimeoutShrink) { DARABONBA_PTR_SET_VALUE(usTimeoutShrink_, usTimeoutShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> listeners_ = nullptr;
    std::shared_ptr<int32_t> proxyEnable_ = nullptr;
    std::shared_ptr<string> usTimeoutShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
