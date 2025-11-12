// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
    };
    DescribeNodeGroupRequest() = default ;
    DescribeNodeGroupRequest(const DescribeNodeGroupRequest &) = default ;
    DescribeNodeGroupRequest(DescribeNodeGroupRequest &&) = default ;
    DescribeNodeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeGroupRequest() = default ;
    DescribeNodeGroupRequest& operator=(const DescribeNodeGroupRequest &) = default ;
    DescribeNodeGroupRequest& operator=(DescribeNodeGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupId_ == nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DescribeNodeGroupRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
