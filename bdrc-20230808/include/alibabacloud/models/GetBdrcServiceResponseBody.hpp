// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBDRCSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBDRCSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class GetBdrcServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBdrcServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBdrcServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBdrcServiceResponseBody() = default ;
    GetBdrcServiceResponseBody(const GetBdrcServiceResponseBody &) = default ;
    GetBdrcServiceResponseBody(GetBdrcServiceResponseBody &&) = default ;
    GetBdrcServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBdrcServiceResponseBody() = default ;
    GetBdrcServiceResponseBody& operator=(const GetBdrcServiceResponseBody &) = default ;
    GetBdrcServiceResponseBody& operator=(GetBdrcServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OpenTime, openTime_);
        DARABONBA_PTR_TO_JSON(ProtectionScoreUpdatedTime, protectionScoreUpdatedTime_);
        DARABONBA_PTR_TO_JSON(ServiceInitializeStatus, serviceInitializeStatus_);
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenTime, openTime_);
        DARABONBA_PTR_FROM_JSON(ProtectionScoreUpdatedTime, protectionScoreUpdatedTime_);
        DARABONBA_PTR_FROM_JSON(ServiceInitializeStatus, serviceInitializeStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
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
      virtual bool empty() const override { return this->openTime_ == nullptr
        && this->protectionScoreUpdatedTime_ == nullptr && this->serviceInitializeStatus_ == nullptr && this->serviceStatus_ == nullptr; };
      // openTime Field Functions 
      bool hasOpenTime() const { return this->openTime_ != nullptr;};
      void deleteOpenTime() { this->openTime_ = nullptr;};
      inline int64_t getOpenTime() const { DARABONBA_PTR_GET_DEFAULT(openTime_, 0L) };
      inline Data& setOpenTime(int64_t openTime) { DARABONBA_PTR_SET_VALUE(openTime_, openTime) };


      // protectionScoreUpdatedTime Field Functions 
      bool hasProtectionScoreUpdatedTime() const { return this->protectionScoreUpdatedTime_ != nullptr;};
      void deleteProtectionScoreUpdatedTime() { this->protectionScoreUpdatedTime_ = nullptr;};
      inline int64_t getProtectionScoreUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(protectionScoreUpdatedTime_, 0L) };
      inline Data& setProtectionScoreUpdatedTime(int64_t protectionScoreUpdatedTime) { DARABONBA_PTR_SET_VALUE(protectionScoreUpdatedTime_, protectionScoreUpdatedTime) };


      // serviceInitializeStatus Field Functions 
      bool hasServiceInitializeStatus() const { return this->serviceInitializeStatus_ != nullptr;};
      void deleteServiceInitializeStatus() { this->serviceInitializeStatus_ = nullptr;};
      inline string getServiceInitializeStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceInitializeStatus_, "") };
      inline Data& setServiceInitializeStatus(string serviceInitializeStatus) { DARABONBA_PTR_SET_VALUE(serviceInitializeStatus_, serviceInitializeStatus) };


      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline Data& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    protected:
      // The time when the service was enabled (UNIX timestamp).
      shared_ptr<int64_t> openTime_ {};
      // The time when the data protection score was updated (UNIX timestamp).
      shared_ptr<int64_t> protectionScoreUpdatedTime_ {};
      // The initialization status of the service.
      shared_ptr<string> serviceInitializeStatus_ {};
      // The enabling status of the service.
      shared_ptr<string> serviceStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBdrcServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBdrcServiceResponseBody::Data) };
    inline GetBdrcServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBdrcServiceResponseBody::Data) };
    inline GetBdrcServiceResponseBody& setData(const GetBdrcServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBdrcServiceResponseBody& setData(GetBdrcServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBdrcServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data that is returned if the call is successful.
    shared_ptr<GetBdrcServiceResponseBody::Data> data_ {};
    // The unique identity of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
