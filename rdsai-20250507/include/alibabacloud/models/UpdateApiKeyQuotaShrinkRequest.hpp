// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYQUOTASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYQUOTASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateApiKeyQuotaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyQuotaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyQuotaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
    };
    UpdateApiKeyQuotaShrinkRequest() = default ;
    UpdateApiKeyQuotaShrinkRequest(const UpdateApiKeyQuotaShrinkRequest &) = default ;
    UpdateApiKeyQuotaShrinkRequest(UpdateApiKeyQuotaShrinkRequest &&) = default ;
    UpdateApiKeyQuotaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyQuotaShrinkRequest() = default ;
    UpdateApiKeyQuotaShrinkRequest& operator=(const UpdateApiKeyQuotaShrinkRequest &) = default ;
    UpdateApiKeyQuotaShrinkRequest& operator=(UpdateApiKeyQuotaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keysShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateApiKeyQuotaShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string getKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline UpdateApiKeyQuotaShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> keysShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
