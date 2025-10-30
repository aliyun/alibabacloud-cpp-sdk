// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONSUPGRADESTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONSUPGRADESTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterAddonsUpgradeStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAddonsUpgradeStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentIds, componentIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAddonsUpgradeStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentIds, componentIdsShrink_);
    };
    DescribeClusterAddonsUpgradeStatusShrinkRequest() = default ;
    DescribeClusterAddonsUpgradeStatusShrinkRequest(const DescribeClusterAddonsUpgradeStatusShrinkRequest &) = default ;
    DescribeClusterAddonsUpgradeStatusShrinkRequest(DescribeClusterAddonsUpgradeStatusShrinkRequest &&) = default ;
    DescribeClusterAddonsUpgradeStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAddonsUpgradeStatusShrinkRequest() = default ;
    DescribeClusterAddonsUpgradeStatusShrinkRequest& operator=(const DescribeClusterAddonsUpgradeStatusShrinkRequest &) = default ;
    DescribeClusterAddonsUpgradeStatusShrinkRequest& operator=(DescribeClusterAddonsUpgradeStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentIdsShrink_ == nullptr; };
    // componentIdsShrink Field Functions 
    bool hasComponentIdsShrink() const { return this->componentIdsShrink_ != nullptr;};
    void deleteComponentIdsShrink() { this->componentIdsShrink_ = nullptr;};
    inline string componentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentIdsShrink_, "") };
    inline DescribeClusterAddonsUpgradeStatusShrinkRequest& setComponentIdsShrink(string componentIdsShrink) { DARABONBA_PTR_SET_VALUE(componentIdsShrink_, componentIdsShrink) };


  protected:
    // The list of component names.
    // 
    // This parameter is required.
    std::shared_ptr<string> componentIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
