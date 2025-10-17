// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNodeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    DescribeNodeTypeRequest() = default ;
    DescribeNodeTypeRequest(const DescribeNodeTypeRequest &) = default ;
    DescribeNodeTypeRequest(DescribeNodeTypeRequest &&) = default ;
    DescribeNodeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeTypeRequest() = default ;
    DescribeNodeTypeRequest& operator=(const DescribeNodeTypeRequest &) = default ;
    DescribeNodeTypeRequest& operator=(DescribeNodeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeType_ == nullptr; };
    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeNodeTypeRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
