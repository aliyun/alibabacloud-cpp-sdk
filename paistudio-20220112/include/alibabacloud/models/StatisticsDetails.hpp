// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATISTICSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_STATISTICSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class StatisticsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatisticsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IdleNum, idleNum_);
    };
    friend void from_json(const Darabonba::Json& j, StatisticsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IdleNum, idleNum_);
    };
    StatisticsDetails() = default ;
    StatisticsDetails(const StatisticsDetails &) = default ;
    StatisticsDetails(StatisticsDetails &&) = default ;
    StatisticsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatisticsDetails() = default ;
    StatisticsDetails& operator=(const StatisticsDetails &) = default ;
    StatisticsDetails& operator=(StatisticsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->idleNum_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline StatisticsDetails& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // idleNum Field Functions 
    bool hasIdleNum() const { return this->idleNum_ != nullptr;};
    void deleteIdleNum() { this->idleNum_ = nullptr;};
    inline int64_t getIdleNum() const { DARABONBA_PTR_GET_DEFAULT(idleNum_, 0L) };
    inline StatisticsDetails& setIdleNum(int64_t idleNum) { DARABONBA_PTR_SET_VALUE(idleNum_, idleNum) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<int64_t> idleNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
