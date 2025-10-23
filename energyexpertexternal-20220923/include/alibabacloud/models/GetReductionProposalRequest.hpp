// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDUCTIONPROPOSALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREDUCTIONPROPOSALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetReductionProposalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReductionProposalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(dataQualityEvaluationType, dataQualityEvaluationType_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetReductionProposalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(dataQualityEvaluationType, dataQualityEvaluationType_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
    };
    GetReductionProposalRequest() = default ;
    GetReductionProposalRequest(const GetReductionProposalRequest &) = default ;
    GetReductionProposalRequest(GetReductionProposalRequest &&) = default ;
    GetReductionProposalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReductionProposalRequest() = default ;
    GetReductionProposalRequest& operator=(const GetReductionProposalRequest &) = default ;
    GetReductionProposalRequest& operator=(GetReductionProposalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dataQualityEvaluationType_ == nullptr && return this->productId_ == nullptr && return this->productType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetReductionProposalRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataQualityEvaluationType Field Functions 
    bool hasDataQualityEvaluationType() const { return this->dataQualityEvaluationType_ != nullptr;};
    void deleteDataQualityEvaluationType() { this->dataQualityEvaluationType_ = nullptr;};
    inline int32_t dataQualityEvaluationType() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationType_, 0) };
    inline GetReductionProposalRequest& setDataQualityEvaluationType(int32_t dataQualityEvaluationType) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationType_, dataQualityEvaluationType) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline GetReductionProposalRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int64_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
    inline GetReductionProposalRequest& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // The type of the data quality evaluation. 1 is DQI and 2 is DQR.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> dataQualityEvaluationType_ = nullptr;
    // The product id.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> productId_ = nullptr;
    // Product type: 1 indicates that the carbon footprint of the product is requested, and 5 indicates that the carbon footprint of the supply chain is requested.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
