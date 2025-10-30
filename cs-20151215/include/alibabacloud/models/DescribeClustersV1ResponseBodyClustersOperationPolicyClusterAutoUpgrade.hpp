// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODYCLUSTERSOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODYCLUSTERSOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade() = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade(const DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade &) = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade(DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade &&) = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade() = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade& operator=(const DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade &) = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade& operator=(DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && return this->enabled_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The frequency of auto cluster updates. For more information, see [Update frequency](https://help.aliyun.com/document_detail/2712866.html).
    // 
    // Valid values:
    // 
    // *   patch: the latest patch version.
    // *   stables: the second-latest minor version.
    // *   rapid: the latest minor version.
    std::shared_ptr<string> channel_ = nullptr;
    // Specifies whether to enable auto cluster update.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
