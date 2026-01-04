// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEACTIVEOPSTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEACTIVEOPSTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceActiveOpsTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceActiveOpsTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceActiveOpsTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
    };
    CreateInstanceActiveOpsTaskShrinkRequest() = default ;
    CreateInstanceActiveOpsTaskShrinkRequest(const CreateInstanceActiveOpsTaskShrinkRequest &) = default ;
    CreateInstanceActiveOpsTaskShrinkRequest(CreateInstanceActiveOpsTaskShrinkRequest &&) = default ;
    CreateInstanceActiveOpsTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceActiveOpsTaskShrinkRequest() = default ;
    CreateInstanceActiveOpsTaskShrinkRequest& operator=(const CreateInstanceActiveOpsTaskShrinkRequest &) = default ;
    CreateInstanceActiveOpsTaskShrinkRequest& operator=(CreateInstanceActiveOpsTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdsShrink_ == nullptr; };
    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline CreateInstanceActiveOpsTaskShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


  protected:
    shared_ptr<string> instanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
