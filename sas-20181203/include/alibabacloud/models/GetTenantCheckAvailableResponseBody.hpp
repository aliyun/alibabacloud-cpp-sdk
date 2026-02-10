// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENANTCHECKAVAILABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTENANTCHECKAVAILABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetTenantCheckAvailableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTenantCheckAvailableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTenantCheckAvailableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTenantCheckAvailableResponseBody() = default ;
    GetTenantCheckAvailableResponseBody(const GetTenantCheckAvailableResponseBody &) = default ;
    GetTenantCheckAvailableResponseBody(GetTenantCheckAvailableResponseBody &&) = default ;
    GetTenantCheckAvailableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTenantCheckAvailableResponseBody() = default ;
    GetTenantCheckAvailableResponseBody& operator=(const GetTenantCheckAvailableResponseBody &) = default ;
    GetTenantCheckAvailableResponseBody& operator=(GetTenantCheckAvailableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextScanTime, nextScanTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextScanTime, nextScanTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->nextScanTime_ == nullptr
        && this->status_ == nullptr; };
      // nextScanTime Field Functions 
      bool hasNextScanTime() const { return this->nextScanTime_ != nullptr;};
      void deleteNextScanTime() { this->nextScanTime_ = nullptr;};
      inline int64_t getNextScanTime() const { DARABONBA_PTR_GET_DEFAULT(nextScanTime_, 0L) };
      inline Data& setNextScanTime(int64_t nextScanTime) { DARABONBA_PTR_SET_VALUE(nextScanTime_, nextScanTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The timestamp when you can submit a quick scan task.
      shared_ptr<int64_t> nextScanTime_ {};
      // The status of the quick scan task. Enumerated values:
      // 
      // *   0: You can submit a quick scan task.
      // *   1: The current task is not complete. You cannot submit a quick scan task.
      // *   2: The free quota for this week is exhausted. You must wait for the next free scan period.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTenantCheckAvailableResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTenantCheckAvailableResponseBody::Data) };
    inline GetTenantCheckAvailableResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTenantCheckAvailableResponseBody::Data) };
    inline GetTenantCheckAvailableResponseBody& setData(const GetTenantCheckAvailableResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTenantCheckAvailableResponseBody& setData(GetTenantCheckAvailableResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTenantCheckAvailableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetTenantCheckAvailableResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
