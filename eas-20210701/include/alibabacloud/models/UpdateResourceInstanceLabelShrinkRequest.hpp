// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEINSTANCELABELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEINSTANCELABELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceInstanceLabelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceInstanceLabelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceInstanceLabelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    UpdateResourceInstanceLabelShrinkRequest() = default ;
    UpdateResourceInstanceLabelShrinkRequest(const UpdateResourceInstanceLabelShrinkRequest &) = default ;
    UpdateResourceInstanceLabelShrinkRequest(UpdateResourceInstanceLabelShrinkRequest &&) = default ;
    UpdateResourceInstanceLabelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceInstanceLabelShrinkRequest() = default ;
    UpdateResourceInstanceLabelShrinkRequest& operator=(const UpdateResourceInstanceLabelShrinkRequest &) = default ;
    UpdateResourceInstanceLabelShrinkRequest& operator=(UpdateResourceInstanceLabelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allInstances_ != nullptr
        && this->instanceIdsShrink_ != nullptr && this->labels_ != nullptr; };
    // allInstances Field Functions 
    bool hasAllInstances() const { return this->allInstances_ != nullptr;};
    void deleteAllInstances() { this->allInstances_ = nullptr;};
    inline bool allInstances() const { DARABONBA_PTR_GET_DEFAULT(allInstances_, false) };
    inline UpdateResourceInstanceLabelShrinkRequest& setAllInstances(bool allInstances) { DARABONBA_PTR_SET_VALUE(allInstances_, allInstances) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline UpdateResourceInstanceLabelShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline UpdateResourceInstanceLabelShrinkRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateResourceInstanceLabelShrinkRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // Specifies whether the modification takes effect on all instances in the resource group. If you set this parameter to true, the InstanceIds parameter does not take effect.
    std::shared_ptr<bool> allInstances_ = nullptr;
    // The instance IDs.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The custom tag.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
