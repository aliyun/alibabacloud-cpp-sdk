// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENHOSTSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENHOSTSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenHostStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenHostStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SafeCount, safeCount_);
      DARABONBA_PTR_TO_JSON(SuspEventMachineNames, suspEventMachineNames_);
      DARABONBA_PTR_TO_JSON(SuspEventUuids, suspEventUuids_);
      DARABONBA_PTR_TO_JSON(WeaknessMachineNames, weaknessMachineNames_);
      DARABONBA_PTR_TO_JSON(WeaknessUuids, weaknessUuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenHostStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SafeCount, safeCount_);
      DARABONBA_PTR_FROM_JSON(SuspEventMachineNames, suspEventMachineNames_);
      DARABONBA_PTR_FROM_JSON(SuspEventUuids, suspEventUuids_);
      DARABONBA_PTR_FROM_JSON(WeaknessMachineNames, weaknessMachineNames_);
      DARABONBA_PTR_FROM_JSON(WeaknessUuids, weaknessUuids_);
    };
    DescribeScreenHostStatisticsResponseBodyData() = default ;
    DescribeScreenHostStatisticsResponseBodyData(const DescribeScreenHostStatisticsResponseBodyData &) = default ;
    DescribeScreenHostStatisticsResponseBodyData(DescribeScreenHostStatisticsResponseBodyData &&) = default ;
    DescribeScreenHostStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenHostStatisticsResponseBodyData() = default ;
    DescribeScreenHostStatisticsResponseBodyData& operator=(const DescribeScreenHostStatisticsResponseBodyData &) = default ;
    DescribeScreenHostStatisticsResponseBodyData& operator=(DescribeScreenHostStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->safeCount_ == nullptr
        && return this->suspEventMachineNames_ == nullptr && return this->suspEventUuids_ == nullptr && return this->weaknessMachineNames_ == nullptr && return this->weaknessUuids_ == nullptr; };
    // safeCount Field Functions 
    bool hasSafeCount() const { return this->safeCount_ != nullptr;};
    void deleteSafeCount() { this->safeCount_ = nullptr;};
    inline const vector<string> & safeCount() const { DARABONBA_PTR_GET_CONST(safeCount_, vector<string>) };
    inline vector<string> safeCount() { DARABONBA_PTR_GET(safeCount_, vector<string>) };
    inline DescribeScreenHostStatisticsResponseBodyData& setSafeCount(const vector<string> & safeCount) { DARABONBA_PTR_SET_VALUE(safeCount_, safeCount) };
    inline DescribeScreenHostStatisticsResponseBodyData& setSafeCount(vector<string> && safeCount) { DARABONBA_PTR_SET_RVALUE(safeCount_, safeCount) };


    // suspEventMachineNames Field Functions 
    bool hasSuspEventMachineNames() const { return this->suspEventMachineNames_ != nullptr;};
    void deleteSuspEventMachineNames() { this->suspEventMachineNames_ = nullptr;};
    inline const vector<string> & suspEventMachineNames() const { DARABONBA_PTR_GET_CONST(suspEventMachineNames_, vector<string>) };
    inline vector<string> suspEventMachineNames() { DARABONBA_PTR_GET(suspEventMachineNames_, vector<string>) };
    inline DescribeScreenHostStatisticsResponseBodyData& setSuspEventMachineNames(const vector<string> & suspEventMachineNames) { DARABONBA_PTR_SET_VALUE(suspEventMachineNames_, suspEventMachineNames) };
    inline DescribeScreenHostStatisticsResponseBodyData& setSuspEventMachineNames(vector<string> && suspEventMachineNames) { DARABONBA_PTR_SET_RVALUE(suspEventMachineNames_, suspEventMachineNames) };


    // suspEventUuids Field Functions 
    bool hasSuspEventUuids() const { return this->suspEventUuids_ != nullptr;};
    void deleteSuspEventUuids() { this->suspEventUuids_ = nullptr;};
    inline const vector<string> & suspEventUuids() const { DARABONBA_PTR_GET_CONST(suspEventUuids_, vector<string>) };
    inline vector<string> suspEventUuids() { DARABONBA_PTR_GET(suspEventUuids_, vector<string>) };
    inline DescribeScreenHostStatisticsResponseBodyData& setSuspEventUuids(const vector<string> & suspEventUuids) { DARABONBA_PTR_SET_VALUE(suspEventUuids_, suspEventUuids) };
    inline DescribeScreenHostStatisticsResponseBodyData& setSuspEventUuids(vector<string> && suspEventUuids) { DARABONBA_PTR_SET_RVALUE(suspEventUuids_, suspEventUuids) };


    // weaknessMachineNames Field Functions 
    bool hasWeaknessMachineNames() const { return this->weaknessMachineNames_ != nullptr;};
    void deleteWeaknessMachineNames() { this->weaknessMachineNames_ = nullptr;};
    inline const vector<string> & weaknessMachineNames() const { DARABONBA_PTR_GET_CONST(weaknessMachineNames_, vector<string>) };
    inline vector<string> weaknessMachineNames() { DARABONBA_PTR_GET(weaknessMachineNames_, vector<string>) };
    inline DescribeScreenHostStatisticsResponseBodyData& setWeaknessMachineNames(const vector<string> & weaknessMachineNames) { DARABONBA_PTR_SET_VALUE(weaknessMachineNames_, weaknessMachineNames) };
    inline DescribeScreenHostStatisticsResponseBodyData& setWeaknessMachineNames(vector<string> && weaknessMachineNames) { DARABONBA_PTR_SET_RVALUE(weaknessMachineNames_, weaknessMachineNames) };


    // weaknessUuids Field Functions 
    bool hasWeaknessUuids() const { return this->weaknessUuids_ != nullptr;};
    void deleteWeaknessUuids() { this->weaknessUuids_ = nullptr;};
    inline const vector<string> & weaknessUuids() const { DARABONBA_PTR_GET_CONST(weaknessUuids_, vector<string>) };
    inline vector<string> weaknessUuids() { DARABONBA_PTR_GET(weaknessUuids_, vector<string>) };
    inline DescribeScreenHostStatisticsResponseBodyData& setWeaknessUuids(const vector<string> & weaknessUuids) { DARABONBA_PTR_SET_VALUE(weaknessUuids_, weaknessUuids) };
    inline DescribeScreenHostStatisticsResponseBodyData& setWeaknessUuids(vector<string> && weaknessUuids) { DARABONBA_PTR_SET_RVALUE(weaknessUuids_, weaknessUuids) };


  protected:
    std::shared_ptr<vector<string>> safeCount_ = nullptr;
    std::shared_ptr<vector<string>> suspEventMachineNames_ = nullptr;
    std::shared_ptr<vector<string>> suspEventUuids_ = nullptr;
    std::shared_ptr<vector<string>> weaknessMachineNames_ = nullptr;
    std::shared_ptr<vector<string>> weaknessUuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
