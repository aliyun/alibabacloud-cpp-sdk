// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCLINEDNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCLINEDNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInclinedNodesResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeInclinedNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInclinedNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInclinedNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInclinedNodesResponseBody() = default ;
    DescribeInclinedNodesResponseBody(const DescribeInclinedNodesResponseBody &) = default ;
    DescribeInclinedNodesResponseBody(DescribeInclinedNodesResponseBody &&) = default ;
    DescribeInclinedNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInclinedNodesResponseBody() = default ;
    DescribeInclinedNodesResponseBody& operator=(const DescribeInclinedNodesResponseBody &) = default ;
    DescribeInclinedNodesResponseBody& operator=(DescribeInclinedNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->requestId_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeInclinedNodesResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeInclinedNodesResponseBodyItems>) };
    inline vector<DescribeInclinedNodesResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeInclinedNodesResponseBodyItems>) };
    inline DescribeInclinedNodesResponseBody& setItems(const vector<DescribeInclinedNodesResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeInclinedNodesResponseBody& setItems(vector<DescribeInclinedNodesResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInclinedNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried storage nodes.
    std::shared_ptr<vector<DescribeInclinedNodesResponseBodyItems>> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
