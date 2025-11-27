// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREBALANCEINFORESPONSEBODYDATAREBALANCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTREBALANCEINFORESPONSEBODYDATAREBALANCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ListRebalanceInfoResponseBodyDataRebalanceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRebalanceInfoResponseBodyDataRebalanceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Generation, generation_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LastRebalanceTimestamp, lastRebalanceTimestamp_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RebalanceSuccess, rebalanceSuccess_);
      DARABONBA_PTR_TO_JSON(RebalanceTimeConsuming, rebalanceTimeConsuming_);
    };
    friend void from_json(const Darabonba::Json& j, ListRebalanceInfoResponseBodyDataRebalanceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Generation, generation_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LastRebalanceTimestamp, lastRebalanceTimestamp_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RebalanceSuccess, rebalanceSuccess_);
      DARABONBA_PTR_FROM_JSON(RebalanceTimeConsuming, rebalanceTimeConsuming_);
    };
    ListRebalanceInfoResponseBodyDataRebalanceInfoList() = default ;
    ListRebalanceInfoResponseBodyDataRebalanceInfoList(const ListRebalanceInfoResponseBodyDataRebalanceInfoList &) = default ;
    ListRebalanceInfoResponseBodyDataRebalanceInfoList(ListRebalanceInfoResponseBodyDataRebalanceInfoList &&) = default ;
    ListRebalanceInfoResponseBodyDataRebalanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRebalanceInfoResponseBodyDataRebalanceInfoList() = default ;
    ListRebalanceInfoResponseBodyDataRebalanceInfoList& operator=(const ListRebalanceInfoResponseBodyDataRebalanceInfoList &) = default ;
    ListRebalanceInfoResponseBodyDataRebalanceInfoList& operator=(ListRebalanceInfoResponseBodyDataRebalanceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generation_ == nullptr
        && return this->groupId_ == nullptr && return this->lastRebalanceTimestamp_ == nullptr && return this->reason_ == nullptr && return this->rebalanceSuccess_ == nullptr && return this->rebalanceTimeConsuming_ == nullptr; };
    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int64_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
    inline ListRebalanceInfoResponseBodyDataRebalanceInfoList& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListRebalanceInfoResponseBodyDataRebalanceInfoList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lastRebalanceTimestamp Field Functions 
    bool hasLastRebalanceTimestamp() const { return this->lastRebalanceTimestamp_ != nullptr;};
    void deleteLastRebalanceTimestamp() { this->lastRebalanceTimestamp_ = nullptr;};
    inline int64_t lastRebalanceTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastRebalanceTimestamp_, 0L) };
    inline ListRebalanceInfoResponseBodyDataRebalanceInfoList& setLastRebalanceTimestamp(int64_t lastRebalanceTimestamp) { DARABONBA_PTR_SET_VALUE(lastRebalanceTimestamp_, lastRebalanceTimestamp) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListRebalanceInfoResponseBodyDataRebalanceInfoList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // rebalanceSuccess Field Functions 
    bool hasRebalanceSuccess() const { return this->rebalanceSuccess_ != nullptr;};
    void deleteRebalanceSuccess() { this->rebalanceSuccess_ = nullptr;};
    inline bool rebalanceSuccess() const { DARABONBA_PTR_GET_DEFAULT(rebalanceSuccess_, false) };
    inline ListRebalanceInfoResponseBodyDataRebalanceInfoList& setRebalanceSuccess(bool rebalanceSuccess) { DARABONBA_PTR_SET_VALUE(rebalanceSuccess_, rebalanceSuccess) };


    // rebalanceTimeConsuming Field Functions 
    bool hasRebalanceTimeConsuming() const { return this->rebalanceTimeConsuming_ != nullptr;};
    void deleteRebalanceTimeConsuming() { this->rebalanceTimeConsuming_ = nullptr;};
    inline int64_t rebalanceTimeConsuming() const { DARABONBA_PTR_GET_DEFAULT(rebalanceTimeConsuming_, 0L) };
    inline ListRebalanceInfoResponseBodyDataRebalanceInfoList& setRebalanceTimeConsuming(int64_t rebalanceTimeConsuming) { DARABONBA_PTR_SET_VALUE(rebalanceTimeConsuming_, rebalanceTimeConsuming) };


  protected:
    std::shared_ptr<int64_t> generation_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<int64_t> lastRebalanceTimestamp_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<bool> rebalanceSuccess_ = nullptr;
    std::shared_ptr<int64_t> rebalanceTimeConsuming_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
