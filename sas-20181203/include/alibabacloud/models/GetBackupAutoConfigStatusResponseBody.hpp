// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPAUTOCONFIGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPAUTOCONFIGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBackupAutoConfigStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupAutoConfigStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupAutoConfigStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBackupAutoConfigStatusResponseBody() = default ;
    GetBackupAutoConfigStatusResponseBody(const GetBackupAutoConfigStatusResponseBody &) = default ;
    GetBackupAutoConfigStatusResponseBody(GetBackupAutoConfigStatusResponseBody &&) = default ;
    GetBackupAutoConfigStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupAutoConfigStatusResponseBody() = default ;
    GetBackupAutoConfigStatusResponseBody& operator=(const GetBackupAutoConfigStatusResponseBody &) = default ;
    GetBackupAutoConfigStatusResponseBody& operator=(GetBackupAutoConfigStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanConfigAuto, canConfigAuto_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanConfigAuto, canConfigAuto_);
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
      virtual bool empty() const override { return this->canConfigAuto_ == nullptr; };
      // canConfigAuto Field Functions 
      bool hasCanConfigAuto() const { return this->canConfigAuto_ != nullptr;};
      void deleteCanConfigAuto() { this->canConfigAuto_ = nullptr;};
      inline bool getCanConfigAuto() const { DARABONBA_PTR_GET_DEFAULT(canConfigAuto_, false) };
      inline Data& setCanConfigAuto(bool canConfigAuto) { DARABONBA_PTR_SET_VALUE(canConfigAuto_, canConfigAuto) };


    protected:
      // Indicates whether the anti-ransomware policy for servers can be automatically configured by the managed anti-ransomware feature. Valid values:
      // 
      // *   **false**
      // *   **true**
      shared_ptr<bool> canConfigAuto_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBackupAutoConfigStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBackupAutoConfigStatusResponseBody::Data) };
    inline GetBackupAutoConfigStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBackupAutoConfigStatusResponseBody::Data) };
    inline GetBackupAutoConfigStatusResponseBody& setData(const GetBackupAutoConfigStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBackupAutoConfigStatusResponseBody& setData(GetBackupAutoConfigStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupAutoConfigStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetBackupAutoConfigStatusResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
