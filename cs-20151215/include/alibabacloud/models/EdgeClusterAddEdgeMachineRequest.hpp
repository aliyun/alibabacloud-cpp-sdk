// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDGECLUSTERADDEDGEMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDGECLUSTERADDEDGEMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class EdgeClusterAddEdgeMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EdgeClusterAddEdgeMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expired, expired_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(options, options_);
    };
    friend void from_json(const Darabonba::Json& j, EdgeClusterAddEdgeMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expired, expired_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(options, options_);
    };
    EdgeClusterAddEdgeMachineRequest() = default ;
    EdgeClusterAddEdgeMachineRequest(const EdgeClusterAddEdgeMachineRequest &) = default ;
    EdgeClusterAddEdgeMachineRequest(EdgeClusterAddEdgeMachineRequest &&) = default ;
    EdgeClusterAddEdgeMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EdgeClusterAddEdgeMachineRequest() = default ;
    EdgeClusterAddEdgeMachineRequest& operator=(const EdgeClusterAddEdgeMachineRequest &) = default ;
    EdgeClusterAddEdgeMachineRequest& operator=(EdgeClusterAddEdgeMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expired_ != nullptr
        && this->nodepoolId_ != nullptr && this->options_ != nullptr; };
    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline int64_t expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, 0L) };
    inline EdgeClusterAddEdgeMachineRequest& setExpired(int64_t expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline EdgeClusterAddEdgeMachineRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline EdgeClusterAddEdgeMachineRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


  protected:
    // The timeout period of sessions. Unit: seconds.
    std::shared_ptr<int64_t> expired_ = nullptr;
    // The node pool ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // The options that you want to configure.
    std::shared_ptr<string> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
