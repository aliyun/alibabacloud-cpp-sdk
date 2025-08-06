// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSREBALANCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSREBALANCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(RebalanceInfoList, rebalanceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(RebalanceInfoList, rebalanceInfoList_);
    };
    GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList(const GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList(GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList &&) = default ;
    GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList& operator=(const GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList& operator=(GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rebalanceInfoList_ != nullptr; };
    // rebalanceInfoList Field Functions 
    bool hasRebalanceInfoList() const { return this->rebalanceInfoList_ != nullptr;};
    void deleteRebalanceInfoList() { this->rebalanceInfoList_ = nullptr;};
    inline const vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList> & rebalanceInfoList() const { DARABONBA_PTR_GET_CONST(rebalanceInfoList_, vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList>) };
    inline vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList> rebalanceInfoList() { DARABONBA_PTR_GET(rebalanceInfoList_, vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList>) };
    inline GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList& setRebalanceInfoList(const vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList> & rebalanceInfoList) { DARABONBA_PTR_SET_VALUE(rebalanceInfoList_, rebalanceInfoList) };
    inline GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList& setRebalanceInfoList(vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList> && rebalanceInfoList) { DARABONBA_PTR_SET_RVALUE(rebalanceInfoList_, rebalanceInfoList) };


  protected:
    std::shared_ptr<vector<Models::GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList>> rebalanceInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
