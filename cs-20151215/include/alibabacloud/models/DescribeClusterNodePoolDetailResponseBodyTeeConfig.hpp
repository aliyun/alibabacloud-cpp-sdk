// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYTEECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYTEECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyTeeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyTeeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(tee_enable, teeEnable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyTeeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(tee_enable, teeEnable_);
    };
    DescribeClusterNodePoolDetailResponseBodyTeeConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyTeeConfig(const DescribeClusterNodePoolDetailResponseBodyTeeConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyTeeConfig(DescribeClusterNodePoolDetailResponseBodyTeeConfig &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyTeeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyTeeConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyTeeConfig& operator=(const DescribeClusterNodePoolDetailResponseBodyTeeConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyTeeConfig& operator=(DescribeClusterNodePoolDetailResponseBodyTeeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->teeEnable_ != nullptr; };
    // teeEnable Field Functions 
    bool hasTeeEnable() const { return this->teeEnable_ != nullptr;};
    void deleteTeeEnable() { this->teeEnable_ = nullptr;};
    inline bool teeEnable() const { DARABONBA_PTR_GET_DEFAULT(teeEnable_, false) };
    inline DescribeClusterNodePoolDetailResponseBodyTeeConfig& setTeeEnable(bool teeEnable) { DARABONBA_PTR_SET_VALUE(teeEnable_, teeEnable) };


  protected:
    // Indicates whether confidential computing is enabled. Valid values:
    // 
    // *   `true`: Confidential computing is enabled.
    // *   `false`: Confidential computing is disabled.
    std::shared_ptr<bool> teeEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
