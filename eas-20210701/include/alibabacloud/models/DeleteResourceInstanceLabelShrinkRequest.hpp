// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEINSTANCELABELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEINSTANCELABELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteResourceInstanceLabelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceInstanceLabelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Keys, keysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceInstanceLabelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Keys, keysShrink_);
    };
    DeleteResourceInstanceLabelShrinkRequest() = default ;
    DeleteResourceInstanceLabelShrinkRequest(const DeleteResourceInstanceLabelShrinkRequest &) = default ;
    DeleteResourceInstanceLabelShrinkRequest(DeleteResourceInstanceLabelShrinkRequest &&) = default ;
    DeleteResourceInstanceLabelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceInstanceLabelShrinkRequest() = default ;
    DeleteResourceInstanceLabelShrinkRequest& operator=(const DeleteResourceInstanceLabelShrinkRequest &) = default ;
    DeleteResourceInstanceLabelShrinkRequest& operator=(DeleteResourceInstanceLabelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allInstances_ != nullptr
        && this->instanceIdsShrink_ != nullptr && this->keysShrink_ != nullptr; };
    // allInstances Field Functions 
    bool hasAllInstances() const { return this->allInstances_ != nullptr;};
    void deleteAllInstances() { this->allInstances_ = nullptr;};
    inline bool allInstances() const { DARABONBA_PTR_GET_DEFAULT(allInstances_, false) };
    inline DeleteResourceInstanceLabelShrinkRequest& setAllInstances(bool allInstances) { DARABONBA_PTR_SET_VALUE(allInstances_, allInstances) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline DeleteResourceInstanceLabelShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // keysShrink Field Functions 
    bool hasKeysShrink() const { return this->keysShrink_ != nullptr;};
    void deleteKeysShrink() { this->keysShrink_ = nullptr;};
    inline string keysShrink() const { DARABONBA_PTR_GET_DEFAULT(keysShrink_, "") };
    inline DeleteResourceInstanceLabelShrinkRequest& setKeysShrink(string keysShrink) { DARABONBA_PTR_SET_VALUE(keysShrink_, keysShrink) };


  protected:
    // Specifies whether the delete operation takes effect on all instances in the resource group. If you set this parameter to true, the InstanceIds parameter does not take effect.
    std::shared_ptr<bool> allInstances_ = nullptr;
    // The instance IDs.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The keys of the tags that you want to delete.
    std::shared_ptr<string> keysShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
