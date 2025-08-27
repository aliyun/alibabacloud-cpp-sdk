// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEINSURANCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODYMODULEINSURANCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderQueryResponseBodyModuleInsuranceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBodyModuleInsuranceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(insurance_no, insuranceNo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBodyModuleInsuranceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(insurance_no, insuranceNo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    FlightOrderQueryResponseBodyModuleInsuranceInfoList() = default ;
    FlightOrderQueryResponseBodyModuleInsuranceInfoList(const FlightOrderQueryResponseBodyModuleInsuranceInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleInsuranceInfoList(FlightOrderQueryResponseBodyModuleInsuranceInfoList &&) = default ;
    FlightOrderQueryResponseBodyModuleInsuranceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBodyModuleInsuranceInfoList() = default ;
    FlightOrderQueryResponseBodyModuleInsuranceInfoList& operator=(const FlightOrderQueryResponseBodyModuleInsuranceInfoList &) = default ;
    FlightOrderQueryResponseBodyModuleInsuranceInfoList& operator=(FlightOrderQueryResponseBodyModuleInsuranceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->insuranceNo_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline FlightOrderQueryResponseBodyModuleInsuranceInfoList& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // insuranceNo Field Functions 
    bool hasInsuranceNo() const { return this->insuranceNo_ != nullptr;};
    void deleteInsuranceNo() { this->insuranceNo_ = nullptr;};
    inline string insuranceNo() const { DARABONBA_PTR_GET_DEFAULT(insuranceNo_, "") };
    inline FlightOrderQueryResponseBodyModuleInsuranceInfoList& setInsuranceNo(string insuranceNo) { DARABONBA_PTR_SET_VALUE(insuranceNo_, insuranceNo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlightOrderQueryResponseBodyModuleInsuranceInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderQueryResponseBodyModuleInsuranceInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FlightOrderQueryResponseBodyModuleInsuranceInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<double> amount_ = nullptr;
    std::shared_ptr<string> insuranceNo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
