// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKGROUPREQUESTAUTODEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKGROUPREQUESTAUTODEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackGroupRequestAutoDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackGroupRequestAutoDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackGroupRequestAutoDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    UpdateStackGroupRequestAutoDeployment() = default ;
    UpdateStackGroupRequestAutoDeployment(const UpdateStackGroupRequestAutoDeployment &) = default ;
    UpdateStackGroupRequestAutoDeployment(UpdateStackGroupRequestAutoDeployment &&) = default ;
    UpdateStackGroupRequestAutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackGroupRequestAutoDeployment() = default ;
    UpdateStackGroupRequestAutoDeployment& operator=(const UpdateStackGroupRequestAutoDeployment &) = default ;
    UpdateStackGroupRequestAutoDeployment& operator=(UpdateStackGroupRequestAutoDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->retainStacksOnAccountRemoval_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateStackGroupRequestAutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // retainStacksOnAccountRemoval Field Functions 
    bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
    void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
    inline bool retainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
    inline UpdateStackGroupRequestAutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


  protected:
    // The IDs of the members in the resource directory. You can specify a maximum of 20 member IDs.
    // 
    // >  To view the member IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the detailed information of a member](https://help.aliyun.com/document_detail/111624.html).
    std::shared_ptr<bool> enabled_ = nullptr;
    // The IDs of the members in the resource directory. You can specify a maximum of 20 member IDs.
    // 
    // >  To view the member IDs, go to the **Overview** page in the **Resource Management** console. For more information, see [View the detailed information of a member](https://help.aliyun.com/document_detail/111624.html).
    std::shared_ptr<bool> retainStacksOnAccountRemoval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
