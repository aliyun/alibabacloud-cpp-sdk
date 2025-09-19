// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTONLINERATIO_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTONLINERATIO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems.hpp>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBodyClientOnlineRatio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBodyClientOnlineRatio& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentItems, currentItems_);
      DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBodyClientOnlineRatio& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentItems, currentItems_);
      DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
    };
    GetClientRatioStatisticResponseBodyClientOnlineRatio() = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatio(const GetClientRatioStatisticResponseBodyClientOnlineRatio &) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatio(GetClientRatioStatisticResponseBodyClientOnlineRatio &&) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBodyClientOnlineRatio() = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatio& operator=(const GetClientRatioStatisticResponseBodyClientOnlineRatio &) = default ;
    GetClientRatioStatisticResponseBodyClientOnlineRatio& operator=(GetClientRatioStatisticResponseBodyClientOnlineRatio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentItems_ != nullptr
        && this->historyItems_ != nullptr; };
    // currentItems Field Functions 
    bool hasCurrentItems() const { return this->currentItems_ != nullptr;};
    void deleteCurrentItems() { this->currentItems_ = nullptr;};
    inline const vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems> & currentItems() const { DARABONBA_PTR_GET_CONST(currentItems_, vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems>) };
    inline vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems> currentItems() { DARABONBA_PTR_GET(currentItems_, vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems>) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatio& setCurrentItems(const vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems> & currentItems) { DARABONBA_PTR_SET_VALUE(currentItems_, currentItems) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatio& setCurrentItems(vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems> && currentItems) { DARABONBA_PTR_SET_RVALUE(currentItems_, currentItems) };


    // historyItems Field Functions 
    bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
    void deleteHistoryItems() { this->historyItems_ = nullptr;};
    inline const vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems> & historyItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems>) };
    inline vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems> historyItems() { DARABONBA_PTR_GET(historyItems_, vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems>) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatio& setHistoryItems(const vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
    inline GetClientRatioStatisticResponseBodyClientOnlineRatio& setHistoryItems(vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


  protected:
    // The list of current statistics on the online rate of the client.
    std::shared_ptr<vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioCurrentItems>> currentItems_ = nullptr;
    // The list of historical statistics on the online rate of the client.
    std::shared_ptr<vector<Models::GetClientRatioStatisticResponseBodyClientOnlineRatioHistoryItems>> historyItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
