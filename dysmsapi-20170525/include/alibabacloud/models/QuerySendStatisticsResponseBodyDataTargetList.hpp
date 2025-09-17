// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSRESPONSEBODYDATATARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSRESPONSEBODYDATATARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendStatisticsResponseBodyDataTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendStatisticsResponseBodyDataTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(NoRespondedCount, noRespondedCount_);
      DARABONBA_PTR_TO_JSON(RespondedFailCount, respondedFailCount_);
      DARABONBA_PTR_TO_JSON(RespondedSuccessCount, respondedSuccessCount_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendStatisticsResponseBodyDataTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(NoRespondedCount, noRespondedCount_);
      DARABONBA_PTR_FROM_JSON(RespondedFailCount, respondedFailCount_);
      DARABONBA_PTR_FROM_JSON(RespondedSuccessCount, respondedSuccessCount_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySendStatisticsResponseBodyDataTargetList() = default ;
    QuerySendStatisticsResponseBodyDataTargetList(const QuerySendStatisticsResponseBodyDataTargetList &) = default ;
    QuerySendStatisticsResponseBodyDataTargetList(QuerySendStatisticsResponseBodyDataTargetList &&) = default ;
    QuerySendStatisticsResponseBodyDataTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendStatisticsResponseBodyDataTargetList() = default ;
    QuerySendStatisticsResponseBodyDataTargetList& operator=(const QuerySendStatisticsResponseBodyDataTargetList &) = default ;
    QuerySendStatisticsResponseBodyDataTargetList& operator=(QuerySendStatisticsResponseBodyDataTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->noRespondedCount_ != nullptr
        && this->respondedFailCount_ != nullptr && this->respondedSuccessCount_ != nullptr && this->sendDate_ != nullptr && this->totalCount_ != nullptr; };
    // noRespondedCount Field Functions 
    bool hasNoRespondedCount() const { return this->noRespondedCount_ != nullptr;};
    void deleteNoRespondedCount() { this->noRespondedCount_ = nullptr;};
    inline int64_t noRespondedCount() const { DARABONBA_PTR_GET_DEFAULT(noRespondedCount_, 0L) };
    inline QuerySendStatisticsResponseBodyDataTargetList& setNoRespondedCount(int64_t noRespondedCount) { DARABONBA_PTR_SET_VALUE(noRespondedCount_, noRespondedCount) };


    // respondedFailCount Field Functions 
    bool hasRespondedFailCount() const { return this->respondedFailCount_ != nullptr;};
    void deleteRespondedFailCount() { this->respondedFailCount_ = nullptr;};
    inline int64_t respondedFailCount() const { DARABONBA_PTR_GET_DEFAULT(respondedFailCount_, 0L) };
    inline QuerySendStatisticsResponseBodyDataTargetList& setRespondedFailCount(int64_t respondedFailCount) { DARABONBA_PTR_SET_VALUE(respondedFailCount_, respondedFailCount) };


    // respondedSuccessCount Field Functions 
    bool hasRespondedSuccessCount() const { return this->respondedSuccessCount_ != nullptr;};
    void deleteRespondedSuccessCount() { this->respondedSuccessCount_ = nullptr;};
    inline int64_t respondedSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(respondedSuccessCount_, 0L) };
    inline QuerySendStatisticsResponseBodyDataTargetList& setRespondedSuccessCount(int64_t respondedSuccessCount) { DARABONBA_PTR_SET_VALUE(respondedSuccessCount_, respondedSuccessCount) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline QuerySendStatisticsResponseBodyDataTargetList& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QuerySendStatisticsResponseBodyDataTargetList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of messages without a delivery receipt.
    std::shared_ptr<int64_t> noRespondedCount_ = nullptr;
    // The number of messages with a delivery receipt that indicates a failure.
    std::shared_ptr<int64_t> respondedFailCount_ = nullptr;
    // The number of messages with a delivery receipt that indicates a success.
    std::shared_ptr<int64_t> respondedSuccessCount_ = nullptr;
    // The date when the message is sent. Format: yyyyMMdd. Example: 20181225.
    std::shared_ptr<string> sendDate_ = nullptr;
    // The number of delivered messages.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
