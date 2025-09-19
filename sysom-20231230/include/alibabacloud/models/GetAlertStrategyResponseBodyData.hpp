// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTSTRATEGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALERTSTRATEGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertStrategyResponseBodyDataStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAlertStrategyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    GetAlertStrategyResponseBodyData() = default ;
    GetAlertStrategyResponseBodyData(const GetAlertStrategyResponseBodyData &) = default ;
    GetAlertStrategyResponseBodyData(GetAlertStrategyResponseBodyData &&) = default ;
    GetAlertStrategyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertStrategyResponseBodyData() = default ;
    GetAlertStrategyResponseBodyData& operator=(const GetAlertStrategyResponseBodyData &) = default ;
    GetAlertStrategyResponseBodyData& operator=(GetAlertStrategyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->enabled_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->strategy_ != nullptr && this->uid_ != nullptr
        && this->updatedAt_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline GetAlertStrategyResponseBodyData& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetAlertStrategyResponseBodyData& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlertStrategyResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAlertStrategyResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::GetAlertStrategyResponseBodyDataStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::GetAlertStrategyResponseBodyDataStrategy) };
    inline Models::GetAlertStrategyResponseBodyDataStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::GetAlertStrategyResponseBodyDataStrategy) };
    inline GetAlertStrategyResponseBodyData& setStrategy(const Models::GetAlertStrategyResponseBodyDataStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline GetAlertStrategyResponseBodyData& setStrategy(Models::GetAlertStrategyResponseBodyDataStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetAlertStrategyResponseBodyData& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline GetAlertStrategyResponseBodyData& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetAlertStrategyResponseBodyDataStrategy> strategy_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
