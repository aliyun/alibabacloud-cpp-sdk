// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKRESPONSEBODYDATACHECKRESULT_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKRESPONSEBODYDATACHECKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class PreCheckSqlFlashbackTaskResponseBodyDataCheckResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& obj) { 
      DARABONBA_PTR_TO_JSON(BinlogExists, binlogExists_);
      DARABONBA_PTR_TO_JSON(BinlogRowQueryEventEnabled, binlogRowQueryEventEnabled_);
      DARABONBA_PTR_TO_JSON(CanUpgradeSupportBinlogRowQueryEvents, canUpgradeSupportBinlogRowQueryEvents_);
      DARABONBA_PTR_TO_JSON(HasTable, hasTable_);
      DARABONBA_PTR_TO_JSON(SupportBinlogRowQueryEvents, supportBinlogRowQueryEvents_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BinlogExists, binlogExists_);
      DARABONBA_PTR_FROM_JSON(BinlogRowQueryEventEnabled, binlogRowQueryEventEnabled_);
      DARABONBA_PTR_FROM_JSON(CanUpgradeSupportBinlogRowQueryEvents, canUpgradeSupportBinlogRowQueryEvents_);
      DARABONBA_PTR_FROM_JSON(HasTable, hasTable_);
      DARABONBA_PTR_FROM_JSON(SupportBinlogRowQueryEvents, supportBinlogRowQueryEvents_);
    };
    PreCheckSqlFlashbackTaskResponseBodyDataCheckResult() = default ;
    PreCheckSqlFlashbackTaskResponseBodyDataCheckResult(const PreCheckSqlFlashbackTaskResponseBodyDataCheckResult &) = default ;
    PreCheckSqlFlashbackTaskResponseBodyDataCheckResult(PreCheckSqlFlashbackTaskResponseBodyDataCheckResult &&) = default ;
    PreCheckSqlFlashbackTaskResponseBodyDataCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckSqlFlashbackTaskResponseBodyDataCheckResult() = default ;
    PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& operator=(const PreCheckSqlFlashbackTaskResponseBodyDataCheckResult &) = default ;
    PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& operator=(PreCheckSqlFlashbackTaskResponseBodyDataCheckResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->binlogExists_ == nullptr
        && return this->binlogRowQueryEventEnabled_ == nullptr && return this->canUpgradeSupportBinlogRowQueryEvents_ == nullptr && return this->hasTable_ == nullptr && return this->supportBinlogRowQueryEvents_ == nullptr; };
    // binlogExists Field Functions 
    bool hasBinlogExists() const { return this->binlogExists_ != nullptr;};
    void deleteBinlogExists() { this->binlogExists_ = nullptr;};
    inline bool binlogExists() const { DARABONBA_PTR_GET_DEFAULT(binlogExists_, false) };
    inline PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& setBinlogExists(bool binlogExists) { DARABONBA_PTR_SET_VALUE(binlogExists_, binlogExists) };


    // binlogRowQueryEventEnabled Field Functions 
    bool hasBinlogRowQueryEventEnabled() const { return this->binlogRowQueryEventEnabled_ != nullptr;};
    void deleteBinlogRowQueryEventEnabled() { this->binlogRowQueryEventEnabled_ = nullptr;};
    inline bool binlogRowQueryEventEnabled() const { DARABONBA_PTR_GET_DEFAULT(binlogRowQueryEventEnabled_, false) };
    inline PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& setBinlogRowQueryEventEnabled(bool binlogRowQueryEventEnabled) { DARABONBA_PTR_SET_VALUE(binlogRowQueryEventEnabled_, binlogRowQueryEventEnabled) };


    // canUpgradeSupportBinlogRowQueryEvents Field Functions 
    bool hasCanUpgradeSupportBinlogRowQueryEvents() const { return this->canUpgradeSupportBinlogRowQueryEvents_ != nullptr;};
    void deleteCanUpgradeSupportBinlogRowQueryEvents() { this->canUpgradeSupportBinlogRowQueryEvents_ = nullptr;};
    inline bool canUpgradeSupportBinlogRowQueryEvents() const { DARABONBA_PTR_GET_DEFAULT(canUpgradeSupportBinlogRowQueryEvents_, false) };
    inline PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& setCanUpgradeSupportBinlogRowQueryEvents(bool canUpgradeSupportBinlogRowQueryEvents) { DARABONBA_PTR_SET_VALUE(canUpgradeSupportBinlogRowQueryEvents_, canUpgradeSupportBinlogRowQueryEvents) };


    // hasTable Field Functions 
    bool hasHasTable() const { return this->hasTable_ != nullptr;};
    void deleteHasTable() { this->hasTable_ = nullptr;};
    inline bool hasTable() const { DARABONBA_PTR_GET_DEFAULT(hasTable_, false) };
    inline PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& setHasTable(bool hasTable) { DARABONBA_PTR_SET_VALUE(hasTable_, hasTable) };


    // supportBinlogRowQueryEvents Field Functions 
    bool hasSupportBinlogRowQueryEvents() const { return this->supportBinlogRowQueryEvents_ != nullptr;};
    void deleteSupportBinlogRowQueryEvents() { this->supportBinlogRowQueryEvents_ = nullptr;};
    inline bool supportBinlogRowQueryEvents() const { DARABONBA_PTR_GET_DEFAULT(supportBinlogRowQueryEvents_, false) };
    inline PreCheckSqlFlashbackTaskResponseBodyDataCheckResult& setSupportBinlogRowQueryEvents(bool supportBinlogRowQueryEvents) { DARABONBA_PTR_SET_VALUE(supportBinlogRowQueryEvents_, supportBinlogRowQueryEvents) };


  protected:
    std::shared_ptr<bool> binlogExists_ = nullptr;
    std::shared_ptr<bool> binlogRowQueryEventEnabled_ = nullptr;
    std::shared_ptr<bool> canUpgradeSupportBinlogRowQueryEvents_ = nullptr;
    std::shared_ptr<bool> hasTable_ = nullptr;
    std::shared_ptr<bool> supportBinlogRowQueryEvents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
