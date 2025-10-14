// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSLISTRESPONSEBODYDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSLISTRESPONSEBODYDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSBpsListResponseBodyDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSBpsListResponseBodyDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(AttackBps, attackBps_);
      DARABONBA_PTR_TO_JSON(AttackPps, attackPps_);
      DARABONBA_PTR_TO_JSON(NormalBps, normalBps_);
      DARABONBA_PTR_TO_JSON(NormalPps, normalPps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
      DARABONBA_PTR_TO_JSON(TotalPps, totalPps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSBpsListResponseBodyDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackBps, attackBps_);
      DARABONBA_PTR_FROM_JSON(AttackPps, attackPps_);
      DARABONBA_PTR_FROM_JSON(NormalBps, normalBps_);
      DARABONBA_PTR_FROM_JSON(NormalPps, normalPps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
      DARABONBA_PTR_FROM_JSON(TotalPps, totalPps_);
    };
    DescribeDDoSBpsListResponseBodyDataModule() = default ;
    DescribeDDoSBpsListResponseBodyDataModule(const DescribeDDoSBpsListResponseBodyDataModule &) = default ;
    DescribeDDoSBpsListResponseBodyDataModule(DescribeDDoSBpsListResponseBodyDataModule &&) = default ;
    DescribeDDoSBpsListResponseBodyDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSBpsListResponseBodyDataModule() = default ;
    DescribeDDoSBpsListResponseBodyDataModule& operator=(const DescribeDDoSBpsListResponseBodyDataModule &) = default ;
    DescribeDDoSBpsListResponseBodyDataModule& operator=(DescribeDDoSBpsListResponseBodyDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackBps_ == nullptr
        && return this->attackPps_ == nullptr && return this->normalBps_ == nullptr && return this->normalPps_ == nullptr && return this->timeStamp_ == nullptr && return this->totalBps_ == nullptr
        && return this->totalPps_ == nullptr; };
    // attackBps Field Functions 
    bool hasAttackBps() const { return this->attackBps_ != nullptr;};
    void deleteAttackBps() { this->attackBps_ = nullptr;};
    inline int64_t attackBps() const { DARABONBA_PTR_GET_DEFAULT(attackBps_, 0L) };
    inline DescribeDDoSBpsListResponseBodyDataModule& setAttackBps(int64_t attackBps) { DARABONBA_PTR_SET_VALUE(attackBps_, attackBps) };


    // attackPps Field Functions 
    bool hasAttackPps() const { return this->attackPps_ != nullptr;};
    void deleteAttackPps() { this->attackPps_ = nullptr;};
    inline int64_t attackPps() const { DARABONBA_PTR_GET_DEFAULT(attackPps_, 0L) };
    inline DescribeDDoSBpsListResponseBodyDataModule& setAttackPps(int64_t attackPps) { DARABONBA_PTR_SET_VALUE(attackPps_, attackPps) };


    // normalBps Field Functions 
    bool hasNormalBps() const { return this->normalBps_ != nullptr;};
    void deleteNormalBps() { this->normalBps_ = nullptr;};
    inline int64_t normalBps() const { DARABONBA_PTR_GET_DEFAULT(normalBps_, 0L) };
    inline DescribeDDoSBpsListResponseBodyDataModule& setNormalBps(int64_t normalBps) { DARABONBA_PTR_SET_VALUE(normalBps_, normalBps) };


    // normalPps Field Functions 
    bool hasNormalPps() const { return this->normalPps_ != nullptr;};
    void deleteNormalPps() { this->normalPps_ = nullptr;};
    inline int64_t normalPps() const { DARABONBA_PTR_GET_DEFAULT(normalPps_, 0L) };
    inline DescribeDDoSBpsListResponseBodyDataModule& setNormalPps(int64_t normalPps) { DARABONBA_PTR_SET_VALUE(normalPps_, normalPps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDDoSBpsListResponseBodyDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // totalBps Field Functions 
    bool hasTotalBps() const { return this->totalBps_ != nullptr;};
    void deleteTotalBps() { this->totalBps_ = nullptr;};
    inline int64_t totalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
    inline DescribeDDoSBpsListResponseBodyDataModule& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


    // totalPps Field Functions 
    bool hasTotalPps() const { return this->totalPps_ != nullptr;};
    void deleteTotalPps() { this->totalPps_ = nullptr;};
    inline int64_t totalPps() const { DARABONBA_PTR_GET_DEFAULT(totalPps_, 0L) };
    inline DescribeDDoSBpsListResponseBodyDataModule& setTotalPps(int64_t totalPps) { DARABONBA_PTR_SET_VALUE(totalPps_, totalPps) };


  protected:
    // Attack bandwidth, in bps.
    std::shared_ptr<int64_t> attackBps_ = nullptr;
    // Attack PPS.
    std::shared_ptr<int64_t> attackPps_ = nullptr;
    // Normal business bandwidth, in bps.
    std::shared_ptr<int64_t> normalBps_ = nullptr;
    // Normal business PPS.
    std::shared_ptr<int64_t> normalPps_ = nullptr;
    // The timestamp of this data, in ISO8601 format, using UTC+0, formatted as: yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // Total bandwidth, in bps.
    std::shared_ptr<int64_t> totalBps_ = nullptr;
    // Total PPS.
    std::shared_ptr<int64_t> totalPps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
