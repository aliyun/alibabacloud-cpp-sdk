// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSSTATUSRESPONSEBODY_HPP_
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
  class DescribeDDoSStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DDoSStatus, DDoSStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DDoSStatus, DDoSStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDoSStatusResponseBody() = default ;
    DescribeDDoSStatusResponseBody(const DescribeDDoSStatusResponseBody &) = default ;
    DescribeDDoSStatusResponseBody(DescribeDDoSStatusResponseBody &&) = default ;
    DescribeDDoSStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSStatusResponseBody() = default ;
    DescribeDDoSStatusResponseBody& operator=(const DescribeDDoSStatusResponseBody &) = default ;
    DescribeDDoSStatusResponseBody& operator=(DescribeDDoSStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DDoSStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DDoSStatus& obj) { 
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DDoSStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DDoSStatus() = default ;
      DDoSStatus(const DDoSStatus &) = default ;
      DDoSStatus(DDoSStatus &&) = default ;
      DDoSStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DDoSStatus() = default ;
      DDoSStatus& operator=(const DDoSStatus &) = default ;
      DDoSStatus& operator=(DDoSStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventType_ == nullptr
        && this->status_ == nullptr; };
      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline DDoSStatus& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DDoSStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The type of events that are triggered by DDoS attacks. Valid values:
      // 
      // *   defense: traffic scrubbing events.
      // *   blackhole: blackhole filtering events.
      shared_ptr<string> eventType_ {};
      // Indicates whether DDoS attacks occur on specific domain names. Valid value:
      // 
      // *   **doing**: DDoS attacks occur on specific domain names.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DDoSStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // DDoSStatus Field Functions 
    bool hasDDoSStatus() const { return this->DDoSStatus_ != nullptr;};
    void deleteDDoSStatus() { this->DDoSStatus_ = nullptr;};
    inline const vector<DescribeDDoSStatusResponseBody::DDoSStatus> & getDDoSStatus() const { DARABONBA_PTR_GET_CONST(DDoSStatus_, vector<DescribeDDoSStatusResponseBody::DDoSStatus>) };
    inline vector<DescribeDDoSStatusResponseBody::DDoSStatus> getDDoSStatus() { DARABONBA_PTR_GET(DDoSStatus_, vector<DescribeDDoSStatusResponseBody::DDoSStatus>) };
    inline DescribeDDoSStatusResponseBody& setDDoSStatus(const vector<DescribeDDoSStatusResponseBody::DDoSStatus> & dDoSStatus) { DARABONBA_PTR_SET_VALUE(DDoSStatus_, dDoSStatus) };
    inline DescribeDDoSStatusResponseBody& setDDoSStatus(vector<DescribeDDoSStatusResponseBody::DDoSStatus> && dDoSStatus) { DARABONBA_PTR_SET_RVALUE(DDoSStatus_, dDoSStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDoSStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether DDoS attacks occur on specific domain names.
    shared_ptr<vector<DescribeDDoSStatusResponseBody::DDoSStatus>> DDoSStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
