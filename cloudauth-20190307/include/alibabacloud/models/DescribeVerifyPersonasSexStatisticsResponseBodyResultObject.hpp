// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASSEXSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASSEXSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasSexStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(Age0To14Cnt, age0To14Cnt_);
      DARABONBA_PTR_TO_JSON(Age0To14Rate, age0To14Rate_);
      DARABONBA_PTR_TO_JSON(Age14To18Cnt, age14To18Cnt_);
      DARABONBA_PTR_TO_JSON(Age14To18Rate, age14To18Rate_);
      DARABONBA_PTR_TO_JSON(Age18To35Cnt, age18To35Cnt_);
      DARABONBA_PTR_TO_JSON(Age18To35Rate, age18To35Rate_);
      DARABONBA_PTR_TO_JSON(Age35To50Cnt, age35To50Cnt_);
      DARABONBA_PTR_TO_JSON(Age35To50Rate, age35To50Rate_);
      DARABONBA_PTR_TO_JSON(Age50To999Cnt, age50To999Cnt_);
      DARABONBA_PTR_TO_JSON(Age50To999Rate, age50To999Rate_);
      DARABONBA_PTR_TO_JSON(AllUserCnt, allUserCnt_);
      DARABONBA_PTR_TO_JSON(FemaleCnt, femaleCnt_);
      DARABONBA_PTR_TO_JSON(FemaleRate, femaleRate_);
      DARABONBA_PTR_TO_JSON(MaleCnt, maleCnt_);
      DARABONBA_PTR_TO_JSON(MaleRate, maleRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Age0To14Cnt, age0To14Cnt_);
      DARABONBA_PTR_FROM_JSON(Age0To14Rate, age0To14Rate_);
      DARABONBA_PTR_FROM_JSON(Age14To18Cnt, age14To18Cnt_);
      DARABONBA_PTR_FROM_JSON(Age14To18Rate, age14To18Rate_);
      DARABONBA_PTR_FROM_JSON(Age18To35Cnt, age18To35Cnt_);
      DARABONBA_PTR_FROM_JSON(Age18To35Rate, age18To35Rate_);
      DARABONBA_PTR_FROM_JSON(Age35To50Cnt, age35To50Cnt_);
      DARABONBA_PTR_FROM_JSON(Age35To50Rate, age35To50Rate_);
      DARABONBA_PTR_FROM_JSON(Age50To999Cnt, age50To999Cnt_);
      DARABONBA_PTR_FROM_JSON(Age50To999Rate, age50To999Rate_);
      DARABONBA_PTR_FROM_JSON(AllUserCnt, allUserCnt_);
      DARABONBA_PTR_FROM_JSON(FemaleCnt, femaleCnt_);
      DARABONBA_PTR_FROM_JSON(FemaleRate, femaleRate_);
      DARABONBA_PTR_FROM_JSON(MaleCnt, maleCnt_);
      DARABONBA_PTR_FROM_JSON(MaleRate, maleRate_);
    };
    DescribeVerifyPersonasSexStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasSexStatisticsResponseBodyResultObject(const DescribeVerifyPersonasSexStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasSexStatisticsResponseBodyResultObject(DescribeVerifyPersonasSexStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyPersonasSexStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasSexStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& operator=(const DescribeVerifyPersonasSexStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& operator=(DescribeVerifyPersonasSexStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->age0To14Cnt_ == nullptr
        && return this->age0To14Rate_ == nullptr && return this->age14To18Cnt_ == nullptr && return this->age14To18Rate_ == nullptr && return this->age18To35Cnt_ == nullptr && return this->age18To35Rate_ == nullptr
        && return this->age35To50Cnt_ == nullptr && return this->age35To50Rate_ == nullptr && return this->age50To999Cnt_ == nullptr && return this->age50To999Rate_ == nullptr && return this->allUserCnt_ == nullptr
        && return this->femaleCnt_ == nullptr && return this->femaleRate_ == nullptr && return this->maleCnt_ == nullptr && return this->maleRate_ == nullptr; };
    // age0To14Cnt Field Functions 
    bool hasAge0To14Cnt() const { return this->age0To14Cnt_ != nullptr;};
    void deleteAge0To14Cnt() { this->age0To14Cnt_ = nullptr;};
    inline int64_t age0To14Cnt() const { DARABONBA_PTR_GET_DEFAULT(age0To14Cnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge0To14Cnt(int64_t age0To14Cnt) { DARABONBA_PTR_SET_VALUE(age0To14Cnt_, age0To14Cnt) };


    // age0To14Rate Field Functions 
    bool hasAge0To14Rate() const { return this->age0To14Rate_ != nullptr;};
    void deleteAge0To14Rate() { this->age0To14Rate_ = nullptr;};
    inline string age0To14Rate() const { DARABONBA_PTR_GET_DEFAULT(age0To14Rate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge0To14Rate(string age0To14Rate) { DARABONBA_PTR_SET_VALUE(age0To14Rate_, age0To14Rate) };


    // age14To18Cnt Field Functions 
    bool hasAge14To18Cnt() const { return this->age14To18Cnt_ != nullptr;};
    void deleteAge14To18Cnt() { this->age14To18Cnt_ = nullptr;};
    inline int64_t age14To18Cnt() const { DARABONBA_PTR_GET_DEFAULT(age14To18Cnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge14To18Cnt(int64_t age14To18Cnt) { DARABONBA_PTR_SET_VALUE(age14To18Cnt_, age14To18Cnt) };


    // age14To18Rate Field Functions 
    bool hasAge14To18Rate() const { return this->age14To18Rate_ != nullptr;};
    void deleteAge14To18Rate() { this->age14To18Rate_ = nullptr;};
    inline string age14To18Rate() const { DARABONBA_PTR_GET_DEFAULT(age14To18Rate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge14To18Rate(string age14To18Rate) { DARABONBA_PTR_SET_VALUE(age14To18Rate_, age14To18Rate) };


    // age18To35Cnt Field Functions 
    bool hasAge18To35Cnt() const { return this->age18To35Cnt_ != nullptr;};
    void deleteAge18To35Cnt() { this->age18To35Cnt_ = nullptr;};
    inline int64_t age18To35Cnt() const { DARABONBA_PTR_GET_DEFAULT(age18To35Cnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge18To35Cnt(int64_t age18To35Cnt) { DARABONBA_PTR_SET_VALUE(age18To35Cnt_, age18To35Cnt) };


    // age18To35Rate Field Functions 
    bool hasAge18To35Rate() const { return this->age18To35Rate_ != nullptr;};
    void deleteAge18To35Rate() { this->age18To35Rate_ = nullptr;};
    inline string age18To35Rate() const { DARABONBA_PTR_GET_DEFAULT(age18To35Rate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge18To35Rate(string age18To35Rate) { DARABONBA_PTR_SET_VALUE(age18To35Rate_, age18To35Rate) };


    // age35To50Cnt Field Functions 
    bool hasAge35To50Cnt() const { return this->age35To50Cnt_ != nullptr;};
    void deleteAge35To50Cnt() { this->age35To50Cnt_ = nullptr;};
    inline int64_t age35To50Cnt() const { DARABONBA_PTR_GET_DEFAULT(age35To50Cnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge35To50Cnt(int64_t age35To50Cnt) { DARABONBA_PTR_SET_VALUE(age35To50Cnt_, age35To50Cnt) };


    // age35To50Rate Field Functions 
    bool hasAge35To50Rate() const { return this->age35To50Rate_ != nullptr;};
    void deleteAge35To50Rate() { this->age35To50Rate_ = nullptr;};
    inline string age35To50Rate() const { DARABONBA_PTR_GET_DEFAULT(age35To50Rate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge35To50Rate(string age35To50Rate) { DARABONBA_PTR_SET_VALUE(age35To50Rate_, age35To50Rate) };


    // age50To999Cnt Field Functions 
    bool hasAge50To999Cnt() const { return this->age50To999Cnt_ != nullptr;};
    void deleteAge50To999Cnt() { this->age50To999Cnt_ = nullptr;};
    inline int64_t age50To999Cnt() const { DARABONBA_PTR_GET_DEFAULT(age50To999Cnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge50To999Cnt(int64_t age50To999Cnt) { DARABONBA_PTR_SET_VALUE(age50To999Cnt_, age50To999Cnt) };


    // age50To999Rate Field Functions 
    bool hasAge50To999Rate() const { return this->age50To999Rate_ != nullptr;};
    void deleteAge50To999Rate() { this->age50To999Rate_ = nullptr;};
    inline string age50To999Rate() const { DARABONBA_PTR_GET_DEFAULT(age50To999Rate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAge50To999Rate(string age50To999Rate) { DARABONBA_PTR_SET_VALUE(age50To999Rate_, age50To999Rate) };


    // allUserCnt Field Functions 
    bool hasAllUserCnt() const { return this->allUserCnt_ != nullptr;};
    void deleteAllUserCnt() { this->allUserCnt_ = nullptr;};
    inline int64_t allUserCnt() const { DARABONBA_PTR_GET_DEFAULT(allUserCnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setAllUserCnt(int64_t allUserCnt) { DARABONBA_PTR_SET_VALUE(allUserCnt_, allUserCnt) };


    // femaleCnt Field Functions 
    bool hasFemaleCnt() const { return this->femaleCnt_ != nullptr;};
    void deleteFemaleCnt() { this->femaleCnt_ = nullptr;};
    inline int64_t femaleCnt() const { DARABONBA_PTR_GET_DEFAULT(femaleCnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setFemaleCnt(int64_t femaleCnt) { DARABONBA_PTR_SET_VALUE(femaleCnt_, femaleCnt) };


    // femaleRate Field Functions 
    bool hasFemaleRate() const { return this->femaleRate_ != nullptr;};
    void deleteFemaleRate() { this->femaleRate_ = nullptr;};
    inline string femaleRate() const { DARABONBA_PTR_GET_DEFAULT(femaleRate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setFemaleRate(string femaleRate) { DARABONBA_PTR_SET_VALUE(femaleRate_, femaleRate) };


    // maleCnt Field Functions 
    bool hasMaleCnt() const { return this->maleCnt_ != nullptr;};
    void deleteMaleCnt() { this->maleCnt_ = nullptr;};
    inline int64_t maleCnt() const { DARABONBA_PTR_GET_DEFAULT(maleCnt_, 0L) };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setMaleCnt(int64_t maleCnt) { DARABONBA_PTR_SET_VALUE(maleCnt_, maleCnt) };


    // maleRate Field Functions 
    bool hasMaleRate() const { return this->maleRate_ != nullptr;};
    void deleteMaleRate() { this->maleRate_ = nullptr;};
    inline string maleRate() const { DARABONBA_PTR_GET_DEFAULT(maleRate_, "") };
    inline DescribeVerifyPersonasSexStatisticsResponseBodyResultObject& setMaleRate(string maleRate) { DARABONBA_PTR_SET_VALUE(maleRate_, maleRate) };


  protected:
    // Number of users under 14 years old.
    std::shared_ptr<int64_t> age0To14Cnt_ = nullptr;
    // Proportion of users under 14 years old.
    std::shared_ptr<string> age0To14Rate_ = nullptr;
    // Number of users between 14 and 18 years old.
    std::shared_ptr<int64_t> age14To18Cnt_ = nullptr;
    // Proportion of users between 14 and 18 years old.
    std::shared_ptr<string> age14To18Rate_ = nullptr;
    // Number of authenticated users between 18 and 35 years old.
    std::shared_ptr<int64_t> age18To35Cnt_ = nullptr;
    // Proportion of authenticated users between 18 and 35 years old.
    std::shared_ptr<string> age18To35Rate_ = nullptr;
    // Number of authenticated users between 35 and 50 years old.
    std::shared_ptr<int64_t> age35To50Cnt_ = nullptr;
    // Proportion of users between 35 and 50 years old.
    std::shared_ptr<string> age35To50Rate_ = nullptr;
    // Number of authenticated users over 50 years old.
    std::shared_ptr<int64_t> age50To999Cnt_ = nullptr;
    // Proportion of authenticated users over 50 years old.
    std::shared_ptr<string> age50To999Rate_ = nullptr;
    // Total number of authenticated users.
    std::shared_ptr<int64_t> allUserCnt_ = nullptr;
    // Number of female users.
    std::shared_ptr<int64_t> femaleCnt_ = nullptr;
    // Proportion of female authenticated users.
    std::shared_ptr<string> femaleRate_ = nullptr;
    // Number of male users.
    std::shared_ptr<int64_t> maleCnt_ = nullptr;
    // Proportion of male users.
    std::shared_ptr<string> maleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
