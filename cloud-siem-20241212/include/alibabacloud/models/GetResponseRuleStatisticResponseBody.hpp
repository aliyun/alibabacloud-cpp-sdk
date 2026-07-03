// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESPONSERULESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESPONSERULESTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetResponseRuleStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResponseRuleStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseStatistic, responseStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, GetResponseRuleStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseStatistic, responseStatistic_);
    };
    GetResponseRuleStatisticResponseBody() = default ;
    GetResponseRuleStatisticResponseBody(const GetResponseRuleStatisticResponseBody &) = default ;
    GetResponseRuleStatisticResponseBody(GetResponseRuleStatisticResponseBody &&) = default ;
    GetResponseRuleStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResponseRuleStatisticResponseBody() = default ;
    GetResponseRuleStatisticResponseBody& operator=(const GetResponseRuleStatisticResponseBody &) = default ;
    GetResponseRuleStatisticResponseBody& operator=(GetResponseRuleStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseStatistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseStatistic& obj) { 
        DARABONBA_PTR_TO_JSON(ResponseRuleAllCount, responseRuleAllCount_);
        DARABONBA_PTR_TO_JSON(ResponseRuleOnlineCount, responseRuleOnlineCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseStatistic& obj) { 
        DARABONBA_PTR_FROM_JSON(ResponseRuleAllCount, responseRuleAllCount_);
        DARABONBA_PTR_FROM_JSON(ResponseRuleOnlineCount, responseRuleOnlineCount_);
      };
      ResponseStatistic() = default ;
      ResponseStatistic(const ResponseStatistic &) = default ;
      ResponseStatistic(ResponseStatistic &&) = default ;
      ResponseStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseStatistic() = default ;
      ResponseStatistic& operator=(const ResponseStatistic &) = default ;
      ResponseStatistic& operator=(ResponseStatistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->responseRuleAllCount_ == nullptr
        && this->responseRuleOnlineCount_ == nullptr; };
      // responseRuleAllCount Field Functions 
      bool hasResponseRuleAllCount() const { return this->responseRuleAllCount_ != nullptr;};
      void deleteResponseRuleAllCount() { this->responseRuleAllCount_ = nullptr;};
      inline int32_t getResponseRuleAllCount() const { DARABONBA_PTR_GET_DEFAULT(responseRuleAllCount_, 0) };
      inline ResponseStatistic& setResponseRuleAllCount(int32_t responseRuleAllCount) { DARABONBA_PTR_SET_VALUE(responseRuleAllCount_, responseRuleAllCount) };


      // responseRuleOnlineCount Field Functions 
      bool hasResponseRuleOnlineCount() const { return this->responseRuleOnlineCount_ != nullptr;};
      void deleteResponseRuleOnlineCount() { this->responseRuleOnlineCount_ = nullptr;};
      inline int32_t getResponseRuleOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(responseRuleOnlineCount_, 0) };
      inline ResponseStatistic& setResponseRuleOnlineCount(int32_t responseRuleOnlineCount) { DARABONBA_PTR_SET_VALUE(responseRuleOnlineCount_, responseRuleOnlineCount) };


    protected:
      // The total number of automated response rules.
      shared_ptr<int32_t> responseRuleAllCount_ {};
      // The number of online automated response rules.
      shared_ptr<int32_t> responseRuleOnlineCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->responseStatistic_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResponseRuleStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseStatistic Field Functions 
    bool hasResponseStatistic() const { return this->responseStatistic_ != nullptr;};
    void deleteResponseStatistic() { this->responseStatistic_ = nullptr;};
    inline const GetResponseRuleStatisticResponseBody::ResponseStatistic & getResponseStatistic() const { DARABONBA_PTR_GET_CONST(responseStatistic_, GetResponseRuleStatisticResponseBody::ResponseStatistic) };
    inline GetResponseRuleStatisticResponseBody::ResponseStatistic getResponseStatistic() { DARABONBA_PTR_GET(responseStatistic_, GetResponseRuleStatisticResponseBody::ResponseStatistic) };
    inline GetResponseRuleStatisticResponseBody& setResponseStatistic(const GetResponseRuleStatisticResponseBody::ResponseStatistic & responseStatistic) { DARABONBA_PTR_SET_VALUE(responseStatistic_, responseStatistic) };
    inline GetResponseRuleStatisticResponseBody& setResponseStatistic(GetResponseRuleStatisticResponseBody::ResponseStatistic && responseStatistic) { DARABONBA_PTR_SET_RVALUE(responseStatistic_, responseStatistic) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics of automated response rules.
    shared_ptr<GetResponseRuleStatisticResponseBody::ResponseStatistic> responseStatistic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
