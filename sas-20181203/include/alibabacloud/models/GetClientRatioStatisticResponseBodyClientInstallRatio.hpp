// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTINSTALLRATIO_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTRATIOSTATISTICRESPONSEBODYCLIENTINSTALLRATIO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems.hpp>
#include <alibabacloud/models/GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClientRatioStatisticResponseBodyClientInstallRatio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientRatioStatisticResponseBodyClientInstallRatio& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentItems, currentItems_);
      DARABONBA_PTR_TO_JSON(HistoryItems, historyItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientRatioStatisticResponseBodyClientInstallRatio& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentItems, currentItems_);
      DARABONBA_PTR_FROM_JSON(HistoryItems, historyItems_);
    };
    GetClientRatioStatisticResponseBodyClientInstallRatio() = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatio(const GetClientRatioStatisticResponseBodyClientInstallRatio &) = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatio(GetClientRatioStatisticResponseBodyClientInstallRatio &&) = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientRatioStatisticResponseBodyClientInstallRatio() = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatio& operator=(const GetClientRatioStatisticResponseBodyClientInstallRatio &) = default ;
    GetClientRatioStatisticResponseBodyClientInstallRatio& operator=(GetClientRatioStatisticResponseBodyClientInstallRatio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentItems_ != nullptr
        && this->historyItems_ != nullptr; };
    // currentItems Field Functions 
    bool hasCurrentItems() const { return this->currentItems_ != nullptr;};
    void deleteCurrentItems() { this->currentItems_ = nullptr;};
    inline const vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems> & currentItems() const { DARABONBA_PTR_GET_CONST(currentItems_, vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems>) };
    inline vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems> currentItems() { DARABONBA_PTR_GET(currentItems_, vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems>) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatio& setCurrentItems(const vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems> & currentItems) { DARABONBA_PTR_SET_VALUE(currentItems_, currentItems) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatio& setCurrentItems(vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems> && currentItems) { DARABONBA_PTR_SET_RVALUE(currentItems_, currentItems) };


    // historyItems Field Functions 
    bool hasHistoryItems() const { return this->historyItems_ != nullptr;};
    void deleteHistoryItems() { this->historyItems_ = nullptr;};
    inline const vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems> & historyItems() const { DARABONBA_PTR_GET_CONST(historyItems_, vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems>) };
    inline vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems> historyItems() { DARABONBA_PTR_GET(historyItems_, vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems>) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatio& setHistoryItems(const vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems> & historyItems) { DARABONBA_PTR_SET_VALUE(historyItems_, historyItems) };
    inline GetClientRatioStatisticResponseBodyClientInstallRatio& setHistoryItems(vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems> && historyItems) { DARABONBA_PTR_SET_RVALUE(historyItems_, historyItems) };


  protected:
    // The list of current statistics on the installation rate of the client.
    std::shared_ptr<vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioCurrentItems>> currentItems_ = nullptr;
    // The list of historical statistics on the installation rate of the client.
    std::shared_ptr<vector<Models::GetClientRatioStatisticResponseBodyClientInstallRatioHistoryItems>> historyItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
