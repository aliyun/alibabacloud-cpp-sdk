// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSRESPONSEBODYSUSPSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSRESPONSEBODYSUSPSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterSuspEventStatisticsResponseBodySuspStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterSuspEventStatisticsResponseBodySuspStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Remind, remind_);
      DARABONBA_PTR_TO_JSON(Serious, serious_);
      DARABONBA_PTR_TO_JSON(Suspicious, suspicious_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterSuspEventStatisticsResponseBodySuspStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Remind, remind_);
      DARABONBA_PTR_FROM_JSON(Serious, serious_);
      DARABONBA_PTR_FROM_JSON(Suspicious, suspicious_);
    };
    GetClusterSuspEventStatisticsResponseBodySuspStatistics() = default ;
    GetClusterSuspEventStatisticsResponseBodySuspStatistics(const GetClusterSuspEventStatisticsResponseBodySuspStatistics &) = default ;
    GetClusterSuspEventStatisticsResponseBodySuspStatistics(GetClusterSuspEventStatisticsResponseBodySuspStatistics &&) = default ;
    GetClusterSuspEventStatisticsResponseBodySuspStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterSuspEventStatisticsResponseBodySuspStatistics() = default ;
    GetClusterSuspEventStatisticsResponseBodySuspStatistics& operator=(const GetClusterSuspEventStatisticsResponseBodySuspStatistics &) = default ;
    GetClusterSuspEventStatisticsResponseBodySuspStatistics& operator=(GetClusterSuspEventStatisticsResponseBodySuspStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remind_ != nullptr
        && this->serious_ != nullptr && this->suspicious_ != nullptr; };
    // remind Field Functions 
    bool hasRemind() const { return this->remind_ != nullptr;};
    void deleteRemind() { this->remind_ = nullptr;};
    inline int32_t remind() const { DARABONBA_PTR_GET_DEFAULT(remind_, 0) };
    inline GetClusterSuspEventStatisticsResponseBodySuspStatistics& setRemind(int32_t remind) { DARABONBA_PTR_SET_VALUE(remind_, remind) };


    // serious Field Functions 
    bool hasSerious() const { return this->serious_ != nullptr;};
    void deleteSerious() { this->serious_ = nullptr;};
    inline int32_t serious() const { DARABONBA_PTR_GET_DEFAULT(serious_, 0) };
    inline GetClusterSuspEventStatisticsResponseBodySuspStatistics& setSerious(int32_t serious) { DARABONBA_PTR_SET_VALUE(serious_, serious) };


    // suspicious Field Functions 
    bool hasSuspicious() const { return this->suspicious_ != nullptr;};
    void deleteSuspicious() { this->suspicious_ = nullptr;};
    inline int32_t suspicious() const { DARABONBA_PTR_GET_DEFAULT(suspicious_, 0) };
    inline GetClusterSuspEventStatisticsResponseBodySuspStatistics& setSuspicious(int32_t suspicious) { DARABONBA_PTR_SET_VALUE(suspicious_, suspicious) };


  protected:
    // The number of alerts whose Emergency level is Reminder.
    std::shared_ptr<int32_t> remind_ = nullptr;
    // The number of alerts whose Emergency level is Urgent.
    std::shared_ptr<int32_t> serious_ = nullptr;
    // The number of alerts whose Emergency level is Suspicious.
    std::shared_ptr<int32_t> suspicious_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
