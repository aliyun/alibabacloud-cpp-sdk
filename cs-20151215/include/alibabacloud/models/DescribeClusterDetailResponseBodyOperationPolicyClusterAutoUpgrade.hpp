// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODYOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODYOPERATIONPOLICYCLUSTERAUTOUPGRADE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade() = default ;
    DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade(const DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade &) = default ;
    DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade(DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade &&) = default ;
    DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade() = default ;
    DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade& operator=(const DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade &) = default ;
    DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade& operator=(DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade &&) = default ;
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
    inline DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // The frequency of auto cluster updates. For more information, see [Update frequency](https://help.aliyun.com/document_detail/2712866.html).
    // 
    // Valid values:
    // 
    // *   patch: specifies the latest patch version.
    // *   stable: specifies the second-latest minor version.
    // *   rapid: specifies the latest minor version.
    std::shared_ptr<string> channel_ = nullptr;
    // Specifies whether to enable auto cluster update.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
