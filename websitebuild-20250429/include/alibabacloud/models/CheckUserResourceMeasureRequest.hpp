// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERRESOURCEMEASUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERRESOURCEMEASUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CheckUserResourceMeasureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserResourceMeasureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(BelongIdType, belongIdType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_TO_JSON(OrderComponentParams, orderComponentParams_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(ResourceValue, resourceValue_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserResourceMeasureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(BelongIdType, belongIdType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_FROM_JSON(OrderComponentParams, orderComponentParams_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(ResourceValue, resourceValue_);
    };
    CheckUserResourceMeasureRequest() = default ;
    CheckUserResourceMeasureRequest(const CheckUserResourceMeasureRequest &) = default ;
    CheckUserResourceMeasureRequest(CheckUserResourceMeasureRequest &&) = default ;
    CheckUserResourceMeasureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserResourceMeasureRequest() = default ;
    CheckUserResourceMeasureRequest& operator=(const CheckUserResourceMeasureRequest &) = default ;
    CheckUserResourceMeasureRequest& operator=(CheckUserResourceMeasureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongId_ == nullptr
        && this->belongIdType_ == nullptr && this->bizType_ == nullptr && this->espBizId_ == nullptr && this->orderComponentParams_ == nullptr && this->resourceCode_ == nullptr
        && this->resourceValue_ == nullptr; };
    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline CheckUserResourceMeasureRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // belongIdType Field Functions 
    bool hasBelongIdType() const { return this->belongIdType_ != nullptr;};
    void deleteBelongIdType() { this->belongIdType_ = nullptr;};
    inline string getBelongIdType() const { DARABONBA_PTR_GET_DEFAULT(belongIdType_, "") };
    inline CheckUserResourceMeasureRequest& setBelongIdType(string belongIdType) { DARABONBA_PTR_SET_VALUE(belongIdType_, belongIdType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CheckUserResourceMeasureRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // espBizId Field Functions 
    bool hasEspBizId() const { return this->espBizId_ != nullptr;};
    void deleteEspBizId() { this->espBizId_ = nullptr;};
    inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
    inline CheckUserResourceMeasureRequest& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


    // orderComponentParams Field Functions 
    bool hasOrderComponentParams() const { return this->orderComponentParams_ != nullptr;};
    void deleteOrderComponentParams() { this->orderComponentParams_ = nullptr;};
    inline string getOrderComponentParams() const { DARABONBA_PTR_GET_DEFAULT(orderComponentParams_, "") };
    inline CheckUserResourceMeasureRequest& setOrderComponentParams(string orderComponentParams) { DARABONBA_PTR_SET_VALUE(orderComponentParams_, orderComponentParams) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string getResourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline CheckUserResourceMeasureRequest& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // resourceValue Field Functions 
    bool hasResourceValue() const { return this->resourceValue_ != nullptr;};
    void deleteResourceValue() { this->resourceValue_ = nullptr;};
    inline int64_t getResourceValue() const { DARABONBA_PTR_GET_DEFAULT(resourceValue_, 0L) };
    inline CheckUserResourceMeasureRequest& setResourceValue(int64_t resourceValue) { DARABONBA_PTR_SET_VALUE(resourceValue_, resourceValue) };


  protected:
    shared_ptr<string> belongId_ {};
    shared_ptr<string> belongIdType_ {};
    shared_ptr<string> bizType_ {};
    shared_ptr<string> espBizId_ {};
    shared_ptr<string> orderComponentParams_ {};
    shared_ptr<string> resourceCode_ {};
    shared_ptr<int64_t> resourceValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
