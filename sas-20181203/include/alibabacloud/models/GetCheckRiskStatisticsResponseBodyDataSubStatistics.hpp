// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODYDATASUBSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODYDATASUBSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckRiskStatisticsResponseBodyDataSubStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRiskStatisticsResponseBodyDataSubStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
      DARABONBA_PTR_TO_JSON(PassCount, passCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRiskStatisticsResponseBodyDataSubStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
      DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    GetCheckRiskStatisticsResponseBodyDataSubStatistics() = default ;
    GetCheckRiskStatisticsResponseBodyDataSubStatistics(const GetCheckRiskStatisticsResponseBodyDataSubStatistics &) = default ;
    GetCheckRiskStatisticsResponseBodyDataSubStatistics(GetCheckRiskStatisticsResponseBodyDataSubStatistics &&) = default ;
    GetCheckRiskStatisticsResponseBodyDataSubStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRiskStatisticsResponseBodyDataSubStatistics() = default ;
    GetCheckRiskStatisticsResponseBodyDataSubStatistics& operator=(const GetCheckRiskStatisticsResponseBodyDataSubStatistics &) = default ;
    GetCheckRiskStatisticsResponseBodyDataSubStatistics& operator=(GetCheckRiskStatisticsResponseBodyDataSubStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->highWarningCount_ != nullptr && this->lowWarningCount_ != nullptr && this->mediumWarningCount_ != nullptr && this->passCount_ != nullptr && this->totalCount_ != nullptr
        && this->typeName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // highWarningCount Field Functions 
    bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
    void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
    inline int32_t highWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


    // lowWarningCount Field Functions 
    bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
    void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
    inline int32_t lowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


    // mediumWarningCount Field Functions 
    bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
    void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
    inline int32_t mediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


    // passCount Field Functions 
    bool hasPassCount() const { return this->passCount_ != nullptr;};
    void deletePassCount() { this->passCount_ = nullptr;};
    inline int32_t passCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetCheckRiskStatisticsResponseBodyDataSubStatistics& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    // The name of the baseline type.
    std::shared_ptr<string> alias_ = nullptr;
    // The number of high-risk items.
    std::shared_ptr<int32_t> highWarningCount_ = nullptr;
    // The number of low-risk items.
    std::shared_ptr<int32_t> lowWarningCount_ = nullptr;
    // The number of medium-risk items.
    std::shared_ptr<int32_t> mediumWarningCount_ = nullptr;
    // The number of passed check items.
    std::shared_ptr<int32_t> passCount_ = nullptr;
    // The total number of check items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The baseline type.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
