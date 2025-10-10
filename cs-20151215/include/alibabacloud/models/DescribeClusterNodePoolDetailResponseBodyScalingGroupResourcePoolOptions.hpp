// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSCALINGGROUPRESOURCEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSCALINGGROUPRESOURCEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(private_pool_ids, privatePoolIds_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(private_pool_ids, privatePoolIds_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions() = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions(const DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions &) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions(DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions() = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& operator=(const DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions &) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& operator=(DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privatePoolIds_ != nullptr
        && this->strategy_ != nullptr; };
    // privatePoolIds Field Functions 
    bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
    void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
    inline const vector<string> & privatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
    inline vector<string> privatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroupResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<string>> privatePoolIds_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
