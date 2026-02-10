// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyServerlessAuthToMachineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyServerlessAuthToMachineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyServerlessAuthToMachineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyServerlessAuthToMachineResponseBody() = default ;
    ModifyServerlessAuthToMachineResponseBody(const ModifyServerlessAuthToMachineResponseBody &) = default ;
    ModifyServerlessAuthToMachineResponseBody(ModifyServerlessAuthToMachineResponseBody &&) = default ;
    ModifyServerlessAuthToMachineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyServerlessAuthToMachineResponseBody() = default ;
    ModifyServerlessAuthToMachineResponseBody& operator=(const ModifyServerlessAuthToMachineResponseBody &) = default ;
    ModifyServerlessAuthToMachineResponseBody& operator=(ModifyServerlessAuthToMachineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
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
      virtual bool empty() const override { return this->resultCode_ == nullptr; };
      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline int32_t getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
      inline Data& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    protected:
      // Result code. Values:
      // - **0**: Success
      // - **1**: Parameter error
      shared_ptr<int32_t> resultCode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyServerlessAuthToMachineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyServerlessAuthToMachineResponseBody::Data) };
    inline ModifyServerlessAuthToMachineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyServerlessAuthToMachineResponseBody::Data) };
    inline ModifyServerlessAuthToMachineResponseBody& setData(const ModifyServerlessAuthToMachineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyServerlessAuthToMachineResponseBody& setData(ModifyServerlessAuthToMachineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyServerlessAuthToMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the returned data.
    shared_ptr<ModifyServerlessAuthToMachineResponseBody::Data> data_ {};
    // 本次调用请求的ID，是由阿里云为该请求生成的唯一标识符，可用于排查和定位问题。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
