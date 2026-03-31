// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(commodityData, commodityData_);
      DARABONBA_PTR_TO_JSON(partNickName, partNickName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(commodityData, commodityData_);
      DARABONBA_PTR_FROM_JSON(partNickName, partNickName_);
    };
    CreateQuotaRequest() = default ;
    CreateQuotaRequest(const CreateQuotaRequest &) = default ;
    CreateQuotaRequest(CreateQuotaRequest &&) = default ;
    CreateQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaRequest() = default ;
    CreateQuotaRequest& operator=(const CreateQuotaRequest &) = default ;
    CreateQuotaRequest& operator=(CreateQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityData_ == nullptr && this->partNickName_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateQuotaRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline CreateQuotaRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityData Field Functions 
    bool hasCommodityData() const { return this->commodityData_ != nullptr;};
    void deleteCommodityData() { this->commodityData_ = nullptr;};
    inline string getCommodityData() const { DARABONBA_PTR_GET_DEFAULT(commodityData_, "") };
    inline CreateQuotaRequest& setCommodityData(string commodityData) { DARABONBA_PTR_SET_VALUE(commodityData_, commodityData) };


    // partNickName Field Functions 
    bool hasPartNickName() const { return this->partNickName_ != nullptr;};
    void deletePartNickName() { this->partNickName_ = nullptr;};
    inline string getPartNickName() const { DARABONBA_PTR_GET_DEFAULT(partNickName_, "") };
    inline CreateQuotaRequest& setPartNickName(string partNickName) { DARABONBA_PTR_SET_VALUE(partNickName_, partNickName) };


  protected:
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> commodityData_ {};
    shared_ptr<string> partNickName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
