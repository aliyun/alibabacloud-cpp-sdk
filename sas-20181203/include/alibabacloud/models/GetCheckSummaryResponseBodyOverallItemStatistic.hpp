// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYOVERALLITEMSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYOVERALLITEMSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSummaryResponseBodyOverallItemStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryResponseBodyOverallItemStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(ReleaseCount, releaseCount_);
      DARABONBA_PTR_TO_JSON(ResultCount, resultCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryResponseBodyOverallItemStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(ReleaseCount, releaseCount_);
      DARABONBA_PTR_FROM_JSON(ResultCount, resultCount_);
    };
    GetCheckSummaryResponseBodyOverallItemStatistic() = default ;
    GetCheckSummaryResponseBodyOverallItemStatistic(const GetCheckSummaryResponseBodyOverallItemStatistic &) = default ;
    GetCheckSummaryResponseBodyOverallItemStatistic(GetCheckSummaryResponseBodyOverallItemStatistic &&) = default ;
    GetCheckSummaryResponseBodyOverallItemStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryResponseBodyOverallItemStatistic() = default ;
    GetCheckSummaryResponseBodyOverallItemStatistic& operator=(const GetCheckSummaryResponseBodyOverallItemStatistic &) = default ;
    GetCheckSummaryResponseBodyOverallItemStatistic& operator=(GetCheckSummaryResponseBodyOverallItemStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->releaseCount_ != nullptr
        && this->resultCount_ != nullptr; };
    // releaseCount Field Functions 
    bool hasReleaseCount() const { return this->releaseCount_ != nullptr;};
    void deleteReleaseCount() { this->releaseCount_ = nullptr;};
    inline int32_t releaseCount() const { DARABONBA_PTR_GET_DEFAULT(releaseCount_, 0) };
    inline GetCheckSummaryResponseBodyOverallItemStatistic& setReleaseCount(int32_t releaseCount) { DARABONBA_PTR_SET_VALUE(releaseCount_, releaseCount) };


    // resultCount Field Functions 
    bool hasResultCount() const { return this->resultCount_ != nullptr;};
    void deleteResultCount() { this->resultCount_ = nullptr;};
    inline int32_t resultCount() const { DARABONBA_PTR_GET_DEFAULT(resultCount_, 0) };
    inline GetCheckSummaryResponseBodyOverallItemStatistic& setResultCount(int32_t resultCount) { DARABONBA_PTR_SET_VALUE(resultCount_, resultCount) };


  protected:
    // The number of check items supported by the system.
    std::shared_ptr<int32_t> releaseCount_ = nullptr;
    // The number of check items available to you.
    std::shared_ptr<int32_t> resultCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
