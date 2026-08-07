// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESYSTEMCONFIGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESYSTEMCONFIGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateSystemConfigsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSystemConfigsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSystemConfigsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    UpdateSystemConfigsShrinkRequest() = default ;
    UpdateSystemConfigsShrinkRequest(const UpdateSystemConfigsShrinkRequest &) = default ;
    UpdateSystemConfigsShrinkRequest(UpdateSystemConfigsShrinkRequest &&) = default ;
    UpdateSystemConfigsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSystemConfigsShrinkRequest() = default ;
    UpdateSystemConfigsShrinkRequest& operator=(const UpdateSystemConfigsShrinkRequest &) = default ;
    UpdateSystemConfigsShrinkRequest& operator=(UpdateSystemConfigsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configsShrink_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr; };
    // configsShrink Field Functions 
    bool hasConfigsShrink() const { return this->configsShrink_ != nullptr;};
    void deleteConfigsShrink() { this->configsShrink_ = nullptr;};
    inline string getConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(configsShrink_, "") };
    inline UpdateSystemConfigsShrinkRequest& setConfigsShrink(string configsShrink) { DARABONBA_PTR_SET_VALUE(configsShrink_, configsShrink) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline UpdateSystemConfigsShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline UpdateSystemConfigsShrinkRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    // 配置列表
    shared_ptr<string> configsShrink_ {};
    // 对象ID
    shared_ptr<string> objectId_ {};
    // 外呼开发时补充参数限制
    shared_ptr<string> objectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
