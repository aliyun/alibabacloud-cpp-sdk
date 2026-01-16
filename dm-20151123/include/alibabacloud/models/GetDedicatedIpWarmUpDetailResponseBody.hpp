// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDedicatedIpWarmUpDetailResponseBody() = default ;
    GetDedicatedIpWarmUpDetailResponseBody(const GetDedicatedIpWarmUpDetailResponseBody &) = default ;
    GetDedicatedIpWarmUpDetailResponseBody(GetDedicatedIpWarmUpDetailResponseBody &&) = default ;
    GetDedicatedIpWarmUpDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpDetailResponseBody() = default ;
    GetDedicatedIpWarmUpDetailResponseBody& operator=(const GetDedicatedIpWarmUpDetailResponseBody &) = default ;
    GetDedicatedIpWarmUpDetailResponseBody& operator=(GetDedicatedIpWarmUpDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Detail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Detail& obj) { 
        DARABONBA_PTR_TO_JSON(DayMark, dayMark_);
        DARABONBA_PTR_TO_JSON(DeliverCounts, deliverCounts_);
        DARABONBA_PTR_TO_JSON(Esp, esp_);
        DARABONBA_PTR_TO_JSON(SendCounts, sendCounts_);
      };
      friend void from_json(const Darabonba::Json& j, Detail& obj) { 
        DARABONBA_PTR_FROM_JSON(DayMark, dayMark_);
        DARABONBA_PTR_FROM_JSON(DeliverCounts, deliverCounts_);
        DARABONBA_PTR_FROM_JSON(Esp, esp_);
        DARABONBA_PTR_FROM_JSON(SendCounts, sendCounts_);
      };
      Detail() = default ;
      Detail(const Detail &) = default ;
      Detail(Detail &&) = default ;
      Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Detail() = default ;
      Detail& operator=(const Detail &) = default ;
      Detail& operator=(Detail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dayMark_ == nullptr
        && this->deliverCounts_ == nullptr && this->esp_ == nullptr && this->sendCounts_ == nullptr; };
      // dayMark Field Functions 
      bool hasDayMark() const { return this->dayMark_ != nullptr;};
      void deleteDayMark() { this->dayMark_ = nullptr;};
      inline int64_t getDayMark() const { DARABONBA_PTR_GET_DEFAULT(dayMark_, 0L) };
      inline Detail& setDayMark(int64_t dayMark) { DARABONBA_PTR_SET_VALUE(dayMark_, dayMark) };


      // deliverCounts Field Functions 
      bool hasDeliverCounts() const { return this->deliverCounts_ != nullptr;};
      void deleteDeliverCounts() { this->deliverCounts_ = nullptr;};
      inline int64_t getDeliverCounts() const { DARABONBA_PTR_GET_DEFAULT(deliverCounts_, 0L) };
      inline Detail& setDeliverCounts(int64_t deliverCounts) { DARABONBA_PTR_SET_VALUE(deliverCounts_, deliverCounts) };


      // esp Field Functions 
      bool hasEsp() const { return this->esp_ != nullptr;};
      void deleteEsp() { this->esp_ = nullptr;};
      inline string getEsp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
      inline Detail& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


      // sendCounts Field Functions 
      bool hasSendCounts() const { return this->sendCounts_ != nullptr;};
      void deleteSendCounts() { this->sendCounts_ = nullptr;};
      inline int64_t getSendCounts() const { DARABONBA_PTR_GET_DEFAULT(sendCounts_, 0L) };
      inline Detail& setSendCounts(int64_t sendCounts) { DARABONBA_PTR_SET_VALUE(sendCounts_, sendCounts) };


    protected:
      shared_ptr<int64_t> dayMark_ {};
      shared_ptr<int64_t> deliverCounts_ {};
      shared_ptr<string> esp_ {};
      shared_ptr<int64_t> sendCounts_ {};
    };

    virtual bool empty() const override { return this->detail_ == nullptr
        && this->requestId_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<GetDedicatedIpWarmUpDetailResponseBody::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<GetDedicatedIpWarmUpDetailResponseBody::Detail>) };
    inline vector<GetDedicatedIpWarmUpDetailResponseBody::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<GetDedicatedIpWarmUpDetailResponseBody::Detail>) };
    inline GetDedicatedIpWarmUpDetailResponseBody& setDetail(const vector<GetDedicatedIpWarmUpDetailResponseBody::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline GetDedicatedIpWarmUpDetailResponseBody& setDetail(vector<GetDedicatedIpWarmUpDetailResponseBody::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDedicatedIpWarmUpDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetDedicatedIpWarmUpDetailResponseBody::Detail>> detail_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
