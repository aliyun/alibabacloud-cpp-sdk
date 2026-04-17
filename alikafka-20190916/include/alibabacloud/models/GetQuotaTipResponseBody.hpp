// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTATIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTATIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetQuotaTipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaTipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QuotaData, quotaData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaTipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QuotaData, quotaData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQuotaTipResponseBody() = default ;
    GetQuotaTipResponseBody(const GetQuotaTipResponseBody &) = default ;
    GetQuotaTipResponseBody(GetQuotaTipResponseBody &&) = default ;
    GetQuotaTipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaTipResponseBody() = default ;
    GetQuotaTipResponseBody& operator=(const GetQuotaTipResponseBody &) = default ;
    GetQuotaTipResponseBody& operator=(GetQuotaTipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaData& obj) { 
        DARABONBA_PTR_TO_JSON(GroupLeft, groupLeft_);
        DARABONBA_PTR_TO_JSON(GroupUsed, groupUsed_);
        DARABONBA_PTR_TO_JSON(IsPartitionBuy, isPartitionBuy_);
        DARABONBA_PTR_TO_JSON(PartitionLeft, partitionLeft_);
        DARABONBA_PTR_TO_JSON(PartitionNumOfBuy, partitionNumOfBuy_);
        DARABONBA_PTR_TO_JSON(PartitionQuota, partitionQuota_);
        DARABONBA_PTR_TO_JSON(PartitionUsed, partitionUsed_);
        DARABONBA_PTR_TO_JSON(TopicLeft, topicLeft_);
        DARABONBA_PTR_TO_JSON(TopicNumOfBuy, topicNumOfBuy_);
        DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
        DARABONBA_PTR_TO_JSON(TopicUsed, topicUsed_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaData& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupLeft, groupLeft_);
        DARABONBA_PTR_FROM_JSON(GroupUsed, groupUsed_);
        DARABONBA_PTR_FROM_JSON(IsPartitionBuy, isPartitionBuy_);
        DARABONBA_PTR_FROM_JSON(PartitionLeft, partitionLeft_);
        DARABONBA_PTR_FROM_JSON(PartitionNumOfBuy, partitionNumOfBuy_);
        DARABONBA_PTR_FROM_JSON(PartitionQuota, partitionQuota_);
        DARABONBA_PTR_FROM_JSON(PartitionUsed, partitionUsed_);
        DARABONBA_PTR_FROM_JSON(TopicLeft, topicLeft_);
        DARABONBA_PTR_FROM_JSON(TopicNumOfBuy, topicNumOfBuy_);
        DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
        DARABONBA_PTR_FROM_JSON(TopicUsed, topicUsed_);
      };
      QuotaData() = default ;
      QuotaData(const QuotaData &) = default ;
      QuotaData(QuotaData &&) = default ;
      QuotaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaData() = default ;
      QuotaData& operator=(const QuotaData &) = default ;
      QuotaData& operator=(QuotaData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupLeft_ == nullptr
        && this->groupUsed_ == nullptr && this->isPartitionBuy_ == nullptr && this->partitionLeft_ == nullptr && this->partitionNumOfBuy_ == nullptr && this->partitionQuota_ == nullptr
        && this->partitionUsed_ == nullptr && this->topicLeft_ == nullptr && this->topicNumOfBuy_ == nullptr && this->topicQuota_ == nullptr && this->topicUsed_ == nullptr; };
      // groupLeft Field Functions 
      bool hasGroupLeft() const { return this->groupLeft_ != nullptr;};
      void deleteGroupLeft() { this->groupLeft_ = nullptr;};
      inline int32_t getGroupLeft() const { DARABONBA_PTR_GET_DEFAULT(groupLeft_, 0) };
      inline QuotaData& setGroupLeft(int32_t groupLeft) { DARABONBA_PTR_SET_VALUE(groupLeft_, groupLeft) };


      // groupUsed Field Functions 
      bool hasGroupUsed() const { return this->groupUsed_ != nullptr;};
      void deleteGroupUsed() { this->groupUsed_ = nullptr;};
      inline int32_t getGroupUsed() const { DARABONBA_PTR_GET_DEFAULT(groupUsed_, 0) };
      inline QuotaData& setGroupUsed(int32_t groupUsed) { DARABONBA_PTR_SET_VALUE(groupUsed_, groupUsed) };


      // isPartitionBuy Field Functions 
      bool hasIsPartitionBuy() const { return this->isPartitionBuy_ != nullptr;};
      void deleteIsPartitionBuy() { this->isPartitionBuy_ = nullptr;};
      inline int32_t getIsPartitionBuy() const { DARABONBA_PTR_GET_DEFAULT(isPartitionBuy_, 0) };
      inline QuotaData& setIsPartitionBuy(int32_t isPartitionBuy) { DARABONBA_PTR_SET_VALUE(isPartitionBuy_, isPartitionBuy) };


      // partitionLeft Field Functions 
      bool hasPartitionLeft() const { return this->partitionLeft_ != nullptr;};
      void deletePartitionLeft() { this->partitionLeft_ = nullptr;};
      inline int32_t getPartitionLeft() const { DARABONBA_PTR_GET_DEFAULT(partitionLeft_, 0) };
      inline QuotaData& setPartitionLeft(int32_t partitionLeft) { DARABONBA_PTR_SET_VALUE(partitionLeft_, partitionLeft) };


      // partitionNumOfBuy Field Functions 
      bool hasPartitionNumOfBuy() const { return this->partitionNumOfBuy_ != nullptr;};
      void deletePartitionNumOfBuy() { this->partitionNumOfBuy_ = nullptr;};
      inline int32_t getPartitionNumOfBuy() const { DARABONBA_PTR_GET_DEFAULT(partitionNumOfBuy_, 0) };
      inline QuotaData& setPartitionNumOfBuy(int32_t partitionNumOfBuy) { DARABONBA_PTR_SET_VALUE(partitionNumOfBuy_, partitionNumOfBuy) };


      // partitionQuota Field Functions 
      bool hasPartitionQuota() const { return this->partitionQuota_ != nullptr;};
      void deletePartitionQuota() { this->partitionQuota_ = nullptr;};
      inline int32_t getPartitionQuota() const { DARABONBA_PTR_GET_DEFAULT(partitionQuota_, 0) };
      inline QuotaData& setPartitionQuota(int32_t partitionQuota) { DARABONBA_PTR_SET_VALUE(partitionQuota_, partitionQuota) };


      // partitionUsed Field Functions 
      bool hasPartitionUsed() const { return this->partitionUsed_ != nullptr;};
      void deletePartitionUsed() { this->partitionUsed_ = nullptr;};
      inline int32_t getPartitionUsed() const { DARABONBA_PTR_GET_DEFAULT(partitionUsed_, 0) };
      inline QuotaData& setPartitionUsed(int32_t partitionUsed) { DARABONBA_PTR_SET_VALUE(partitionUsed_, partitionUsed) };


      // topicLeft Field Functions 
      bool hasTopicLeft() const { return this->topicLeft_ != nullptr;};
      void deleteTopicLeft() { this->topicLeft_ = nullptr;};
      inline int32_t getTopicLeft() const { DARABONBA_PTR_GET_DEFAULT(topicLeft_, 0) };
      inline QuotaData& setTopicLeft(int32_t topicLeft) { DARABONBA_PTR_SET_VALUE(topicLeft_, topicLeft) };


      // topicNumOfBuy Field Functions 
      bool hasTopicNumOfBuy() const { return this->topicNumOfBuy_ != nullptr;};
      void deleteTopicNumOfBuy() { this->topicNumOfBuy_ = nullptr;};
      inline int32_t getTopicNumOfBuy() const { DARABONBA_PTR_GET_DEFAULT(topicNumOfBuy_, 0) };
      inline QuotaData& setTopicNumOfBuy(int32_t topicNumOfBuy) { DARABONBA_PTR_SET_VALUE(topicNumOfBuy_, topicNumOfBuy) };


      // topicQuota Field Functions 
      bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
      void deleteTopicQuota() { this->topicQuota_ = nullptr;};
      inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
      inline QuotaData& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


      // topicUsed Field Functions 
      bool hasTopicUsed() const { return this->topicUsed_ != nullptr;};
      void deleteTopicUsed() { this->topicUsed_ = nullptr;};
      inline int32_t getTopicUsed() const { DARABONBA_PTR_GET_DEFAULT(topicUsed_, 0) };
      inline QuotaData& setTopicUsed(int32_t topicUsed) { DARABONBA_PTR_SET_VALUE(topicUsed_, topicUsed) };


    protected:
      // The number of available groups.
      shared_ptr<int32_t> groupLeft_ {};
      // The number of used groups.
      shared_ptr<int32_t> groupUsed_ {};
      // The method that you use to purchase partitions. Valid values:
      // 
      // *   0: indicates that the instance is purchased based on topics.
      // *   1: indicates that the instance is purchased based on partitions.
      shared_ptr<int32_t> isPartitionBuy_ {};
      // The number of available partitions.
      shared_ptr<int32_t> partitionLeft_ {};
      // The number of purchased partitions.
      shared_ptr<int32_t> partitionNumOfBuy_ {};
      // The quota of partitions.
      shared_ptr<int32_t> partitionQuota_ {};
      // The number of used partitions.
      shared_ptr<int32_t> partitionUsed_ {};
      // The number of available topics.
      shared_ptr<int32_t> topicLeft_ {};
      // The number of purchased topics.
      shared_ptr<int32_t> topicNumOfBuy_ {};
      // The quota of topics.
      shared_ptr<int32_t> topicQuota_ {};
      // The number of used topics.
      shared_ptr<int32_t> topicUsed_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->quotaData_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetQuotaTipResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQuotaTipResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // quotaData Field Functions 
    bool hasQuotaData() const { return this->quotaData_ != nullptr;};
    void deleteQuotaData() { this->quotaData_ = nullptr;};
    inline const GetQuotaTipResponseBody::QuotaData & getQuotaData() const { DARABONBA_PTR_GET_CONST(quotaData_, GetQuotaTipResponseBody::QuotaData) };
    inline GetQuotaTipResponseBody::QuotaData getQuotaData() { DARABONBA_PTR_GET(quotaData_, GetQuotaTipResponseBody::QuotaData) };
    inline GetQuotaTipResponseBody& setQuotaData(const GetQuotaTipResponseBody::QuotaData & quotaData) { DARABONBA_PTR_SET_VALUE(quotaData_, quotaData) };
    inline GetQuotaTipResponseBody& setQuotaData(GetQuotaTipResponseBody::QuotaData && quotaData) { DARABONBA_PTR_SET_RVALUE(quotaData_, quotaData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaTipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQuotaTipResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The additional message. This message is typically used to describe API call failures for troubleshooting.
    shared_ptr<string> message_ {};
    // The quota.
    shared_ptr<GetQuotaTipResponseBody::QuotaData> quotaData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
