// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODYDATASTAT_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSBYTAGNAMEANDBATCHIDRESPONSEBODYDATASTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(faildCount, faildCount_);
      DARABONBA_PTR_TO_JSON(requestCount, requestCount_);
      DARABONBA_PTR_TO_JSON(succeededPercent, succeededPercent_);
      DARABONBA_PTR_TO_JSON(successCount, successCount_);
      DARABONBA_PTR_TO_JSON(unavailableCount, unavailableCount_);
      DARABONBA_PTR_TO_JSON(unavailablePercent, unavailablePercent_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(faildCount, faildCount_);
      DARABONBA_PTR_FROM_JSON(requestCount, requestCount_);
      DARABONBA_PTR_FROM_JSON(succeededPercent, succeededPercent_);
      DARABONBA_PTR_FROM_JSON(successCount, successCount_);
      DARABONBA_PTR_FROM_JSON(unavailableCount, unavailableCount_);
      DARABONBA_PTR_FROM_JSON(unavailablePercent, unavailablePercent_);
    };
    SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat(const SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat(SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat &&) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat() = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& operator=(const SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat &) = default ;
    SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& operator=(SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->faildCount_ == nullptr && return this->requestCount_ == nullptr && return this->succeededPercent_ == nullptr && return this->successCount_ == nullptr && return this->unavailableCount_ == nullptr
        && return this->unavailablePercent_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // faildCount Field Functions 
    bool hasFaildCount() const { return this->faildCount_ != nullptr;};
    void deleteFaildCount() { this->faildCount_ = nullptr;};
    inline string faildCount() const { DARABONBA_PTR_GET_DEFAULT(faildCount_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setFaildCount(string faildCount) { DARABONBA_PTR_SET_VALUE(faildCount_, faildCount) };


    // requestCount Field Functions 
    bool hasRequestCount() const { return this->requestCount_ != nullptr;};
    void deleteRequestCount() { this->requestCount_ = nullptr;};
    inline string requestCount() const { DARABONBA_PTR_GET_DEFAULT(requestCount_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setRequestCount(string requestCount) { DARABONBA_PTR_SET_VALUE(requestCount_, requestCount) };


    // succeededPercent Field Functions 
    bool hasSucceededPercent() const { return this->succeededPercent_ != nullptr;};
    void deleteSucceededPercent() { this->succeededPercent_ = nullptr;};
    inline string succeededPercent() const { DARABONBA_PTR_GET_DEFAULT(succeededPercent_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setSucceededPercent(string succeededPercent) { DARABONBA_PTR_SET_VALUE(succeededPercent_, succeededPercent) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline string successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setSuccessCount(string successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // unavailableCount Field Functions 
    bool hasUnavailableCount() const { return this->unavailableCount_ != nullptr;};
    void deleteUnavailableCount() { this->unavailableCount_ = nullptr;};
    inline string unavailableCount() const { DARABONBA_PTR_GET_DEFAULT(unavailableCount_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setUnavailableCount(string unavailableCount) { DARABONBA_PTR_SET_VALUE(unavailableCount_, unavailableCount) };


    // unavailablePercent Field Functions 
    bool hasUnavailablePercent() const { return this->unavailablePercent_ != nullptr;};
    void deleteUnavailablePercent() { this->unavailablePercent_ = nullptr;};
    inline string unavailablePercent() const { DARABONBA_PTR_GET_DEFAULT(unavailablePercent_, "") };
    inline SenderStatisticsByTagNameAndBatchIDResponseBodyDataStat& setUnavailablePercent(string unavailablePercent) { DARABONBA_PTR_SET_VALUE(unavailablePercent_, unavailablePercent) };


  protected:
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // Failure count
    std::shared_ptr<string> faildCount_ = nullptr;
    // Request count
    std::shared_ptr<string> requestCount_ = nullptr;
    // Success rate
    std::shared_ptr<string> succeededPercent_ = nullptr;
    // Success count
    std::shared_ptr<string> successCount_ = nullptr;
    // Invalid count
    std::shared_ptr<string> unavailableCount_ = nullptr;
    // Unavailability rate
    std::shared_ptr<string> unavailablePercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
