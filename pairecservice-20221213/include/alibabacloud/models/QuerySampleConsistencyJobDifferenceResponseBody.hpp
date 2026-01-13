// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QuerySampleConsistencyJobDifferenceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySampleConsistencyJobDifferenceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DifferenceHistogram, differenceHistogram_);
      DARABONBA_PTR_TO_JSON(NumberFeatureDifferences, numberFeatureDifferences_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StringFeatureDifferences, stringFeatureDifferences_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySampleConsistencyJobDifferenceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DifferenceHistogram, differenceHistogram_);
      DARABONBA_PTR_FROM_JSON(NumberFeatureDifferences, numberFeatureDifferences_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StringFeatureDifferences, stringFeatureDifferences_);
    };
    QuerySampleConsistencyJobDifferenceResponseBody() = default ;
    QuerySampleConsistencyJobDifferenceResponseBody(const QuerySampleConsistencyJobDifferenceResponseBody &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBody(QuerySampleConsistencyJobDifferenceResponseBody &&) = default ;
    QuerySampleConsistencyJobDifferenceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySampleConsistencyJobDifferenceResponseBody() = default ;
    QuerySampleConsistencyJobDifferenceResponseBody& operator=(const QuerySampleConsistencyJobDifferenceResponseBody &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBody& operator=(QuerySampleConsistencyJobDifferenceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StringFeatureDifferences : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StringFeatureDifferences& obj) { 
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, StringFeatureDifferences& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      StringFeatureDifferences() = default ;
      StringFeatureDifferences(const StringFeatureDifferences &) = default ;
      StringFeatureDifferences(StringFeatureDifferences &&) = default ;
      StringFeatureDifferences(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StringFeatureDifferences() = default ;
      StringFeatureDifferences& operator=(const StringFeatureDifferences &) = default ;
      StringFeatureDifferences& operator=(StringFeatureDifferences &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->itemId_ == nullptr
        && this->replyTableFeatureValue_ == nullptr && this->requestId_ == nullptr && this->sampleTableFeatureValue_ == nullptr && this->userId_ == nullptr; };
      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline StringFeatureDifferences& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // replyTableFeatureValue Field Functions 
      bool hasReplyTableFeatureValue() const { return this->replyTableFeatureValue_ != nullptr;};
      void deleteReplyTableFeatureValue() { this->replyTableFeatureValue_ = nullptr;};
      inline string getReplyTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(replyTableFeatureValue_, "") };
      inline StringFeatureDifferences& setReplyTableFeatureValue(string replyTableFeatureValue) { DARABONBA_PTR_SET_VALUE(replyTableFeatureValue_, replyTableFeatureValue) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline StringFeatureDifferences& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // sampleTableFeatureValue Field Functions 
      bool hasSampleTableFeatureValue() const { return this->sampleTableFeatureValue_ != nullptr;};
      void deleteSampleTableFeatureValue() { this->sampleTableFeatureValue_ = nullptr;};
      inline string getSampleTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(sampleTableFeatureValue_, "") };
      inline StringFeatureDifferences& setSampleTableFeatureValue(string sampleTableFeatureValue) { DARABONBA_PTR_SET_VALUE(sampleTableFeatureValue_, sampleTableFeatureValue) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline StringFeatureDifferences& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> itemId_ {};
      shared_ptr<string> replyTableFeatureValue_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> sampleTableFeatureValue_ {};
      shared_ptr<string> userId_ {};
    };

    class NumberFeatureDifferences : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NumberFeatureDifferences& obj) { 
        DARABONBA_PTR_TO_JSON(DiffValue, diffValue_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, NumberFeatureDifferences& obj) { 
        DARABONBA_PTR_FROM_JSON(DiffValue, diffValue_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      NumberFeatureDifferences() = default ;
      NumberFeatureDifferences(const NumberFeatureDifferences &) = default ;
      NumberFeatureDifferences(NumberFeatureDifferences &&) = default ;
      NumberFeatureDifferences(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NumberFeatureDifferences() = default ;
      NumberFeatureDifferences& operator=(const NumberFeatureDifferences &) = default ;
      NumberFeatureDifferences& operator=(NumberFeatureDifferences &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diffValue_ == nullptr
        && this->itemId_ == nullptr && this->replyTableFeatureValue_ == nullptr && this->requestId_ == nullptr && this->sampleTableFeatureValue_ == nullptr && this->userId_ == nullptr; };
      // diffValue Field Functions 
      bool hasDiffValue() const { return this->diffValue_ != nullptr;};
      void deleteDiffValue() { this->diffValue_ = nullptr;};
      inline double getDiffValue() const { DARABONBA_PTR_GET_DEFAULT(diffValue_, 0.0) };
      inline NumberFeatureDifferences& setDiffValue(double diffValue) { DARABONBA_PTR_SET_VALUE(diffValue_, diffValue) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline NumberFeatureDifferences& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // replyTableFeatureValue Field Functions 
      bool hasReplyTableFeatureValue() const { return this->replyTableFeatureValue_ != nullptr;};
      void deleteReplyTableFeatureValue() { this->replyTableFeatureValue_ = nullptr;};
      inline double getReplyTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(replyTableFeatureValue_, 0.0) };
      inline NumberFeatureDifferences& setReplyTableFeatureValue(double replyTableFeatureValue) { DARABONBA_PTR_SET_VALUE(replyTableFeatureValue_, replyTableFeatureValue) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline NumberFeatureDifferences& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // sampleTableFeatureValue Field Functions 
      bool hasSampleTableFeatureValue() const { return this->sampleTableFeatureValue_ != nullptr;};
      void deleteSampleTableFeatureValue() { this->sampleTableFeatureValue_ = nullptr;};
      inline double getSampleTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(sampleTableFeatureValue_, 0.0) };
      inline NumberFeatureDifferences& setSampleTableFeatureValue(double sampleTableFeatureValue) { DARABONBA_PTR_SET_VALUE(sampleTableFeatureValue_, sampleTableFeatureValue) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline NumberFeatureDifferences& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<double> diffValue_ {};
      shared_ptr<string> itemId_ {};
      shared_ptr<double> replyTableFeatureValue_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<double> sampleTableFeatureValue_ {};
      shared_ptr<string> userId_ {};
    };

    class DifferenceHistogram : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DifferenceHistogram& obj) { 
        DARABONBA_PTR_TO_JSON(Abscissa, abscissa_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DifferenceHistogram& obj) { 
        DARABONBA_PTR_FROM_JSON(Abscissa, abscissa_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DifferenceHistogram() = default ;
      DifferenceHistogram(const DifferenceHistogram &) = default ;
      DifferenceHistogram(DifferenceHistogram &&) = default ;
      DifferenceHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DifferenceHistogram() = default ;
      DifferenceHistogram& operator=(const DifferenceHistogram &) = default ;
      DifferenceHistogram& operator=(DifferenceHistogram &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abscissa_ == nullptr
        && this->value_ == nullptr; };
      // abscissa Field Functions 
      bool hasAbscissa() const { return this->abscissa_ != nullptr;};
      void deleteAbscissa() { this->abscissa_ = nullptr;};
      inline string getAbscissa() const { DARABONBA_PTR_GET_DEFAULT(abscissa_, "") };
      inline DifferenceHistogram& setAbscissa(string abscissa) { DARABONBA_PTR_SET_VALUE(abscissa_, abscissa) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline DifferenceHistogram& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> abscissa_ {};
      shared_ptr<int64_t> value_ {};
    };

    virtual bool empty() const override { return this->differenceHistogram_ == nullptr
        && this->numberFeatureDifferences_ == nullptr && this->requestId_ == nullptr && this->stringFeatureDifferences_ == nullptr; };
    // differenceHistogram Field Functions 
    bool hasDifferenceHistogram() const { return this->differenceHistogram_ != nullptr;};
    void deleteDifferenceHistogram() { this->differenceHistogram_ = nullptr;};
    inline const vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram> & getDifferenceHistogram() const { DARABONBA_PTR_GET_CONST(differenceHistogram_, vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram>) };
    inline vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram> getDifferenceHistogram() { DARABONBA_PTR_GET(differenceHistogram_, vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram>) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setDifferenceHistogram(const vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram> & differenceHistogram) { DARABONBA_PTR_SET_VALUE(differenceHistogram_, differenceHistogram) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setDifferenceHistogram(vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram> && differenceHistogram) { DARABONBA_PTR_SET_RVALUE(differenceHistogram_, differenceHistogram) };


    // numberFeatureDifferences Field Functions 
    bool hasNumberFeatureDifferences() const { return this->numberFeatureDifferences_ != nullptr;};
    void deleteNumberFeatureDifferences() { this->numberFeatureDifferences_ = nullptr;};
    inline const vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences> & getNumberFeatureDifferences() const { DARABONBA_PTR_GET_CONST(numberFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences>) };
    inline vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences> getNumberFeatureDifferences() { DARABONBA_PTR_GET(numberFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences>) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setNumberFeatureDifferences(const vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences> & numberFeatureDifferences) { DARABONBA_PTR_SET_VALUE(numberFeatureDifferences_, numberFeatureDifferences) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setNumberFeatureDifferences(vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences> && numberFeatureDifferences) { DARABONBA_PTR_SET_RVALUE(numberFeatureDifferences_, numberFeatureDifferences) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stringFeatureDifferences Field Functions 
    bool hasStringFeatureDifferences() const { return this->stringFeatureDifferences_ != nullptr;};
    void deleteStringFeatureDifferences() { this->stringFeatureDifferences_ = nullptr;};
    inline const vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences> & getStringFeatureDifferences() const { DARABONBA_PTR_GET_CONST(stringFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences>) };
    inline vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences> getStringFeatureDifferences() { DARABONBA_PTR_GET(stringFeatureDifferences_, vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences>) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setStringFeatureDifferences(const vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences> & stringFeatureDifferences) { DARABONBA_PTR_SET_VALUE(stringFeatureDifferences_, stringFeatureDifferences) };
    inline QuerySampleConsistencyJobDifferenceResponseBody& setStringFeatureDifferences(vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences> && stringFeatureDifferences) { DARABONBA_PTR_SET_RVALUE(stringFeatureDifferences_, stringFeatureDifferences) };


  protected:
    shared_ptr<vector<QuerySampleConsistencyJobDifferenceResponseBody::DifferenceHistogram>> differenceHistogram_ {};
    shared_ptr<vector<QuerySampleConsistencyJobDifferenceResponseBody::NumberFeatureDifferences>> numberFeatureDifferences_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QuerySampleConsistencyJobDifferenceResponseBody::StringFeatureDifferences>> stringFeatureDifferences_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
