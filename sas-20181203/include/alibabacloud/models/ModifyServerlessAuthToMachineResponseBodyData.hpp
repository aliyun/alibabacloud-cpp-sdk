// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyServerlessAuthToMachineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyServerlessAuthToMachineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyServerlessAuthToMachineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
    };
    ModifyServerlessAuthToMachineResponseBodyData() = default ;
    ModifyServerlessAuthToMachineResponseBodyData(const ModifyServerlessAuthToMachineResponseBodyData &) = default ;
    ModifyServerlessAuthToMachineResponseBodyData(ModifyServerlessAuthToMachineResponseBodyData &&) = default ;
    ModifyServerlessAuthToMachineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyServerlessAuthToMachineResponseBodyData() = default ;
    ModifyServerlessAuthToMachineResponseBodyData& operator=(const ModifyServerlessAuthToMachineResponseBodyData &) = default ;
    ModifyServerlessAuthToMachineResponseBodyData& operator=(ModifyServerlessAuthToMachineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultCode_ != nullptr; };
    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline int32_t resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
    inline ModifyServerlessAuthToMachineResponseBodyData& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


  protected:
    // Result code. Values:
    // - **0**: Success
    // - **1**: Parameter error
    std::shared_ptr<int32_t> resultCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
