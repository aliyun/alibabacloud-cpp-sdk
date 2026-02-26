// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GOODSSHIPPINGNOTICECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_GOODSSHIPPINGNOTICECREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GoodsShippingNoticeCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GoodsShippingNoticeCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(cpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(disputeId, disputeId_);
      DARABONBA_PTR_TO_JSON(logisticsNo, logisticsNo_);
    };
    friend void from_json(const Darabonba::Json& j, GoodsShippingNoticeCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(cpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(disputeId, disputeId_);
      DARABONBA_PTR_FROM_JSON(logisticsNo, logisticsNo_);
    };
    GoodsShippingNoticeCreateCmd() = default ;
    GoodsShippingNoticeCreateCmd(const GoodsShippingNoticeCreateCmd &) = default ;
    GoodsShippingNoticeCreateCmd(GoodsShippingNoticeCreateCmd &&) = default ;
    GoodsShippingNoticeCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GoodsShippingNoticeCreateCmd() = default ;
    GoodsShippingNoticeCreateCmd& operator=(const GoodsShippingNoticeCreateCmd &) = default ;
    GoodsShippingNoticeCreateCmd& operator=(GoodsShippingNoticeCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpCode_ == nullptr
        && this->disputeId_ == nullptr && this->logisticsNo_ == nullptr; };
    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string getCpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline GoodsShippingNoticeCreateCmd& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // disputeId Field Functions 
    bool hasDisputeId() const { return this->disputeId_ != nullptr;};
    void deleteDisputeId() { this->disputeId_ = nullptr;};
    inline string getDisputeId() const { DARABONBA_PTR_GET_DEFAULT(disputeId_, "") };
    inline GoodsShippingNoticeCreateCmd& setDisputeId(string disputeId) { DARABONBA_PTR_SET_VALUE(disputeId_, disputeId) };


    // logisticsNo Field Functions 
    bool hasLogisticsNo() const { return this->logisticsNo_ != nullptr;};
    void deleteLogisticsNo() { this->logisticsNo_ = nullptr;};
    inline string getLogisticsNo() const { DARABONBA_PTR_GET_DEFAULT(logisticsNo_, "") };
    inline GoodsShippingNoticeCreateCmd& setLogisticsNo(string logisticsNo) { DARABONBA_PTR_SET_VALUE(logisticsNo_, logisticsNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> cpCode_ {};
    // This parameter is required.
    shared_ptr<string> disputeId_ {};
    // This parameter is required.
    shared_ptr<string> logisticsNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
