// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYLOGISTICSSMSMAILNORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VERIFYLOGISTICSSMSMAILNORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class VerifyLogisticsSmsMailNoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyLogisticsSmsMailNoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressCompanyCode, expressCompanyCode_);
      DARABONBA_PTR_TO_JSON(MobileSuffix, mobileSuffix_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyLogisticsSmsMailNoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressCompanyCode, expressCompanyCode_);
      DARABONBA_PTR_FROM_JSON(MobileSuffix, mobileSuffix_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    VerifyLogisticsSmsMailNoResponseBodyData() = default ;
    VerifyLogisticsSmsMailNoResponseBodyData(const VerifyLogisticsSmsMailNoResponseBodyData &) = default ;
    VerifyLogisticsSmsMailNoResponseBodyData(VerifyLogisticsSmsMailNoResponseBodyData &&) = default ;
    VerifyLogisticsSmsMailNoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyLogisticsSmsMailNoResponseBodyData() = default ;
    VerifyLogisticsSmsMailNoResponseBodyData& operator=(const VerifyLogisticsSmsMailNoResponseBodyData &) = default ;
    VerifyLogisticsSmsMailNoResponseBodyData& operator=(VerifyLogisticsSmsMailNoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressCompanyCode_ == nullptr
        && return this->mobileSuffix_ == nullptr && return this->verifyResult_ == nullptr; };
    // expressCompanyCode Field Functions 
    bool hasExpressCompanyCode() const { return this->expressCompanyCode_ != nullptr;};
    void deleteExpressCompanyCode() { this->expressCompanyCode_ = nullptr;};
    inline string expressCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(expressCompanyCode_, "") };
    inline VerifyLogisticsSmsMailNoResponseBodyData& setExpressCompanyCode(string expressCompanyCode) { DARABONBA_PTR_SET_VALUE(expressCompanyCode_, expressCompanyCode) };


    // mobileSuffix Field Functions 
    bool hasMobileSuffix() const { return this->mobileSuffix_ != nullptr;};
    void deleteMobileSuffix() { this->mobileSuffix_ = nullptr;};
    inline string mobileSuffix() const { DARABONBA_PTR_GET_DEFAULT(mobileSuffix_, "") };
    inline VerifyLogisticsSmsMailNoResponseBodyData& setMobileSuffix(string mobileSuffix) { DARABONBA_PTR_SET_VALUE(mobileSuffix_, mobileSuffix) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline bool verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, false) };
    inline VerifyLogisticsSmsMailNoResponseBodyData& setVerifyResult(bool verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    std::shared_ptr<string> expressCompanyCode_ = nullptr;
    std::shared_ptr<string> mobileSuffix_ = nullptr;
    std::shared_ptr<bool> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
