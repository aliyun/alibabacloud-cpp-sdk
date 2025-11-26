// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHIVEDATABASESRESPONSEBODYDATAANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHIVEDATABASESRESPONSEBODYDATAANALYSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHiveDatabasesResponseBodyDataAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHiveDatabasesResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(HiveDistributionScore, hiveDistributionScore_);
      DARABONBA_PTR_TO_JSON(HiveFormatScore, hiveFormatScore_);
      DARABONBA_PTR_TO_JSON(HiveFrequencyScore, hiveFrequencyScore_);
      DARABONBA_PTR_TO_JSON(HiveScore, hiveScore_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHiveDatabasesResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveDistributionScore, hiveDistributionScore_);
      DARABONBA_PTR_FROM_JSON(HiveFormatScore, hiveFormatScore_);
      DARABONBA_PTR_FROM_JSON(HiveFrequencyScore, hiveFrequencyScore_);
      DARABONBA_PTR_FROM_JSON(HiveScore, hiveScore_);
    };
    ListDoctorHiveDatabasesResponseBodyDataAnalysis() = default ;
    ListDoctorHiveDatabasesResponseBodyDataAnalysis(const ListDoctorHiveDatabasesResponseBodyDataAnalysis &) = default ;
    ListDoctorHiveDatabasesResponseBodyDataAnalysis(ListDoctorHiveDatabasesResponseBodyDataAnalysis &&) = default ;
    ListDoctorHiveDatabasesResponseBodyDataAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHiveDatabasesResponseBodyDataAnalysis() = default ;
    ListDoctorHiveDatabasesResponseBodyDataAnalysis& operator=(const ListDoctorHiveDatabasesResponseBodyDataAnalysis &) = default ;
    ListDoctorHiveDatabasesResponseBodyDataAnalysis& operator=(ListDoctorHiveDatabasesResponseBodyDataAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hiveDistributionScore_ == nullptr
        && return this->hiveFormatScore_ == nullptr && return this->hiveFrequencyScore_ == nullptr && return this->hiveScore_ == nullptr; };
    // hiveDistributionScore Field Functions 
    bool hasHiveDistributionScore() const { return this->hiveDistributionScore_ != nullptr;};
    void deleteHiveDistributionScore() { this->hiveDistributionScore_ = nullptr;};
    inline int32_t hiveDistributionScore() const { DARABONBA_PTR_GET_DEFAULT(hiveDistributionScore_, 0) };
    inline ListDoctorHiveDatabasesResponseBodyDataAnalysis& setHiveDistributionScore(int32_t hiveDistributionScore) { DARABONBA_PTR_SET_VALUE(hiveDistributionScore_, hiveDistributionScore) };


    // hiveFormatScore Field Functions 
    bool hasHiveFormatScore() const { return this->hiveFormatScore_ != nullptr;};
    void deleteHiveFormatScore() { this->hiveFormatScore_ = nullptr;};
    inline int32_t hiveFormatScore() const { DARABONBA_PTR_GET_DEFAULT(hiveFormatScore_, 0) };
    inline ListDoctorHiveDatabasesResponseBodyDataAnalysis& setHiveFormatScore(int32_t hiveFormatScore) { DARABONBA_PTR_SET_VALUE(hiveFormatScore_, hiveFormatScore) };


    // hiveFrequencyScore Field Functions 
    bool hasHiveFrequencyScore() const { return this->hiveFrequencyScore_ != nullptr;};
    void deleteHiveFrequencyScore() { this->hiveFrequencyScore_ = nullptr;};
    inline int32_t hiveFrequencyScore() const { DARABONBA_PTR_GET_DEFAULT(hiveFrequencyScore_, 0) };
    inline ListDoctorHiveDatabasesResponseBodyDataAnalysis& setHiveFrequencyScore(int32_t hiveFrequencyScore) { DARABONBA_PTR_SET_VALUE(hiveFrequencyScore_, hiveFrequencyScore) };


    // hiveScore Field Functions 
    bool hasHiveScore() const { return this->hiveScore_ != nullptr;};
    void deleteHiveScore() { this->hiveScore_ = nullptr;};
    inline int32_t hiveScore() const { DARABONBA_PTR_GET_DEFAULT(hiveScore_, 0) };
    inline ListDoctorHiveDatabasesResponseBodyDataAnalysis& setHiveScore(int32_t hiveScore) { DARABONBA_PTR_SET_VALUE(hiveScore_, hiveScore) };


  protected:
    // The score for the distribution of files of different sizes stored in the Hive database.
    std::shared_ptr<int32_t> hiveDistributionScore_ = nullptr;
    // The score for the distribution of files stored in different formats in the Hive database.
    std::shared_ptr<int32_t> hiveFormatScore_ = nullptr;
    // The score for the access frequency of the Hive database.
    std::shared_ptr<int32_t> hiveFrequencyScore_ = nullptr;
    // The overall score of the Hive database.
    std::shared_ptr<int32_t> hiveScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
