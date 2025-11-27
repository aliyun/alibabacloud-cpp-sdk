// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCNodePoolResponseBodyNodePoolList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCNodePoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCNodePoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodePoolList, nodePoolList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCNodePoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodePoolList, nodePoolList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCNodePoolResponseBody() = default ;
    DescribeRCNodePoolResponseBody(const DescribeRCNodePoolResponseBody &) = default ;
    DescribeRCNodePoolResponseBody(DescribeRCNodePoolResponseBody &&) = default ;
    DescribeRCNodePoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCNodePoolResponseBody() = default ;
    DescribeRCNodePoolResponseBody& operator=(const DescribeRCNodePoolResponseBody &) = default ;
    DescribeRCNodePoolResponseBody& operator=(DescribeRCNodePoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodePoolList_ == nullptr
        && return this->requestId_ == nullptr; };
    // nodePoolList Field Functions 
    bool hasNodePoolList() const { return this->nodePoolList_ != nullptr;};
    void deleteNodePoolList() { this->nodePoolList_ = nullptr;};
    inline const vector<DescribeRCNodePoolResponseBodyNodePoolList> & nodePoolList() const { DARABONBA_PTR_GET_CONST(nodePoolList_, vector<DescribeRCNodePoolResponseBodyNodePoolList>) };
    inline vector<DescribeRCNodePoolResponseBodyNodePoolList> nodePoolList() { DARABONBA_PTR_GET(nodePoolList_, vector<DescribeRCNodePoolResponseBodyNodePoolList>) };
    inline DescribeRCNodePoolResponseBody& setNodePoolList(const vector<DescribeRCNodePoolResponseBodyNodePoolList> & nodePoolList) { DARABONBA_PTR_SET_VALUE(nodePoolList_, nodePoolList) };
    inline DescribeRCNodePoolResponseBody& setNodePoolList(vector<DescribeRCNodePoolResponseBodyNodePoolList> && nodePoolList) { DARABONBA_PTR_SET_RVALUE(nodePoolList_, nodePoolList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCNodePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The node pool information.
    std::shared_ptr<vector<DescribeRCNodePoolResponseBodyNodePoolList>> nodePoolList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
