// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINRECORDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINRECORDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SetDomainRecordStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainRecordStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainRecordStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetDomainRecordStatusResponseBody() = default ;
    SetDomainRecordStatusResponseBody(const SetDomainRecordStatusResponseBody &) = default ;
    SetDomainRecordStatusResponseBody(SetDomainRecordStatusResponseBody &&) = default ;
    SetDomainRecordStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainRecordStatusResponseBody() = default ;
    SetDomainRecordStatusResponseBody& operator=(const SetDomainRecordStatusResponseBody &) = default ;
    SetDomainRecordStatusResponseBody& operator=(SetDomainRecordStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline SetDomainRecordStatusResponseBody& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDomainRecordStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetDomainRecordStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the DNS record.
    shared_ptr<string> recordId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the DNS record.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
