// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestOperationPolicyClusterAutoUpgrade : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    CreateClusterRequestOperationPolicyClusterAutoUpgrade() = default ;
    CreateClusterRequestOperationPolicyClusterAutoUpgrade(const CreateClusterRequestOperationPolicyClusterAutoUpgrade &) = default ;
    CreateClusterRequestOperationPolicyClusterAutoUpgrade(CreateClusterRequestOperationPolicyClusterAutoUpgrade &&) = default ;
    CreateClusterRequestOperationPolicyClusterAutoUpgrade(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestOperationPolicyClusterAutoUpgrade() = default ;
    CreateClusterRequestOperationPolicyClusterAutoUpgrade& operator=(const CreateClusterRequestOperationPolicyClusterAutoUpgrade &) = default ;
    CreateClusterRequestOperationPolicyClusterAutoUpgrade& operator=(CreateClusterRequestOperationPolicyClusterAutoUpgrade &&) = default ;
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
    inline CreateClusterRequestOperationPolicyClusterAutoUpgrade& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateClusterRequestOperationPolicyClusterAutoUpgrade& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The automatic update frequency. Valid values:
    // 
    // *   patch
    // *   stable
    // *   rapid
    std::shared_ptr<string> channel_ = nullptr;
    // Specifies whether to enable auto cluster update.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
