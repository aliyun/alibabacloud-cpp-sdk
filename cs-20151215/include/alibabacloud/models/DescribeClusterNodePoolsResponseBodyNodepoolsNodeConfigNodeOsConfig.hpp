// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSNODECONFIGNODEOSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSNODECONFIGNODEOSCONFIG_HPP_
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
  class DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(hugepage, hugepage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(hugepage, hugepage_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig(const DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig(DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hugepage_ == nullptr; };
    // hugepage Field Functions 
    bool hasHugepage() const { return this->hugepage_ != nullptr;};
    void deleteHugepage() { this->hugepage_ = nullptr;};
    inline const Models::Hugepage & hugepage() const { DARABONBA_PTR_GET_CONST(hugepage_, Models::Hugepage) };
    inline Models::Hugepage hugepage() { DARABONBA_PTR_GET(hugepage_, Models::Hugepage) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig& setHugepage(const Models::Hugepage & hugepage) { DARABONBA_PTR_SET_VALUE(hugepage_, hugepage) };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsNodeConfigNodeOsConfig& setHugepage(Models::Hugepage && hugepage) { DARABONBA_PTR_SET_RVALUE(hugepage_, hugepage) };


  protected:
    std::shared_ptr<Models::Hugepage> hugepage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
