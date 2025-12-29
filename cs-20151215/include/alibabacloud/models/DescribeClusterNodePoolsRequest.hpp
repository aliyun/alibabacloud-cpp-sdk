// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodepoolName, nodepoolName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodepoolName, nodepoolName_);
    };
    DescribeClusterNodePoolsRequest() = default ;
    DescribeClusterNodePoolsRequest(const DescribeClusterNodePoolsRequest &) = default ;
    DescribeClusterNodePoolsRequest(DescribeClusterNodePoolsRequest &&) = default ;
    DescribeClusterNodePoolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsRequest() = default ;
    DescribeClusterNodePoolsRequest& operator=(const DescribeClusterNodePoolsRequest &) = default ;
    DescribeClusterNodePoolsRequest& operator=(DescribeClusterNodePoolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodepoolName_ == nullptr; };
    // nodepoolName Field Functions 
    bool hasNodepoolName() const { return this->nodepoolName_ != nullptr;};
    void deleteNodepoolName() { this->nodepoolName_ = nullptr;};
    inline string getNodepoolName() const { DARABONBA_PTR_GET_DEFAULT(nodepoolName_, "") };
    inline DescribeClusterNodePoolsRequest& setNodepoolName(string nodepoolName) { DARABONBA_PTR_SET_VALUE(nodepoolName_, nodepoolName) };


  protected:
    // Node pool name.
    shared_ptr<string> nodepoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
