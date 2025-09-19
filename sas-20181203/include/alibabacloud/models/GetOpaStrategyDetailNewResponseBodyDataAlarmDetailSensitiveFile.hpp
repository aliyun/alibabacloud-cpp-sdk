// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAILSENSITIVEFILE_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAILSENSITIVEFILE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile(GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile &&) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& operator=(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& operator=(GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->riskLevel_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem>) };
    inline vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem> item() { DARABONBA_PTR_GET(item_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& setItem(const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& setItem(vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The configuration of sensitive file.
    std::shared_ptr<vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFileItem>> item_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
