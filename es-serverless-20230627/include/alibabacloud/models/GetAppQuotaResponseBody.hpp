// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetAppQuotaResponseBody() = default ;
    GetAppQuotaResponseBody(const GetAppQuotaResponseBody &) = default ;
    GetAppQuotaResponseBody(GetAppQuotaResponseBody &&) = default ;
    GetAppQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppQuotaResponseBody() = default ;
    GetAppQuotaResponseBody& operator=(const GetAppQuotaResponseBody &) = default ;
    GetAppQuotaResponseBody& operator=(GetAppQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(limiterInfo, limiterInfo_);
        DARABONBA_ANY_TO_JSON(quotaInfo, quotaInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(limiterInfo, limiterInfo_);
        DARABONBA_ANY_FROM_JSON(quotaInfo, quotaInfo_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LimiterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LimiterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(limiters, limiters_);
        };
        friend void from_json(const Darabonba::Json& j, LimiterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(limiters, limiters_);
        };
        LimiterInfo() = default ;
        LimiterInfo(const LimiterInfo &) = default ;
        LimiterInfo(LimiterInfo &&) = default ;
        LimiterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LimiterInfo() = default ;
        LimiterInfo& operator=(const LimiterInfo &) = default ;
        LimiterInfo& operator=(LimiterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Limiters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Limiters& obj) { 
            DARABONBA_PTR_TO_JSON(immutable, immutable_);
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Limiters& obj) { 
            DARABONBA_PTR_FROM_JSON(immutable, immutable_);
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Limiters() = default ;
          Limiters(const Limiters &) = default ;
          Limiters(Limiters &&) = default ;
          Limiters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Limiters() = default ;
          Limiters& operator=(const Limiters &) = default ;
          Limiters& operator=(Limiters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->immutable_ == nullptr
        && this->maxValue_ == nullptr && this->minValue_ == nullptr && this->type_ == nullptr; };
          // immutable Field Functions 
          bool hasImmutable() const { return this->immutable_ != nullptr;};
          void deleteImmutable() { this->immutable_ = nullptr;};
          inline bool getImmutable() const { DARABONBA_PTR_GET_DEFAULT(immutable_, false) };
          inline Limiters& setImmutable(bool immutable) { DARABONBA_PTR_SET_VALUE(immutable_, immutable) };


          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline int64_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0L) };
          inline Limiters& setMaxValue(int64_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline int64_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0L) };
          inline Limiters& setMinValue(int64_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Limiters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<bool> immutable_ {};
          shared_ptr<int64_t> maxValue_ {};
          shared_ptr<int64_t> minValue_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->limiters_ == nullptr; };
        // limiters Field Functions 
        bool hasLimiters() const { return this->limiters_ != nullptr;};
        void deleteLimiters() { this->limiters_ = nullptr;};
        inline const vector<LimiterInfo::Limiters> & getLimiters() const { DARABONBA_PTR_GET_CONST(limiters_, vector<LimiterInfo::Limiters>) };
        inline vector<LimiterInfo::Limiters> getLimiters() { DARABONBA_PTR_GET(limiters_, vector<LimiterInfo::Limiters>) };
        inline LimiterInfo& setLimiters(const vector<LimiterInfo::Limiters> & limiters) { DARABONBA_PTR_SET_VALUE(limiters_, limiters) };
        inline LimiterInfo& setLimiters(vector<LimiterInfo::Limiters> && limiters) { DARABONBA_PTR_SET_RVALUE(limiters_, limiters) };


      protected:
        shared_ptr<vector<LimiterInfo::Limiters>> limiters_ {};
      };

      virtual bool empty() const override { return this->limiterInfo_ == nullptr
        && this->quotaInfo_ == nullptr; };
      // limiterInfo Field Functions 
      bool hasLimiterInfo() const { return this->limiterInfo_ != nullptr;};
      void deleteLimiterInfo() { this->limiterInfo_ = nullptr;};
      inline const Result::LimiterInfo & getLimiterInfo() const { DARABONBA_PTR_GET_CONST(limiterInfo_, Result::LimiterInfo) };
      inline Result::LimiterInfo getLimiterInfo() { DARABONBA_PTR_GET(limiterInfo_, Result::LimiterInfo) };
      inline Result& setLimiterInfo(const Result::LimiterInfo & limiterInfo) { DARABONBA_PTR_SET_VALUE(limiterInfo_, limiterInfo) };
      inline Result& setLimiterInfo(Result::LimiterInfo && limiterInfo) { DARABONBA_PTR_SET_RVALUE(limiterInfo_, limiterInfo) };


      // quotaInfo Field Functions 
      bool hasQuotaInfo() const { return this->quotaInfo_ != nullptr;};
      void deleteQuotaInfo() { this->quotaInfo_ = nullptr;};
      inline       const Darabonba::Json & getQuotaInfo() const { DARABONBA_GET(quotaInfo_) };
      Darabonba::Json & getQuotaInfo() { DARABONBA_GET(quotaInfo_) };
      inline Result& setQuotaInfo(const Darabonba::Json & quotaInfo) { DARABONBA_SET_VALUE(quotaInfo_, quotaInfo) };
      inline Result& setQuotaInfo(Darabonba::Json && quotaInfo) { DARABONBA_SET_RVALUE(quotaInfo_, quotaInfo) };


    protected:
      shared_ptr<Result::LimiterInfo> limiterInfo_ {};
      Darabonba::Json quotaInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetAppQuotaResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetAppQuotaResponseBody::Result) };
    inline GetAppQuotaResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetAppQuotaResponseBody::Result) };
    inline GetAppQuotaResponseBody& setResult(const GetAppQuotaResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetAppQuotaResponseBody& setResult(GetAppQuotaResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetAppQuotaResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
