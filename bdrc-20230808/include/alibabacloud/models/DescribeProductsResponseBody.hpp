// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProductsResponseBody() = default ;
    DescribeProductsResponseBody(const DescribeProductsResponseBody &) = default ;
    DescribeProductsResponseBody(DescribeProductsResponseBody &&) = default ;
    DescribeProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsResponseBody() = default ;
    DescribeProductsResponseBody& operator=(const DescribeProductsResponseBody &) = default ;
    DescribeProductsResponseBody& operator=(DescribeProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(CheckFailedCount, checkFailedCount_);
          DARABONBA_PTR_TO_JSON(CheckFailedResourceCount, checkFailedResourceCount_);
          DARABONBA_PTR_TO_JSON(DisableCheckResourceCount, disableCheckResourceCount_);
          DARABONBA_PTR_TO_JSON(EnableCheck, enableCheck_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ProtectionScore, protectionScore_);
          DARABONBA_PTR_TO_JSON(ProtectionScoreDistribution, protectionScoreDistribution_);
          DARABONBA_PTR_TO_JSON(ProtectionScoreUpdatedTime, protectionScoreUpdatedTime_);
          DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
          DARABONBA_PTR_TO_JSON(RiskyResourceCount, riskyResourceCount_);
          DARABONBA_PTR_TO_JSON(TotalResourceCount, totalResourceCount_);
          DARABONBA_PTR_TO_JSON(WaitForCheckResourceCount, waitForCheckResourceCount_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckFailedCount, checkFailedCount_);
          DARABONBA_PTR_FROM_JSON(CheckFailedResourceCount, checkFailedResourceCount_);
          DARABONBA_PTR_FROM_JSON(DisableCheckResourceCount, disableCheckResourceCount_);
          DARABONBA_PTR_FROM_JSON(EnableCheck, enableCheck_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ProtectionScore, protectionScore_);
          DARABONBA_PTR_FROM_JSON(ProtectionScoreDistribution, protectionScoreDistribution_);
          DARABONBA_PTR_FROM_JSON(ProtectionScoreUpdatedTime, protectionScoreUpdatedTime_);
          DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
          DARABONBA_PTR_FROM_JSON(RiskyResourceCount, riskyResourceCount_);
          DARABONBA_PTR_FROM_JSON(TotalResourceCount, totalResourceCount_);
          DARABONBA_PTR_FROM_JSON(WaitForCheckResourceCount, waitForCheckResourceCount_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProtectionScoreDistribution : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProtectionScoreDistribution& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Range, range_);
          };
          friend void from_json(const Darabonba::Json& j, ProtectionScoreDistribution& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Range, range_);
          };
          ProtectionScoreDistribution() = default ;
          ProtectionScoreDistribution(const ProtectionScoreDistribution &) = default ;
          ProtectionScoreDistribution(ProtectionScoreDistribution &&) = default ;
          ProtectionScoreDistribution(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProtectionScoreDistribution() = default ;
          ProtectionScoreDistribution& operator=(const ProtectionScoreDistribution &) = default ;
          ProtectionScoreDistribution& operator=(ProtectionScoreDistribution &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Range : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Range& obj) { 
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(To, to_);
            };
            friend void from_json(const Darabonba::Json& j, Range& obj) { 
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(To, to_);
            };
            Range() = default ;
            Range(const Range &) = default ;
            Range(Range &&) = default ;
            Range(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Range() = default ;
            Range& operator=(const Range &) = default ;
            Range& operator=(Range &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
            inline Range& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
            inline Range& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


          protected:
            // The lower bound of the score range, inclusive.
            shared_ptr<int32_t> from_ {};
            // The upper bound of the score range, inclusive.
            shared_ptr<int32_t> to_ {};
          };

          virtual bool empty() const override { return this->count_ == nullptr
        && this->range_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline ProtectionScoreDistribution& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // range Field Functions 
          bool hasRange() const { return this->range_ != nullptr;};
          void deleteRange() { this->range_ = nullptr;};
          inline const ProtectionScoreDistribution::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, ProtectionScoreDistribution::Range) };
          inline ProtectionScoreDistribution::Range getRange() { DARABONBA_PTR_GET(range_, ProtectionScoreDistribution::Range) };
          inline ProtectionScoreDistribution& setRange(const ProtectionScoreDistribution::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
          inline ProtectionScoreDistribution& setRange(ProtectionScoreDistribution::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


        protected:
          // The count of resources within this score range.
          shared_ptr<int64_t> count_ {};
          // The score range.
          shared_ptr<ProtectionScoreDistribution::Range> range_ {};
        };

        virtual bool empty() const override { return this->checkFailedCount_ == nullptr
        && this->checkFailedResourceCount_ == nullptr && this->disableCheckResourceCount_ == nullptr && this->enableCheck_ == nullptr && this->productType_ == nullptr && this->protectionScore_ == nullptr
        && this->protectionScoreDistribution_ == nullptr && this->protectionScoreUpdatedTime_ == nullptr && this->riskCount_ == nullptr && this->riskyResourceCount_ == nullptr && this->totalResourceCount_ == nullptr
        && this->waitForCheckResourceCount_ == nullptr; };
        // checkFailedCount Field Functions 
        bool hasCheckFailedCount() const { return this->checkFailedCount_ != nullptr;};
        void deleteCheckFailedCount() { this->checkFailedCount_ = nullptr;};
        inline int64_t getCheckFailedCount() const { DARABONBA_PTR_GET_DEFAULT(checkFailedCount_, 0L) };
        inline Content& setCheckFailedCount(int64_t checkFailedCount) { DARABONBA_PTR_SET_VALUE(checkFailedCount_, checkFailedCount) };


        // checkFailedResourceCount Field Functions 
        bool hasCheckFailedResourceCount() const { return this->checkFailedResourceCount_ != nullptr;};
        void deleteCheckFailedResourceCount() { this->checkFailedResourceCount_ = nullptr;};
        inline int64_t getCheckFailedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(checkFailedResourceCount_, 0L) };
        inline Content& setCheckFailedResourceCount(int64_t checkFailedResourceCount) { DARABONBA_PTR_SET_VALUE(checkFailedResourceCount_, checkFailedResourceCount) };


        // disableCheckResourceCount Field Functions 
        bool hasDisableCheckResourceCount() const { return this->disableCheckResourceCount_ != nullptr;};
        void deleteDisableCheckResourceCount() { this->disableCheckResourceCount_ = nullptr;};
        inline int64_t getDisableCheckResourceCount() const { DARABONBA_PTR_GET_DEFAULT(disableCheckResourceCount_, 0L) };
        inline Content& setDisableCheckResourceCount(int64_t disableCheckResourceCount) { DARABONBA_PTR_SET_VALUE(disableCheckResourceCount_, disableCheckResourceCount) };


        // enableCheck Field Functions 
        bool hasEnableCheck() const { return this->enableCheck_ != nullptr;};
        void deleteEnableCheck() { this->enableCheck_ = nullptr;};
        inline bool getEnableCheck() const { DARABONBA_PTR_GET_DEFAULT(enableCheck_, false) };
        inline Content& setEnableCheck(bool enableCheck) { DARABONBA_PTR_SET_VALUE(enableCheck_, enableCheck) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Content& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // protectionScore Field Functions 
        bool hasProtectionScore() const { return this->protectionScore_ != nullptr;};
        void deleteProtectionScore() { this->protectionScore_ = nullptr;};
        inline int32_t getProtectionScore() const { DARABONBA_PTR_GET_DEFAULT(protectionScore_, 0) };
        inline Content& setProtectionScore(int32_t protectionScore) { DARABONBA_PTR_SET_VALUE(protectionScore_, protectionScore) };


        // protectionScoreDistribution Field Functions 
        bool hasProtectionScoreDistribution() const { return this->protectionScoreDistribution_ != nullptr;};
        void deleteProtectionScoreDistribution() { this->protectionScoreDistribution_ = nullptr;};
        inline const vector<Content::ProtectionScoreDistribution> & getProtectionScoreDistribution() const { DARABONBA_PTR_GET_CONST(protectionScoreDistribution_, vector<Content::ProtectionScoreDistribution>) };
        inline vector<Content::ProtectionScoreDistribution> getProtectionScoreDistribution() { DARABONBA_PTR_GET(protectionScoreDistribution_, vector<Content::ProtectionScoreDistribution>) };
        inline Content& setProtectionScoreDistribution(const vector<Content::ProtectionScoreDistribution> & protectionScoreDistribution) { DARABONBA_PTR_SET_VALUE(protectionScoreDistribution_, protectionScoreDistribution) };
        inline Content& setProtectionScoreDistribution(vector<Content::ProtectionScoreDistribution> && protectionScoreDistribution) { DARABONBA_PTR_SET_RVALUE(protectionScoreDistribution_, protectionScoreDistribution) };


        // protectionScoreUpdatedTime Field Functions 
        bool hasProtectionScoreUpdatedTime() const { return this->protectionScoreUpdatedTime_ != nullptr;};
        void deleteProtectionScoreUpdatedTime() { this->protectionScoreUpdatedTime_ = nullptr;};
        inline int64_t getProtectionScoreUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(protectionScoreUpdatedTime_, 0L) };
        inline Content& setProtectionScoreUpdatedTime(int64_t protectionScoreUpdatedTime) { DARABONBA_PTR_SET_VALUE(protectionScoreUpdatedTime_, protectionScoreUpdatedTime) };


        // riskCount Field Functions 
        bool hasRiskCount() const { return this->riskCount_ != nullptr;};
        void deleteRiskCount() { this->riskCount_ = nullptr;};
        inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
        inline Content& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


        // riskyResourceCount Field Functions 
        bool hasRiskyResourceCount() const { return this->riskyResourceCount_ != nullptr;};
        void deleteRiskyResourceCount() { this->riskyResourceCount_ = nullptr;};
        inline int64_t getRiskyResourceCount() const { DARABONBA_PTR_GET_DEFAULT(riskyResourceCount_, 0L) };
        inline Content& setRiskyResourceCount(int64_t riskyResourceCount) { DARABONBA_PTR_SET_VALUE(riskyResourceCount_, riskyResourceCount) };


        // totalResourceCount Field Functions 
        bool hasTotalResourceCount() const { return this->totalResourceCount_ != nullptr;};
        void deleteTotalResourceCount() { this->totalResourceCount_ = nullptr;};
        inline int64_t getTotalResourceCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCount_, 0L) };
        inline Content& setTotalResourceCount(int64_t totalResourceCount) { DARABONBA_PTR_SET_VALUE(totalResourceCount_, totalResourceCount) };


        // waitForCheckResourceCount Field Functions 
        bool hasWaitForCheckResourceCount() const { return this->waitForCheckResourceCount_ != nullptr;};
        void deleteWaitForCheckResourceCount() { this->waitForCheckResourceCount_ = nullptr;};
        inline int64_t getWaitForCheckResourceCount() const { DARABONBA_PTR_GET_DEFAULT(waitForCheckResourceCount_, 0L) };
        inline Content& setWaitForCheckResourceCount(int64_t waitForCheckResourceCount) { DARABONBA_PTR_SET_VALUE(waitForCheckResourceCount_, waitForCheckResourceCount) };


      protected:
        // The count of failed check items.
        shared_ptr<int64_t> checkFailedCount_ {};
        // The count of resources that failed the check.
        shared_ptr<int64_t> checkFailedResourceCount_ {};
        // The count of resources for which the check is disabled.
        shared_ptr<int64_t> disableCheckResourceCount_ {};
        // Indicates whether the data protection score is enabled for the cloud product.
        shared_ptr<bool> enableCheck_ {};
        // The cloud product type, such as `ECS` and `OSS`.
        shared_ptr<string> productType_ {};
        // The data protection score, ranging from 0 to 100.
        shared_ptr<int32_t> protectionScore_ {};
        // The distribution of resources across different score ranges.
        shared_ptr<vector<Content::ProtectionScoreDistribution>> protectionScoreDistribution_ {};
        // The UNIX timestamp of the last data protection score update.
        shared_ptr<int64_t> protectionScoreUpdatedTime_ {};
        // The count of risky check items.
        shared_ptr<int64_t> riskCount_ {};
        // The count of risky resources.
        shared_ptr<int64_t> riskyResourceCount_ {};
        // The total count of resources for the cloud product.
        shared_ptr<int64_t> totalResourceCount_ {};
        // The count of resources pending a check.
        shared_ptr<int64_t> waitForCheckResourceCount_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // A list of cloud products and their data protection status.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of entries returned per page.
      shared_ptr<int32_t> maxResults_ {};
      // The token for the next page of results. If this parameter is absent from the response, all results have been retrieved.
      shared_ptr<string> nextToken_ {};
      // The total number of entries that match the query. This parameter is not returned by default.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeProductsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeProductsResponseBody::Data) };
    inline DescribeProductsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeProductsResponseBody::Data) };
    inline DescribeProductsResponseBody& setData(const DescribeProductsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProductsResponseBody& setData(DescribeProductsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeProductsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
