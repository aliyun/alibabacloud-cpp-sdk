// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyServerlessAuthToMachineResponseBodyData.hpp>
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
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyServerlessAuthToMachineResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyServerlessAuthToMachineResponseBodyData) };
    inline ModifyServerlessAuthToMachineResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyServerlessAuthToMachineResponseBodyData) };
    inline ModifyServerlessAuthToMachineResponseBody& setData(const ModifyServerlessAuthToMachineResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyServerlessAuthToMachineResponseBody& setData(ModifyServerlessAuthToMachineResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyServerlessAuthToMachineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the returned data.
    std::shared_ptr<ModifyServerlessAuthToMachineResponseBodyData> data_ = nullptr;
    // 本次调用请求的ID，是由阿里云为该请求生成的唯一标识符，可用于排查和定位问题。
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
