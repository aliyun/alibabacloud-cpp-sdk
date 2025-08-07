// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWarningStrategyConfigResponseBodyDataWarningStrategyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetWarningStrategyConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarningStrategyConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaxNumber, maxNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WarningStrategyList, warningStrategyList_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarningStrategyConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaxNumber, maxNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WarningStrategyList, warningStrategyList_);
    };
    GetWarningStrategyConfigResponseBodyData() = default ;
    GetWarningStrategyConfigResponseBodyData(const GetWarningStrategyConfigResponseBodyData &) = default ;
    GetWarningStrategyConfigResponseBodyData(GetWarningStrategyConfigResponseBodyData &&) = default ;
    GetWarningStrategyConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarningStrategyConfigResponseBodyData() = default ;
    GetWarningStrategyConfigResponseBodyData& operator=(const GetWarningStrategyConfigResponseBodyData &) = default ;
    GetWarningStrategyConfigResponseBodyData& operator=(GetWarningStrategyConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->intervalTime_ != nullptr && this->lambda_ != nullptr && this->level_ != nullptr && this->maxNumber_ != nullptr && this->name_ != nullptr
        && this->warningStrategyList_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWarningStrategyConfigResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline int64_t intervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
    inline GetWarningStrategyConfigResponseBodyData& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline GetWarningStrategyConfigResponseBodyData& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline GetWarningStrategyConfigResponseBodyData& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maxNumber Field Functions 
    bool hasMaxNumber() const { return this->maxNumber_ != nullptr;};
    void deleteMaxNumber() { this->maxNumber_ = nullptr;};
    inline int64_t maxNumber() const { DARABONBA_PTR_GET_DEFAULT(maxNumber_, 0L) };
    inline GetWarningStrategyConfigResponseBodyData& setMaxNumber(int64_t maxNumber) { DARABONBA_PTR_SET_VALUE(maxNumber_, maxNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWarningStrategyConfigResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // warningStrategyList Field Functions 
    bool hasWarningStrategyList() const { return this->warningStrategyList_ != nullptr;};
    void deleteWarningStrategyList() { this->warningStrategyList_ = nullptr;};
    inline const Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList & warningStrategyList() const { DARABONBA_PTR_GET_CONST(warningStrategyList_, Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList) };
    inline Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList warningStrategyList() { DARABONBA_PTR_GET(warningStrategyList_, Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList) };
    inline GetWarningStrategyConfigResponseBodyData& setWarningStrategyList(const Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList & warningStrategyList) { DARABONBA_PTR_SET_VALUE(warningStrategyList_, warningStrategyList) };
    inline GetWarningStrategyConfigResponseBodyData& setWarningStrategyList(Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList && warningStrategyList) { DARABONBA_PTR_SET_RVALUE(warningStrategyList_, warningStrategyList) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> intervalTime_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<int64_t> maxNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetWarningStrategyConfigResponseBodyDataWarningStrategyList> warningStrategyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
