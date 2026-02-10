// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMMACHINECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALARMMACHINECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAlarmMachineCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmMachineCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmMachineCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAlarmMachineCountResponseBody() = default ;
    GetAlarmMachineCountResponseBody(const GetAlarmMachineCountResponseBody &) = default ;
    GetAlarmMachineCountResponseBody(GetAlarmMachineCountResponseBody &&) = default ;
    GetAlarmMachineCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmMachineCountResponseBody() = default ;
    GetAlarmMachineCountResponseBody& operator=(const GetAlarmMachineCountResponseBody &) = default ;
    GetAlarmMachineCountResponseBody& operator=(GetAlarmMachineCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MachineCount, machineCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MachineCount, machineCount_);
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
      virtual bool empty() const override { return this->machineCount_ == nullptr; };
      // machineCount Field Functions 
      bool hasMachineCount() const { return this->machineCount_ != nullptr;};
      void deleteMachineCount() { this->machineCount_ = nullptr;};
      inline int32_t getMachineCount() const { DARABONBA_PTR_GET_DEFAULT(machineCount_, 0) };
      inline Data& setMachineCount(int32_t machineCount) { DARABONBA_PTR_SET_VALUE(machineCount_, machineCount) };


    protected:
      // The number of servers on which alerts are generated.
      shared_ptr<int32_t> machineCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlarmMachineCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlarmMachineCountResponseBody::Data) };
    inline GetAlarmMachineCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlarmMachineCountResponseBody::Data) };
    inline GetAlarmMachineCountResponseBody& setData(const GetAlarmMachineCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlarmMachineCountResponseBody& setData(GetAlarmMachineCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlarmMachineCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GetAlarmMachineCountResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
