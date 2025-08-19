// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequestOperationPolicyClusterAutoUpgrade : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequestOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequestOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    ModifyClusterRequestOperationPolicyClusterAutoUpgrade() = default ;
    ModifyClusterRequestOperationPolicyClusterAutoUpgrade(const ModifyClusterRequestOperationPolicyClusterAutoUpgrade &) = default ;
    ModifyClusterRequestOperationPolicyClusterAutoUpgrade(ModifyClusterRequestOperationPolicyClusterAutoUpgrade &&) = default ;
    ModifyClusterRequestOperationPolicyClusterAutoUpgrade(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequestOperationPolicyClusterAutoUpgrade() = default ;
    ModifyClusterRequestOperationPolicyClusterAutoUpgrade& operator=(const ModifyClusterRequestOperationPolicyClusterAutoUpgrade &) = default ;
    ModifyClusterRequestOperationPolicyClusterAutoUpgrade& operator=(ModifyClusterRequestOperationPolicyClusterAutoUpgrade &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->enabled_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ModifyClusterRequestOperationPolicyClusterAutoUpgrade& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyClusterRequestOperationPolicyClusterAutoUpgrade& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The frequency of auto cluster update. For more information, see [Update frequency](https://help.aliyun.com/document_detail/2712866.html).
    // 
    // Valid values:
    // 
    // *   patch: the latest patch version.
    // *   stables: the second-latest minor version.
    // *   rapid: the latest minor version.
    std::shared_ptr<string> channel_ = nullptr;
    // Specifies whether to enable automatic update.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
