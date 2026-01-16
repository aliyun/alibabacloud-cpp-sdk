// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSFERABLENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSFERABLENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetTransferableNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTransferableNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTransferableNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
    };
    GetTransferableNodesRequest() = default ;
    GetTransferableNodesRequest(const GetTransferableNodesRequest &) = default ;
    GetTransferableNodesRequest(GetTransferableNodesRequest &&) = default ;
    GetTransferableNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTransferableNodesRequest() = default ;
    GetTransferableNodesRequest& operator=(const GetTransferableNodesRequest &) = default ;
    GetTransferableNodesRequest& operator=(GetTransferableNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->nodeType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetTransferableNodesRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetTransferableNodesRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // The number of nodes to be migrated.
    // 
    // This parameter is required.
    shared_ptr<int32_t> count_ {};
    // The type of nodes.**WORKER**represents a hot node,**WORKER_WARM** represents a warm node.
    // 
    // This parameter is required.
    shared_ptr<string> nodeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
