// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENSSALECONDITIONCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENSSALECONDITIONCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteEnsSaleConditionControlRequestSaleControls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteEnsSaleConditionControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnsSaleConditionControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_TO_JSON(SaleControls, saleControls_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnsSaleConditionControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_FROM_JSON(SaleControls, saleControls_);
    };
    DeleteEnsSaleConditionControlRequest() = default ;
    DeleteEnsSaleConditionControlRequest(const DeleteEnsSaleConditionControlRequest &) = default ;
    DeleteEnsSaleConditionControlRequest(DeleteEnsSaleConditionControlRequest &&) = default ;
    DeleteEnsSaleConditionControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnsSaleConditionControlRequest() = default ;
    DeleteEnsSaleConditionControlRequest& operator=(const DeleteEnsSaleConditionControlRequest &) = default ;
    DeleteEnsSaleConditionControlRequest& operator=(DeleteEnsSaleConditionControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUidAccount_ == nullptr
        && return this->commodityCode_ == nullptr && return this->customAccount_ == nullptr && return this->saleControls_ == nullptr; };
    // aliUidAccount Field Functions 
    bool hasAliUidAccount() const { return this->aliUidAccount_ != nullptr;};
    void deleteAliUidAccount() { this->aliUidAccount_ = nullptr;};
    inline string aliUidAccount() const { DARABONBA_PTR_GET_DEFAULT(aliUidAccount_, "") };
    inline DeleteEnsSaleConditionControlRequest& setAliUidAccount(string aliUidAccount) { DARABONBA_PTR_SET_VALUE(aliUidAccount_, aliUidAccount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DeleteEnsSaleConditionControlRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customAccount Field Functions 
    bool hasCustomAccount() const { return this->customAccount_ != nullptr;};
    void deleteCustomAccount() { this->customAccount_ = nullptr;};
    inline string customAccount() const { DARABONBA_PTR_GET_DEFAULT(customAccount_, "") };
    inline DeleteEnsSaleConditionControlRequest& setCustomAccount(string customAccount) { DARABONBA_PTR_SET_VALUE(customAccount_, customAccount) };


    // saleControls Field Functions 
    bool hasSaleControls() const { return this->saleControls_ != nullptr;};
    void deleteSaleControls() { this->saleControls_ = nullptr;};
    inline const vector<DeleteEnsSaleConditionControlRequestSaleControls> & saleControls() const { DARABONBA_PTR_GET_CONST(saleControls_, vector<DeleteEnsSaleConditionControlRequestSaleControls>) };
    inline vector<DeleteEnsSaleConditionControlRequestSaleControls> saleControls() { DARABONBA_PTR_GET(saleControls_, vector<DeleteEnsSaleConditionControlRequestSaleControls>) };
    inline DeleteEnsSaleConditionControlRequest& setSaleControls(const vector<DeleteEnsSaleConditionControlRequestSaleControls> & saleControls) { DARABONBA_PTR_SET_VALUE(saleControls_, saleControls) };
    inline DeleteEnsSaleConditionControlRequest& setSaleControls(vector<DeleteEnsSaleConditionControlRequestSaleControls> && saleControls) { DARABONBA_PTR_SET_RVALUE(saleControls_, saleControls) };


  protected:
    std::shared_ptr<string> aliUidAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> customAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DeleteEnsSaleConditionControlRequestSaleControls>> saleControls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
