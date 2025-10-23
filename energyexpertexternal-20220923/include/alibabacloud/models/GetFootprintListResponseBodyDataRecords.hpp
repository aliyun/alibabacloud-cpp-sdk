// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetFootprintListResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFootprintListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(authStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(checkEndTime, checkEndTime_);
      DARABONBA_PTR_TO_JSON(checkStartTime, checkStartTime_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isDemoModel, isDemoModel_);
      DARABONBA_PTR_TO_JSON(lifeCycle, lifeCycle_);
      DARABONBA_PTR_TO_JSON(lifeCycleType, lifeCycleType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetFootprintListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(authStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(checkEndTime, checkEndTime_);
      DARABONBA_PTR_FROM_JSON(checkStartTime, checkStartTime_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isDemoModel, isDemoModel_);
      DARABONBA_PTR_FROM_JSON(lifeCycle, lifeCycle_);
      DARABONBA_PTR_FROM_JSON(lifeCycleType, lifeCycleType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetFootprintListResponseBodyDataRecords() = default ;
    GetFootprintListResponseBodyDataRecords(const GetFootprintListResponseBodyDataRecords &) = default ;
    GetFootprintListResponseBodyDataRecords(GetFootprintListResponseBodyDataRecords &&) = default ;
    GetFootprintListResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFootprintListResponseBodyDataRecords() = default ;
    GetFootprintListResponseBodyDataRecords& operator=(const GetFootprintListResponseBodyDataRecords &) = default ;
    GetFootprintListResponseBodyDataRecords& operator=(GetFootprintListResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->authStatus_ == nullptr && return this->checkEndTime_ == nullptr && return this->checkStartTime_ == nullptr && return this->code_ == nullptr && return this->createdBy_ == nullptr
        && return this->id_ == nullptr && return this->isDemoModel_ == nullptr && return this->lifeCycle_ == nullptr && return this->lifeCycleType_ == nullptr && return this->name_ == nullptr
        && return this->type_ == nullptr && return this->unit_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline GetFootprintListResponseBodyDataRecords& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline int64_t authStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, 0L) };
    inline GetFootprintListResponseBodyDataRecords& setAuthStatus(int64_t authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // checkEndTime Field Functions 
    bool hasCheckEndTime() const { return this->checkEndTime_ != nullptr;};
    void deleteCheckEndTime() { this->checkEndTime_ = nullptr;};
    inline string checkEndTime() const { DARABONBA_PTR_GET_DEFAULT(checkEndTime_, "") };
    inline GetFootprintListResponseBodyDataRecords& setCheckEndTime(string checkEndTime) { DARABONBA_PTR_SET_VALUE(checkEndTime_, checkEndTime) };


    // checkStartTime Field Functions 
    bool hasCheckStartTime() const { return this->checkStartTime_ != nullptr;};
    void deleteCheckStartTime() { this->checkStartTime_ = nullptr;};
    inline string checkStartTime() const { DARABONBA_PTR_GET_DEFAULT(checkStartTime_, "") };
    inline GetFootprintListResponseBodyDataRecords& setCheckStartTime(string checkStartTime) { DARABONBA_PTR_SET_VALUE(checkStartTime_, checkStartTime) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFootprintListResponseBodyDataRecords& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline GetFootprintListResponseBodyDataRecords& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetFootprintListResponseBodyDataRecords& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDemoModel Field Functions 
    bool hasIsDemoModel() const { return this->isDemoModel_ != nullptr;};
    void deleteIsDemoModel() { this->isDemoModel_ = nullptr;};
    inline int64_t isDemoModel() const { DARABONBA_PTR_GET_DEFAULT(isDemoModel_, 0L) };
    inline GetFootprintListResponseBodyDataRecords& setIsDemoModel(int64_t isDemoModel) { DARABONBA_PTR_SET_VALUE(isDemoModel_, isDemoModel) };


    // lifeCycle Field Functions 
    bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
    void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
    inline string lifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, "") };
    inline GetFootprintListResponseBodyDataRecords& setLifeCycle(string lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


    // lifeCycleType Field Functions 
    bool hasLifeCycleType() const { return this->lifeCycleType_ != nullptr;};
    void deleteLifeCycleType() { this->lifeCycleType_ = nullptr;};
    inline int64_t lifeCycleType() const { DARABONBA_PTR_GET_DEFAULT(lifeCycleType_, 0L) };
    inline GetFootprintListResponseBodyDataRecords& setLifeCycleType(int64_t lifeCycleType) { DARABONBA_PTR_SET_VALUE(lifeCycleType_, lifeCycleType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetFootprintListResponseBodyDataRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetFootprintListResponseBodyDataRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetFootprintListResponseBodyDataRecords& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The amount of the product.
    std::shared_ptr<double> amount_ = nullptr;
    // Authentication status enumeration value, please refer to [link](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
    std::shared_ptr<int64_t> authStatus_ = nullptr;
    // Calculation end time.
    std::shared_ptr<string> checkEndTime_ = nullptr;
    // Calculation start time.
    std::shared_ptr<string> checkStartTime_ = nullptr;
    // The enterprise code.
    std::shared_ptr<string> code_ = nullptr;
    // The user who created it.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The product ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the demo model is a built-in model. A value of 1 indicates a true value and a value of 0 indicates a false value.
    std::shared_ptr<int64_t> isDemoModel_ = nullptr;
    // The literal expression corresponding to lifeCycleType, `From Cradle to Gate` and `From Cradle to Grave`.
    std::shared_ptr<string> lifeCycle_ = nullptr;
    // 1 is `From Cradle to Gate`, and 2 is `From Cradle to Grave`.
    std::shared_ptr<int64_t> lifeCycleType_ = nullptr;
    // The product name.
    std::shared_ptr<string> name_ = nullptr;
    // Product category enumeration value, please refer to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
    std::shared_ptr<string> type_ = nullptr;
    // Unit enumeration value. Please refer to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
