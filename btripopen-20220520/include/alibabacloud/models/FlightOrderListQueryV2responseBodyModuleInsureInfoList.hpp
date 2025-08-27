// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEINSUREINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEINSUREINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleInsureInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(insure_id, insureId_);
      DARABONBA_PTR_TO_JSON(insure_order_amount, insureOrderAmount_);
      DARABONBA_PTR_TO_JSON(insure_price, insurePrice_);
      DARABONBA_PTR_TO_JSON(insure_type, insureType_);
      DARABONBA_PTR_TO_JSON(name_list, nameList_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(insure_id, insureId_);
      DARABONBA_PTR_FROM_JSON(insure_order_amount, insureOrderAmount_);
      DARABONBA_PTR_FROM_JSON(insure_price, insurePrice_);
      DARABONBA_PTR_FROM_JSON(insure_type, insureType_);
      DARABONBA_PTR_FROM_JSON(name_list, nameList_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    FlightOrderListQueryV2ResponseBodyModuleInsureInfoList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleInsureInfoList(const FlightOrderListQueryV2ResponseBodyModuleInsureInfoList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleInsureInfoList(FlightOrderListQueryV2ResponseBodyModuleInsureInfoList &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleInsureInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleInsureInfoList() = default ;
    FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& operator=(const FlightOrderListQueryV2ResponseBodyModuleInsureInfoList &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& operator=(FlightOrderListQueryV2ResponseBodyModuleInsureInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insureId_ != nullptr
        && this->insureOrderAmount_ != nullptr && this->insurePrice_ != nullptr && this->insureType_ != nullptr && this->nameList_ != nullptr && this->number_ != nullptr
        && this->status_ != nullptr; };
    // insureId Field Functions 
    bool hasInsureId() const { return this->insureId_ != nullptr;};
    void deleteInsureId() { this->insureId_ = nullptr;};
    inline string insureId() const { DARABONBA_PTR_GET_DEFAULT(insureId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setInsureId(string insureId) { DARABONBA_PTR_SET_VALUE(insureId_, insureId) };


    // insureOrderAmount Field Functions 
    bool hasInsureOrderAmount() const { return this->insureOrderAmount_ != nullptr;};
    void deleteInsureOrderAmount() { this->insureOrderAmount_ = nullptr;};
    inline double insureOrderAmount() const { DARABONBA_PTR_GET_DEFAULT(insureOrderAmount_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setInsureOrderAmount(double insureOrderAmount) { DARABONBA_PTR_SET_VALUE(insureOrderAmount_, insureOrderAmount) };


    // insurePrice Field Functions 
    bool hasInsurePrice() const { return this->insurePrice_ != nullptr;};
    void deleteInsurePrice() { this->insurePrice_ = nullptr;};
    inline double insurePrice() const { DARABONBA_PTR_GET_DEFAULT(insurePrice_, 0.0) };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setInsurePrice(double insurePrice) { DARABONBA_PTR_SET_VALUE(insurePrice_, insurePrice) };


    // insureType Field Functions 
    bool hasInsureType() const { return this->insureType_ != nullptr;};
    void deleteInsureType() { this->insureType_ = nullptr;};
    inline string insureType() const { DARABONBA_PTR_GET_DEFAULT(insureType_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setInsureType(string insureType) { DARABONBA_PTR_SET_VALUE(insureType_, insureType) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const vector<string> & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
    inline vector<string> nameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline int32_t number() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FlightOrderListQueryV2ResponseBodyModuleInsureInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> insureId_ = nullptr;
    std::shared_ptr<double> insureOrderAmount_ = nullptr;
    std::shared_ptr<double> insurePrice_ = nullptr;
    std::shared_ptr<string> insureType_ = nullptr;
    std::shared_ptr<vector<string>> nameList_ = nullptr;
    std::shared_ptr<int32_t> number_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
