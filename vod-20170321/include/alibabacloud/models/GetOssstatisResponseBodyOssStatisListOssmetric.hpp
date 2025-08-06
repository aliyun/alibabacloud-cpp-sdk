// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSSTATISRESPONSEBODYOSSSTATISLISTOSSMETRIC_HPP_
#define ALIBABACLOUD_MODELS_GETOSSSTATISRESPONSEBODYOSSSTATISLISTOSSMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetOSSStatisResponseBodyOssStatisListOSSMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSStatisResponseBodyOssStatisListOSSMetric& obj) { 
      DARABONBA_PTR_TO_JSON(StatTime, statTime_);
      DARABONBA_PTR_TO_JSON(StatTimeUTC, statTimeUTC_);
      DARABONBA_PTR_TO_JSON(StorageUtilization, storageUtilization_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSStatisResponseBodyOssStatisListOSSMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(StatTime, statTime_);
      DARABONBA_PTR_FROM_JSON(StatTimeUTC, statTimeUTC_);
      DARABONBA_PTR_FROM_JSON(StorageUtilization, storageUtilization_);
    };
    GetOSSStatisResponseBodyOssStatisListOSSMetric() = default ;
    GetOSSStatisResponseBodyOssStatisListOSSMetric(const GetOSSStatisResponseBodyOssStatisListOSSMetric &) = default ;
    GetOSSStatisResponseBodyOssStatisListOSSMetric(GetOSSStatisResponseBodyOssStatisListOSSMetric &&) = default ;
    GetOSSStatisResponseBodyOssStatisListOSSMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSStatisResponseBodyOssStatisListOSSMetric() = default ;
    GetOSSStatisResponseBodyOssStatisListOSSMetric& operator=(const GetOSSStatisResponseBodyOssStatisListOSSMetric &) = default ;
    GetOSSStatisResponseBodyOssStatisListOSSMetric& operator=(GetOSSStatisResponseBodyOssStatisListOSSMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->statTime_ != nullptr
        && this->statTimeUTC_ != nullptr && this->storageUtilization_ != nullptr; };
    // statTime Field Functions 
    bool hasStatTime() const { return this->statTime_ != nullptr;};
    void deleteStatTime() { this->statTime_ = nullptr;};
    inline string statTime() const { DARABONBA_PTR_GET_DEFAULT(statTime_, "") };
    inline GetOSSStatisResponseBodyOssStatisListOSSMetric& setStatTime(string statTime) { DARABONBA_PTR_SET_VALUE(statTime_, statTime) };


    // statTimeUTC Field Functions 
    bool hasStatTimeUTC() const { return this->statTimeUTC_ != nullptr;};
    void deleteStatTimeUTC() { this->statTimeUTC_ = nullptr;};
    inline string statTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(statTimeUTC_, "") };
    inline GetOSSStatisResponseBodyOssStatisListOSSMetric& setStatTimeUTC(string statTimeUTC) { DARABONBA_PTR_SET_VALUE(statTimeUTC_, statTimeUTC) };


    // storageUtilization Field Functions 
    bool hasStorageUtilization() const { return this->storageUtilization_ != nullptr;};
    void deleteStorageUtilization() { this->storageUtilization_ = nullptr;};
    inline int64_t storageUtilization() const { DARABONBA_PTR_GET_DEFAULT(storageUtilization_, 0L) };
    inline GetOSSStatisResponseBodyOssStatisListOSSMetric& setStorageUtilization(int64_t storageUtilization) { DARABONBA_PTR_SET_VALUE(storageUtilization_, storageUtilization) };


  protected:
    std::shared_ptr<string> statTime_ = nullptr;
    std::shared_ptr<string> statTimeUTC_ = nullptr;
    std::shared_ptr<int64_t> storageUtilization_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
