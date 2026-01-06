// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINCLINEDNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINCLINEDNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DiskUsageRatio, diskUsageRatio_);
        DARABONBA_PTR_TO_JSON(Node, node_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskUsageRatio, diskUsageRatio_);
        DARABONBA_PTR_FROM_JSON(Node, node_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diskUsageRatio_ == nullptr
        && this->node_ == nullptr; };
      // diskUsageRatio Field Functions 
      bool hasDiskUsageRatio() const { return this->diskUsageRatio_ != nullptr;};
      void deleteDiskUsageRatio() { this->diskUsageRatio_ = nullptr;};
      inline string getDiskUsageRatio() const { DARABONBA_PTR_GET_DEFAULT(diskUsageRatio_, "") };
      inline Items& setDiskUsageRatio(string diskUsageRatio) { DARABONBA_PTR_SET_VALUE(diskUsageRatio_, diskUsageRatio) };


      // node Field Functions 
      bool hasNode() const { return this->node_ != nullptr;};
      void deleteNode() { this->node_ = nullptr;};
      inline string getNode() const { DARABONBA_PTR_GET_DEFAULT(node_, "") };
      inline Items& setNode(string node) { DARABONBA_PTR_SET_VALUE(node_, node) };


    protected:
      // The disk usage of the storage node.
      shared_ptr<string> diskUsageRatio_ {};
      // The number of the storage node.
      shared_ptr<string> node_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeInclinedNodesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeInclinedNodesResponseBody::Items>) };
    inline vector<DescribeInclinedNodesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeInclinedNodesResponseBody::Items>) };
    inline DescribeInclinedNodesResponseBody& setItems(const vector<DescribeInclinedNodesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeInclinedNodesResponseBody& setItems(vector<DescribeInclinedNodesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInclinedNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried storage nodes.
    shared_ptr<vector<DescribeInclinedNodesResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
