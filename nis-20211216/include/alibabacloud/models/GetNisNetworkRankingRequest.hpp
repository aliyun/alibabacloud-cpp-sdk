// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKRANKINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisNetworkRankingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkRankingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
      DARABONBA_PTR_TO_JSON(UseCrossAccount, useCrossAccount_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkRankingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
      DARABONBA_PTR_FROM_JSON(UseCrossAccount, useCrossAccount_);
    };
    GetNisNetworkRankingRequest() = default ;
    GetNisNetworkRankingRequest(const GetNisNetworkRankingRequest &) = default ;
    GetNisNetworkRankingRequest(GetNisNetworkRankingRequest &&) = default ;
    GetNisNetworkRankingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkRankingRequest() = default ;
    GetNisNetworkRankingRequest& operator=(const GetNisNetworkRankingRequest &) = default ;
    GetNisNetworkRankingRequest& operator=(GetNisNetworkRankingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->beginTime_ == nullptr && this->direction_ == nullptr && this->endTime_ == nullptr && this->filter_ == nullptr && this->groupBy_ == nullptr
        && this->orderBy_ == nullptr && this->regionNo_ == nullptr && this->resourceType_ == nullptr && this->sort_ == nullptr && this->topN_ == nullptr
        && this->useCrossAccount_ == nullptr; };
    // accountIds Field Functions 
    bool hasAccountIds() const { return this->accountIds_ != nullptr;};
    void deleteAccountIds() { this->accountIds_ = nullptr;};
    inline const vector<string> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<string>) };
    inline vector<string> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<string>) };
    inline GetNisNetworkRankingRequest& setAccountIds(const vector<string> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
    inline GetNisNetworkRankingRequest& setAccountIds(vector<string> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline GetNisNetworkRankingRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline GetNisNetworkRankingRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetNisNetworkRankingRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetNisNetworkRankingRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetNisNetworkRankingRequest::Filter>) };
    inline vector<GetNisNetworkRankingRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<GetNisNetworkRankingRequest::Filter>) };
    inline GetNisNetworkRankingRequest& setFilter(const vector<GetNisNetworkRankingRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetNisNetworkRankingRequest& setFilter(vector<GetNisNetworkRankingRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline GetNisNetworkRankingRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetNisNetworkRankingRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline GetNisNetworkRankingRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetNisNetworkRankingRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline GetNisNetworkRankingRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline GetNisNetworkRankingRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


    // useCrossAccount Field Functions 
    bool hasUseCrossAccount() const { return this->useCrossAccount_ != nullptr;};
    void deleteUseCrossAccount() { this->useCrossAccount_ = nullptr;};
    inline bool getUseCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(useCrossAccount_, false) };
    inline GetNisNetworkRankingRequest& setUseCrossAccount(bool useCrossAccount) { DARABONBA_PTR_SET_VALUE(useCrossAccount_, useCrossAccount) };


  protected:
    shared_ptr<vector<string>> accountIds_ {};
    shared_ptr<int64_t> beginTime_ {};
    // This parameter is required.
    shared_ptr<string> direction_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<GetNisNetworkRankingRequest::Filter>> filter_ {};
    // This parameter is required.
    shared_ptr<string> groupBy_ {};
    // This parameter is required.
    shared_ptr<string> orderBy_ {};
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<int32_t> topN_ {};
    shared_ptr<bool> useCrossAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
