// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PredictiveValues, predictiveValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PredictiveValues, predictiveValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPredictiveValueResponseBody() = default ;
    QueryPredictiveValueResponseBody(const QueryPredictiveValueResponseBody &) = default ;
    QueryPredictiveValueResponseBody(QueryPredictiveValueResponseBody &&) = default ;
    QueryPredictiveValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveValueResponseBody() = default ;
    QueryPredictiveValueResponseBody& operator=(const QueryPredictiveValueResponseBody &) = default ;
    QueryPredictiveValueResponseBody& operator=(QueryPredictiveValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PredictiveValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PredictiveValues& obj) { 
        DARABONBA_PTR_TO_JSON(PredictiveValue, predictiveValue_);
      };
      friend void from_json(const Darabonba::Json& j, PredictiveValues& obj) { 
        DARABONBA_PTR_FROM_JSON(PredictiveValue, predictiveValue_);
      };
      PredictiveValues() = default ;
      PredictiveValues(const PredictiveValues &) = default ;
      PredictiveValues(PredictiveValues &&) = default ;
      PredictiveValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PredictiveValues() = default ;
      PredictiveValues& operator=(const PredictiveValues &) = default ;
      PredictiveValues& operator=(PredictiveValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PredictiveValue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PredictiveValue& obj) { 
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, PredictiveValue& obj) { 
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        PredictiveValue() = default ;
        PredictiveValue(const PredictiveValue &) = default ;
        PredictiveValue(PredictiveValue &&) = default ;
        PredictiveValue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PredictiveValue() = default ;
        PredictiveValue& operator=(const PredictiveValue &) = default ;
        PredictiveValue& operator=(PredictiveValue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline PredictiveValue& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
        inline PredictiveValue& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The point in time, in the ISO 8601 standard, in the yyyy-MM-ddTHH:mmZ format.
        shared_ptr<string> time_ {};
        // The number of instances.
        shared_ptr<int32_t> value_ {};
      };

      virtual bool empty() const override { return this->predictiveValue_ == nullptr; };
      // predictiveValue Field Functions 
      bool hasPredictiveValue() const { return this->predictiveValue_ != nullptr;};
      void deletePredictiveValue() { this->predictiveValue_ = nullptr;};
      inline const vector<PredictiveValues::PredictiveValue> & getPredictiveValue() const { DARABONBA_PTR_GET_CONST(predictiveValue_, vector<PredictiveValues::PredictiveValue>) };
      inline vector<PredictiveValues::PredictiveValue> getPredictiveValue() { DARABONBA_PTR_GET(predictiveValue_, vector<PredictiveValues::PredictiveValue>) };
      inline PredictiveValues& setPredictiveValue(const vector<PredictiveValues::PredictiveValue> & predictiveValue) { DARABONBA_PTR_SET_VALUE(predictiveValue_, predictiveValue) };
      inline PredictiveValues& setPredictiveValue(vector<PredictiveValues::PredictiveValue> && predictiveValue) { DARABONBA_PTR_SET_RVALUE(predictiveValue_, predictiveValue) };


    protected:
      shared_ptr<vector<PredictiveValues::PredictiveValue>> predictiveValue_ {};
    };

    virtual bool empty() const override { return this->predictiveValues_ == nullptr
        && this->requestId_ == nullptr; };
    // predictiveValues Field Functions 
    bool hasPredictiveValues() const { return this->predictiveValues_ != nullptr;};
    void deletePredictiveValues() { this->predictiveValues_ = nullptr;};
    inline const QueryPredictiveValueResponseBody::PredictiveValues & getPredictiveValues() const { DARABONBA_PTR_GET_CONST(predictiveValues_, QueryPredictiveValueResponseBody::PredictiveValues) };
    inline QueryPredictiveValueResponseBody::PredictiveValues getPredictiveValues() { DARABONBA_PTR_GET(predictiveValues_, QueryPredictiveValueResponseBody::PredictiveValues) };
    inline QueryPredictiveValueResponseBody& setPredictiveValues(const QueryPredictiveValueResponseBody::PredictiveValues & predictiveValues) { DARABONBA_PTR_SET_VALUE(predictiveValues_, predictiveValues) };
    inline QueryPredictiveValueResponseBody& setPredictiveValues(QueryPredictiveValueResponseBody::PredictiveValues && predictiveValues) { DARABONBA_PTR_SET_RVALUE(predictiveValues_, predictiveValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPredictiveValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of predicted instances in the scaling group.
    shared_ptr<QueryPredictiveValueResponseBody::PredictiveValues> predictiveValues_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
