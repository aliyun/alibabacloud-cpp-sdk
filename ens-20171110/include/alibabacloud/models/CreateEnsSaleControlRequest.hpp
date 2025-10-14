// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENSSALECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENSSALECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEnsSaleControlRequestSaleControls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateEnsSaleControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnsSaleControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_TO_JSON(SaleControls, saleControls_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnsSaleControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_FROM_JSON(SaleControls, saleControls_);
    };
    CreateEnsSaleControlRequest() = default ;
    CreateEnsSaleControlRequest(const CreateEnsSaleControlRequest &) = default ;
    CreateEnsSaleControlRequest(CreateEnsSaleControlRequest &&) = default ;
    CreateEnsSaleControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnsSaleControlRequest() = default ;
    CreateEnsSaleControlRequest& operator=(const CreateEnsSaleControlRequest &) = default ;
    CreateEnsSaleControlRequest& operator=(CreateEnsSaleControlRequest &&) = default ;
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
    inline CreateEnsSaleControlRequest& setAliUidAccount(string aliUidAccount) { DARABONBA_PTR_SET_VALUE(aliUidAccount_, aliUidAccount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline CreateEnsSaleControlRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customAccount Field Functions 
    bool hasCustomAccount() const { return this->customAccount_ != nullptr;};
    void deleteCustomAccount() { this->customAccount_ = nullptr;};
    inline string customAccount() const { DARABONBA_PTR_GET_DEFAULT(customAccount_, "") };
    inline CreateEnsSaleControlRequest& setCustomAccount(string customAccount) { DARABONBA_PTR_SET_VALUE(customAccount_, customAccount) };


    // saleControls Field Functions 
    bool hasSaleControls() const { return this->saleControls_ != nullptr;};
    void deleteSaleControls() { this->saleControls_ = nullptr;};
    inline const vector<CreateEnsSaleControlRequestSaleControls> & saleControls() const { DARABONBA_PTR_GET_CONST(saleControls_, vector<CreateEnsSaleControlRequestSaleControls>) };
    inline vector<CreateEnsSaleControlRequestSaleControls> saleControls() { DARABONBA_PTR_GET(saleControls_, vector<CreateEnsSaleControlRequestSaleControls>) };
    inline CreateEnsSaleControlRequest& setSaleControls(const vector<CreateEnsSaleControlRequestSaleControls> & saleControls) { DARABONBA_PTR_SET_VALUE(saleControls_, saleControls) };
    inline CreateEnsSaleControlRequest& setSaleControls(vector<CreateEnsSaleControlRequestSaleControls> && saleControls) { DARABONBA_PTR_SET_RVALUE(saleControls_, saleControls) };


  protected:
    std::shared_ptr<string> aliUidAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> customAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateEnsSaleControlRequestSaleControls>> saleControls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
