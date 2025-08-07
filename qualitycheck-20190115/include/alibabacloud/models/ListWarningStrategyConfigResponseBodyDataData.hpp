// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGSTRATEGYCONFIGRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGSTRATEGYCONFIGRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningStrategyConfigResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningStrategyConfigResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaxNumber, maxNumber_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningStrategyConfigResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaxNumber, maxNumber_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListWarningStrategyConfigResponseBodyDataData() = default ;
    ListWarningStrategyConfigResponseBodyDataData(const ListWarningStrategyConfigResponseBodyDataData &) = default ;
    ListWarningStrategyConfigResponseBodyDataData(ListWarningStrategyConfigResponseBodyDataData &&) = default ;
    ListWarningStrategyConfigResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningStrategyConfigResponseBodyDataData() = default ;
    ListWarningStrategyConfigResponseBodyDataData& operator=(const ListWarningStrategyConfigResponseBodyDataData &) = default ;
    ListWarningStrategyConfigResponseBodyDataData& operator=(ListWarningStrategyConfigResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->intervalTime_ != nullptr && this->lambda_ != nullptr && this->level_ != nullptr && this->maxNumber_ != nullptr && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWarningStrategyConfigResponseBodyDataData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // intervalTime Field Functions 
    bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
    void deleteIntervalTime() { this->intervalTime_ = nullptr;};
    inline int64_t intervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
    inline ListWarningStrategyConfigResponseBodyDataData& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline ListWarningStrategyConfigResponseBodyDataData& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline ListWarningStrategyConfigResponseBodyDataData& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maxNumber Field Functions 
    bool hasMaxNumber() const { return this->maxNumber_ != nullptr;};
    void deleteMaxNumber() { this->maxNumber_ = nullptr;};
    inline int64_t maxNumber() const { DARABONBA_PTR_GET_DEFAULT(maxNumber_, 0L) };
    inline ListWarningStrategyConfigResponseBodyDataData& setMaxNumber(int64_t maxNumber) { DARABONBA_PTR_SET_VALUE(maxNumber_, maxNumber) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWarningStrategyConfigResponseBodyDataData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> intervalTime_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<int64_t> maxNumber_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
