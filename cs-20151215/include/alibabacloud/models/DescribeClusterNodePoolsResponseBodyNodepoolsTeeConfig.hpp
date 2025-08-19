// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSTEECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSTEECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(tee_enable, teeEnable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(tee_enable, teeEnable_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig(const DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig(DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->teeEnable_ != nullptr; };
    // teeEnable Field Functions 
    bool hasTeeEnable() const { return this->teeEnable_ != nullptr;};
    void deleteTeeEnable() { this->teeEnable_ = nullptr;};
    inline bool teeEnable() const { DARABONBA_PTR_GET_DEFAULT(teeEnable_, false) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig& setTeeEnable(bool teeEnable) { DARABONBA_PTR_SET_VALUE(teeEnable_, teeEnable) };


  protected:
    // Specifies whether to enable confidential computing for the cluster. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> teeEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
