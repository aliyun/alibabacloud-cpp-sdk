// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKITEMWARNINGSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterCheckItemWarningStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckItemWarningStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckItemWarningStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
    };
    GetClusterCheckItemWarningStatisticsResponseBodyData() = default ;
    GetClusterCheckItemWarningStatisticsResponseBodyData(const GetClusterCheckItemWarningStatisticsResponseBodyData &) = default ;
    GetClusterCheckItemWarningStatisticsResponseBodyData(GetClusterCheckItemWarningStatisticsResponseBodyData &&) = default ;
    GetClusterCheckItemWarningStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckItemWarningStatisticsResponseBodyData() = default ;
    GetClusterCheckItemWarningStatisticsResponseBodyData& operator=(const GetClusterCheckItemWarningStatisticsResponseBodyData &) = default ;
    GetClusterCheckItemWarningStatisticsResponseBodyData& operator=(GetClusterCheckItemWarningStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highWarningCount_ == nullptr
        && return this->lowWarningCount_ == nullptr && return this->mediumWarningCount_ == nullptr; };
    // highWarningCount Field Functions 
    bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
    void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
    inline int32_t highWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
    inline GetClusterCheckItemWarningStatisticsResponseBodyData& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


    // lowWarningCount Field Functions 
    bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
    void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
    inline int32_t lowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
    inline GetClusterCheckItemWarningStatisticsResponseBodyData& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


    // mediumWarningCount Field Functions 
    bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
    void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
    inline int32_t mediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
    inline GetClusterCheckItemWarningStatisticsResponseBodyData& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


  protected:
    // The number of high-risk items.
    std::shared_ptr<int32_t> highWarningCount_ = nullptr;
    // The number of low-risk items.
    std::shared_ptr<int32_t> lowWarningCount_ = nullptr;
    // The number of medium-risk items.
    std::shared_ptr<int32_t> mediumWarningCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
