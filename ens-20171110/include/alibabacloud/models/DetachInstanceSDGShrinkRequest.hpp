// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCESDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCESDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DetachInstanceSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    DetachInstanceSDGShrinkRequest() = default ;
    DetachInstanceSDGShrinkRequest(const DetachInstanceSDGShrinkRequest &) = default ;
    DetachInstanceSDGShrinkRequest(DetachInstanceSDGShrinkRequest &&) = default ;
    DetachInstanceSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstanceSDGShrinkRequest() = default ;
    DetachInstanceSDGShrinkRequest& operator=(const DetachInstanceSDGShrinkRequest &) = default ;
    DetachInstanceSDGShrinkRequest& operator=(DetachInstanceSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr
        && this->SDGId_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DetachInstanceSDGShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DetachInstanceSDGShrinkRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The IDs of the instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
    // The ID of the SDG.
    // 
    // This parameter is required.
    shared_ptr<string> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
