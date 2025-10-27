// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLISHAUTOUPGRADEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLISHAUTOUPGRADEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdatePublishAutoUpgradeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublishAutoUpgradeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUpgrade, autoUpgrade_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublishAutoUpgradeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpgrade, autoUpgrade_);
    };
    UpdatePublishAutoUpgradeRequest() = default ;
    UpdatePublishAutoUpgradeRequest(const UpdatePublishAutoUpgradeRequest &) = default ;
    UpdatePublishAutoUpgradeRequest(UpdatePublishAutoUpgradeRequest &&) = default ;
    UpdatePublishAutoUpgradeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublishAutoUpgradeRequest() = default ;
    UpdatePublishAutoUpgradeRequest& operator=(const UpdatePublishAutoUpgradeRequest &) = default ;
    UpdatePublishAutoUpgradeRequest& operator=(UpdatePublishAutoUpgradeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgrade_ == nullptr; };
    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline int32_t autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, 0) };
    inline UpdatePublishAutoUpgradeRequest& setAutoUpgrade(int32_t autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


  protected:
    // Specifies whether to enable automatic upgrade. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> autoUpgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
