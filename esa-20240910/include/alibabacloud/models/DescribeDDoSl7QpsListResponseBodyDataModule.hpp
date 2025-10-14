// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSL7QPSLISTRESPONSEBODYDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSL7QPSLISTRESPONSEBODYDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSL7QpsListResponseBodyDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSL7QpsListResponseBodyDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Attack, attack_);
      DARABONBA_PTR_TO_JSON(Normal, normal_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSL7QpsListResponseBodyDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Attack, attack_);
      DARABONBA_PTR_FROM_JSON(Normal, normal_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDDoSL7QpsListResponseBodyDataModule() = default ;
    DescribeDDoSL7QpsListResponseBodyDataModule(const DescribeDDoSL7QpsListResponseBodyDataModule &) = default ;
    DescribeDDoSL7QpsListResponseBodyDataModule(DescribeDDoSL7QpsListResponseBodyDataModule &&) = default ;
    DescribeDDoSL7QpsListResponseBodyDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSL7QpsListResponseBodyDataModule() = default ;
    DescribeDDoSL7QpsListResponseBodyDataModule& operator=(const DescribeDDoSL7QpsListResponseBodyDataModule &) = default ;
    DescribeDDoSL7QpsListResponseBodyDataModule& operator=(DescribeDDoSL7QpsListResponseBodyDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attack_ == nullptr
        && return this->normal_ == nullptr && return this->timeStamp_ == nullptr && return this->total_ == nullptr; };
    // attack Field Functions 
    bool hasAttack() const { return this->attack_ != nullptr;};
    void deleteAttack() { this->attack_ = nullptr;};
    inline int64_t attack() const { DARABONBA_PTR_GET_DEFAULT(attack_, 0L) };
    inline DescribeDDoSL7QpsListResponseBodyDataModule& setAttack(int64_t attack) { DARABONBA_PTR_SET_VALUE(attack_, attack) };


    // normal Field Functions 
    bool hasNormal() const { return this->normal_ != nullptr;};
    void deleteNormal() { this->normal_ = nullptr;};
    inline int64_t normal() const { DARABONBA_PTR_GET_DEFAULT(normal_, 0L) };
    inline DescribeDDoSL7QpsListResponseBodyDataModule& setNormal(int64_t normal) { DARABONBA_PTR_SET_VALUE(normal_, normal) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDDoSL7QpsListResponseBodyDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDDoSL7QpsListResponseBodyDataModule& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Attack QPS.
    std::shared_ptr<int64_t> attack_ = nullptr;
    // Normal QPS.
    std::shared_ptr<int64_t> normal_ = nullptr;
    // Data time, following ISO8601 notation and using UTC+0, formatted as yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // Total QPS.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
