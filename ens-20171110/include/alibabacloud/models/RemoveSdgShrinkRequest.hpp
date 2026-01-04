// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESDGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESDGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveSDGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSDGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSDGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    RemoveSDGShrinkRequest() = default ;
    RemoveSDGShrinkRequest(const RemoveSDGShrinkRequest &) = default ;
    RemoveSDGShrinkRequest(RemoveSDGShrinkRequest &&) = default ;
    RemoveSDGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSDGShrinkRequest() = default ;
    RemoveSDGShrinkRequest& operator=(const RemoveSDGShrinkRequest &) = default ;
    RemoveSDGShrinkRequest& operator=(RemoveSDGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline RemoveSDGShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    // IDs of Android in Container (AIC) instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
