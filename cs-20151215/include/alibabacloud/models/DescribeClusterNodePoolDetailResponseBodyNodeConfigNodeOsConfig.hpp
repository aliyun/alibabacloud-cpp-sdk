// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECONFIGNODEOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYNODECONFIGNODEOSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Hugepage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(hugepage, hugepage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(hugepage, hugepage_);
    };
    DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig(const DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig(DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig() = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig& operator=(const DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig &) = default ;
    DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig& operator=(DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hugepage_ != nullptr; };
    // hugepage Field Functions 
    bool hasHugepage() const { return this->hugepage_ != nullptr;};
    void deleteHugepage() { this->hugepage_ = nullptr;};
    inline const Models::Hugepage & hugepage() const { DARABONBA_PTR_GET_CONST(hugepage_, Models::Hugepage) };
    inline Models::Hugepage hugepage() { DARABONBA_PTR_GET(hugepage_, Models::Hugepage) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig& setHugepage(const Models::Hugepage & hugepage) { DARABONBA_PTR_SET_VALUE(hugepage_, hugepage) };
    inline DescribeClusterNodePoolDetailResponseBodyNodeConfigNodeOsConfig& setHugepage(Models::Hugepage && hugepage) { DARABONBA_PTR_SET_RVALUE(hugepage_, hugepage) };


  protected:
    std::shared_ptr<Models::Hugepage> hugepage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
