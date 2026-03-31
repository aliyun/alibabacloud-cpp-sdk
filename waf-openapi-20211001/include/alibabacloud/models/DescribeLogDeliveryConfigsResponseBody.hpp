// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGDELIVERYCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeLogDeliveryConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogDeliveryConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogDeliveryConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryConfigs, deliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLogDeliveryConfigsResponseBody() = default ;
    DescribeLogDeliveryConfigsResponseBody(const DescribeLogDeliveryConfigsResponseBody &) = default ;
    DescribeLogDeliveryConfigsResponseBody(DescribeLogDeliveryConfigsResponseBody &&) = default ;
    DescribeLogDeliveryConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogDeliveryConfigsResponseBody() = default ;
    DescribeLogDeliveryConfigsResponseBody& operator=(const DescribeLogDeliveryConfigsResponseBody &) = default ;
    DescribeLogDeliveryConfigsResponseBody& operator=(DescribeLogDeliveryConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(DeliveryDetail, deliveryDetail_);
        DARABONBA_PTR_TO_JSON(DeliveryName, deliveryName_);
        DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(DeliveryDetail, deliveryDetail_);
        DARABONBA_PTR_FROM_JSON(DeliveryName, deliveryName_);
        DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
      };
      DeliveryConfigs() = default ;
      DeliveryConfigs(const DeliveryConfigs &) = default ;
      DeliveryConfigs(DeliveryConfigs &&) = default ;
      DeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryConfigs() = default ;
      DeliveryConfigs& operator=(const DeliveryConfigs &) = default ;
      DeliveryConfigs& operator=(DeliveryConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deliveryDetail_ == nullptr
        && this->deliveryName_ == nullptr && this->deliveryType_ == nullptr; };
      // deliveryDetail Field Functions 
      bool hasDeliveryDetail() const { return this->deliveryDetail_ != nullptr;};
      void deleteDeliveryDetail() { this->deliveryDetail_ = nullptr;};
      inline string getDeliveryDetail() const { DARABONBA_PTR_GET_DEFAULT(deliveryDetail_, "") };
      inline DeliveryConfigs& setDeliveryDetail(string deliveryDetail) { DARABONBA_PTR_SET_VALUE(deliveryDetail_, deliveryDetail) };


      // deliveryName Field Functions 
      bool hasDeliveryName() const { return this->deliveryName_ != nullptr;};
      void deleteDeliveryName() { this->deliveryName_ = nullptr;};
      inline string getDeliveryName() const { DARABONBA_PTR_GET_DEFAULT(deliveryName_, "") };
      inline DeliveryConfigs& setDeliveryName(string deliveryName) { DARABONBA_PTR_SET_VALUE(deliveryName_, deliveryName) };


      // deliveryType Field Functions 
      bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
      void deleteDeliveryType() { this->deliveryType_ = nullptr;};
      inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
      inline DeliveryConfigs& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


    protected:
      // The content of the log delivery configuration. The value is a JSON string that contains multiple parameters.
      // 
      // >  This parameter is the same as the **DeliveryDetail** parameter of the **CreateLogDeliveryConfig** operation. For more information, see **Parameter description for log delivery configuration** of the [CreateLogDeliveryConfig](~~CreateLogDeliveryConfig~~) operation.
      shared_ptr<string> deliveryDetail_ {};
      // The name of the log delivery configuration.
      shared_ptr<string> deliveryName_ {};
      // The type of the log delivery configuration. Valid values:
      // 
      // *   **syslog**: Logs are delivered to a syslog service.
      // *   **kafka**: Logs are delivered to a Kafka service.
      shared_ptr<string> deliveryType_ {};
    };

    virtual bool empty() const override { return this->deliveryConfigs_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deliveryConfigs Field Functions 
    bool hasDeliveryConfigs() const { return this->deliveryConfigs_ != nullptr;};
    void deleteDeliveryConfigs() { this->deliveryConfigs_ = nullptr;};
    inline const vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs> & getDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(deliveryConfigs_, vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs>) };
    inline vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs> getDeliveryConfigs() { DARABONBA_PTR_GET(deliveryConfigs_, vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs>) };
    inline DescribeLogDeliveryConfigsResponseBody& setDeliveryConfigs(const vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs> & deliveryConfigs) { DARABONBA_PTR_SET_VALUE(deliveryConfigs_, deliveryConfigs) };
    inline DescribeLogDeliveryConfigsResponseBody& setDeliveryConfigs(vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs> && deliveryConfigs) { DARABONBA_PTR_SET_RVALUE(deliveryConfigs_, deliveryConfigs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLogDeliveryConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLogDeliveryConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogDeliveryConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogDeliveryConfigsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the log delivery configuration.
    shared_ptr<vector<DescribeLogDeliveryConfigsResponseBody::DeliveryConfigs>> deliveryConfigs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
