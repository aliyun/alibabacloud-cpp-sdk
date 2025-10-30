// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSCALINGGROUPRESOURCEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSCALINGGROUPRESOURCEPOOLOPTIONS_HPP_
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
  class DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(private_pool_ids, privatePoolIds_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(private_pool_ids, privatePoolIds_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions(const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions(DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privatePoolIds_ == nullptr
        && return this->strategy_ == nullptr; };
    // privatePoolIds Field Functions 
    bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
    void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
    inline const vector<string> & privatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
    inline vector<string> privatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    std::shared_ptr<vector<string>> privatePoolIds_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
