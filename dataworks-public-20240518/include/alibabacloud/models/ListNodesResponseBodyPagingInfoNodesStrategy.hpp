// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESSTRATEGY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    ListNodesResponseBodyPagingInfoNodesStrategy() = default ;
    ListNodesResponseBodyPagingInfoNodesStrategy(const ListNodesResponseBodyPagingInfoNodesStrategy &) = default ;
    ListNodesResponseBodyPagingInfoNodesStrategy(ListNodesResponseBodyPagingInfoNodesStrategy &&) = default ;
    ListNodesResponseBodyPagingInfoNodesStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesStrategy() = default ;
    ListNodesResponseBodyPagingInfoNodesStrategy& operator=(const ListNodesResponseBodyPagingInfoNodesStrategy &) = default ;
    ListNodesResponseBodyPagingInfoNodesStrategy& operator=(ListNodesResponseBodyPagingInfoNodesStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceMode_ != nullptr
        && this->rerunInterval_ != nullptr && this->rerunMode_ != nullptr && this->rerunTimes_ != nullptr && this->timeout_ != nullptr; };
    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string instanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline ListNodesResponseBodyPagingInfoNodesStrategy& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t rerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline ListNodesResponseBodyPagingInfoNodesStrategy& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline ListNodesResponseBodyPagingInfoNodesStrategy& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t rerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline ListNodesResponseBodyPagingInfoNodesStrategy& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ListNodesResponseBodyPagingInfoNodesStrategy& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The instance generation mode. Valid values:
    // 
    // *   T+1
    // *   Immediately
    std::shared_ptr<string> instanceMode_ = nullptr;
    // The rerun interval. Unit: milliseconds.
    std::shared_ptr<int32_t> rerunInterval_ = nullptr;
    // The rerun mode. Valid values:
    // 
    // *   Allowed
    // *   Denied
    // *   FailureAllowed
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The number of reruns.
    std::shared_ptr<int32_t> rerunTimes_ = nullptr;
    // Timeout.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
