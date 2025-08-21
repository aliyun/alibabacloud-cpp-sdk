// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUGGESTSHRINKABLENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUGGESTSHRINKABLENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetSuggestShrinkableNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuggestShrinkableNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(ignoreStatus, ignoreStatus_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuggestShrinkableNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(ignoreStatus, ignoreStatus_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
    };
    GetSuggestShrinkableNodesRequest() = default ;
    GetSuggestShrinkableNodesRequest(const GetSuggestShrinkableNodesRequest &) = default ;
    GetSuggestShrinkableNodesRequest(GetSuggestShrinkableNodesRequest &&) = default ;
    GetSuggestShrinkableNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuggestShrinkableNodesRequest() = default ;
    GetSuggestShrinkableNodesRequest& operator=(const GetSuggestShrinkableNodesRequest &) = default ;
    GetSuggestShrinkableNodesRequest& operator=(GetSuggestShrinkableNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->ignoreStatus_ != nullptr && this->nodeType_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetSuggestShrinkableNodesRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ignoreStatus Field Functions 
    bool hasIgnoreStatus() const { return this->ignoreStatus_ != nullptr;};
    void deleteIgnoreStatus() { this->ignoreStatus_ = nullptr;};
    inline bool ignoreStatus() const { DARABONBA_PTR_GET_DEFAULT(ignoreStatus_, false) };
    inline GetSuggestShrinkableNodesRequest& setIgnoreStatus(bool ignoreStatus) { DARABONBA_PTR_SET_VALUE(ignoreStatus_, ignoreStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetSuggestShrinkableNodesRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // The number of nodes that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> count_ = nullptr;
    // Specifies whether to ignore the instance status. Default value: false.
    std::shared_ptr<bool> ignoreStatus_ = nullptr;
    // The type of removing nodes. WORKER indicates hot node and WORKER_WARM indicates warm node.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
