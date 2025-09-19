// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPAUTOCONFIGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPAUTOCONFIGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBackupAutoConfigStatusResponseBodyData.hpp>
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
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBackupAutoConfigStatusResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetBackupAutoConfigStatusResponseBodyData) };
    inline GetBackupAutoConfigStatusResponseBodyData data() { DARABONBA_PTR_GET(data_, GetBackupAutoConfigStatusResponseBodyData) };
    inline GetBackupAutoConfigStatusResponseBody& setData(const GetBackupAutoConfigStatusResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBackupAutoConfigStatusResponseBody& setData(GetBackupAutoConfigStatusResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupAutoConfigStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetBackupAutoConfigStatusResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
