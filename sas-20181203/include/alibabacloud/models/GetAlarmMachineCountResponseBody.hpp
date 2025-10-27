// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMMACHINECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALARMMACHINECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlarmMachineCountResponseBodyData.hpp>
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
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlarmMachineCountResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAlarmMachineCountResponseBodyData) };
    inline GetAlarmMachineCountResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAlarmMachineCountResponseBodyData) };
    inline GetAlarmMachineCountResponseBody& setData(const GetAlarmMachineCountResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlarmMachineCountResponseBody& setData(GetAlarmMachineCountResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlarmMachineCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GetAlarmMachineCountResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
