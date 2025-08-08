// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIPAGERESPONSEBODYRESULTCONTENTLISTMIGRATERULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIPAGERESPONSEBODYRESULTCONTENTLISTMIGRATERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApipageResponseBodyResultContentListMigrateRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApipageResponseBodyResultContentListMigrateRule& obj) { 
      DARABONBA_PTR_TO_JSON(FlowPercent, flowPercent_);
      DARABONBA_PTR_TO_JSON(NeedMigrate, needMigrate_);
      DARABONBA_PTR_TO_JSON(NeedSwitchCompletely, needSwitchCompletely_);
      DARABONBA_PTR_TO_JSON(SysId, sysId_);
      DARABONBA_PTR_TO_JSON(SysName, sysName_);
      DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApipageResponseBodyResultContentListMigrateRule& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowPercent, flowPercent_);
      DARABONBA_PTR_FROM_JSON(NeedMigrate, needMigrate_);
      DARABONBA_PTR_FROM_JSON(NeedSwitchCompletely, needSwitchCompletely_);
      DARABONBA_PTR_FROM_JSON(SysId, sysId_);
      DARABONBA_PTR_FROM_JSON(SysName, sysName_);
      DARABONBA_PTR_FROM_JSON(UpstreamType, upstreamType_);
    };
    QueryMgsApipageResponseBodyResultContentListMigrateRule() = default ;
    QueryMgsApipageResponseBodyResultContentListMigrateRule(const QueryMgsApipageResponseBodyResultContentListMigrateRule &) = default ;
    QueryMgsApipageResponseBodyResultContentListMigrateRule(QueryMgsApipageResponseBodyResultContentListMigrateRule &&) = default ;
    QueryMgsApipageResponseBodyResultContentListMigrateRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApipageResponseBodyResultContentListMigrateRule() = default ;
    QueryMgsApipageResponseBodyResultContentListMigrateRule& operator=(const QueryMgsApipageResponseBodyResultContentListMigrateRule &) = default ;
    QueryMgsApipageResponseBodyResultContentListMigrateRule& operator=(QueryMgsApipageResponseBodyResultContentListMigrateRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowPercent_ != nullptr
        && this->needMigrate_ != nullptr && this->needSwitchCompletely_ != nullptr && this->sysId_ != nullptr && this->sysName_ != nullptr && this->upstreamType_ != nullptr; };
    // flowPercent Field Functions 
    bool hasFlowPercent() const { return this->flowPercent_ != nullptr;};
    void deleteFlowPercent() { this->flowPercent_ = nullptr;};
    inline int64_t flowPercent() const { DARABONBA_PTR_GET_DEFAULT(flowPercent_, 0L) };
    inline QueryMgsApipageResponseBodyResultContentListMigrateRule& setFlowPercent(int64_t flowPercent) { DARABONBA_PTR_SET_VALUE(flowPercent_, flowPercent) };


    // needMigrate Field Functions 
    bool hasNeedMigrate() const { return this->needMigrate_ != nullptr;};
    void deleteNeedMigrate() { this->needMigrate_ = nullptr;};
    inline bool needMigrate() const { DARABONBA_PTR_GET_DEFAULT(needMigrate_, false) };
    inline QueryMgsApipageResponseBodyResultContentListMigrateRule& setNeedMigrate(bool needMigrate) { DARABONBA_PTR_SET_VALUE(needMigrate_, needMigrate) };


    // needSwitchCompletely Field Functions 
    bool hasNeedSwitchCompletely() const { return this->needSwitchCompletely_ != nullptr;};
    void deleteNeedSwitchCompletely() { this->needSwitchCompletely_ = nullptr;};
    inline bool needSwitchCompletely() const { DARABONBA_PTR_GET_DEFAULT(needSwitchCompletely_, false) };
    inline QueryMgsApipageResponseBodyResultContentListMigrateRule& setNeedSwitchCompletely(bool needSwitchCompletely) { DARABONBA_PTR_SET_VALUE(needSwitchCompletely_, needSwitchCompletely) };


    // sysId Field Functions 
    bool hasSysId() const { return this->sysId_ != nullptr;};
    void deleteSysId() { this->sysId_ = nullptr;};
    inline int64_t sysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, 0L) };
    inline QueryMgsApipageResponseBodyResultContentListMigrateRule& setSysId(int64_t sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


    // sysName Field Functions 
    bool hasSysName() const { return this->sysName_ != nullptr;};
    void deleteSysName() { this->sysName_ = nullptr;};
    inline string sysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
    inline QueryMgsApipageResponseBodyResultContentListMigrateRule& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


    // upstreamType Field Functions 
    bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
    void deleteUpstreamType() { this->upstreamType_ = nullptr;};
    inline string upstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
    inline QueryMgsApipageResponseBodyResultContentListMigrateRule& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


  protected:
    std::shared_ptr<int64_t> flowPercent_ = nullptr;
    std::shared_ptr<bool> needMigrate_ = nullptr;
    std::shared_ptr<bool> needSwitchCompletely_ = nullptr;
    std::shared_ptr<int64_t> sysId_ = nullptr;
    std::shared_ptr<string> sysName_ = nullptr;
    std::shared_ptr<string> upstreamType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
