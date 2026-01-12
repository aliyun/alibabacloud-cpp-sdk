// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINSTANCESDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINSTANCESDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveInstanceSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInstanceSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    RemoveInstanceSDGShrinkRequest() = default ;
    RemoveInstanceSDGShrinkRequest(const RemoveInstanceSDGShrinkRequest &) = default ;
    RemoveInstanceSDGShrinkRequest(RemoveInstanceSDGShrinkRequest &&) = default ;
    RemoveInstanceSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInstanceSDGShrinkRequest() = default ;
    RemoveInstanceSDGShrinkRequest& operator=(const RemoveInstanceSDGShrinkRequest &) = default ;
    RemoveInstanceSDGShrinkRequest& operator=(RemoveInstanceSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline RemoveInstanceSDGShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    // The IDs of the instances. The value is a JSON array that consists of up to 100 IDs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
