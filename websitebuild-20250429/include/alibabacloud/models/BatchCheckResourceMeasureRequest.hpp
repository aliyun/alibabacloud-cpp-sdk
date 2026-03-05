// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCHECKRESOURCEMEASUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCHECKRESOURCEMEASUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class BatchCheckResourceMeasureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCheckResourceMeasureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(BelongIdType, belongIdType_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_TO_JSON(OrderComponentParams, orderComponentParams_);
      DARABONBA_PTR_TO_JSON(ResourceCheckItems, resourceCheckItems_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCheckResourceMeasureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(BelongIdType, belongIdType_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_FROM_JSON(OrderComponentParams, orderComponentParams_);
      DARABONBA_PTR_FROM_JSON(ResourceCheckItems, resourceCheckItems_);
    };
    BatchCheckResourceMeasureRequest() = default ;
    BatchCheckResourceMeasureRequest(const BatchCheckResourceMeasureRequest &) = default ;
    BatchCheckResourceMeasureRequest(BatchCheckResourceMeasureRequest &&) = default ;
    BatchCheckResourceMeasureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCheckResourceMeasureRequest() = default ;
    BatchCheckResourceMeasureRequest& operator=(const BatchCheckResourceMeasureRequest &) = default ;
    BatchCheckResourceMeasureRequest& operator=(BatchCheckResourceMeasureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongId_ == nullptr
        && this->belongIdType_ == nullptr && this->bizType_ == nullptr && this->espBizId_ == nullptr && this->orderComponentParams_ == nullptr && this->resourceCheckItems_ == nullptr; };
    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline BatchCheckResourceMeasureRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // belongIdType Field Functions 
    bool hasBelongIdType() const { return this->belongIdType_ != nullptr;};
    void deleteBelongIdType() { this->belongIdType_ = nullptr;};
    inline string getBelongIdType() const { DARABONBA_PTR_GET_DEFAULT(belongIdType_, "") };
    inline BatchCheckResourceMeasureRequest& setBelongIdType(string belongIdType) { DARABONBA_PTR_SET_VALUE(belongIdType_, belongIdType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline BatchCheckResourceMeasureRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // espBizId Field Functions 
    bool hasEspBizId() const { return this->espBizId_ != nullptr;};
    void deleteEspBizId() { this->espBizId_ = nullptr;};
    inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
    inline BatchCheckResourceMeasureRequest& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


    // orderComponentParams Field Functions 
    bool hasOrderComponentParams() const { return this->orderComponentParams_ != nullptr;};
    void deleteOrderComponentParams() { this->orderComponentParams_ = nullptr;};
    inline string getOrderComponentParams() const { DARABONBA_PTR_GET_DEFAULT(orderComponentParams_, "") };
    inline BatchCheckResourceMeasureRequest& setOrderComponentParams(string orderComponentParams) { DARABONBA_PTR_SET_VALUE(orderComponentParams_, orderComponentParams) };


    // resourceCheckItems Field Functions 
    bool hasResourceCheckItems() const { return this->resourceCheckItems_ != nullptr;};
    void deleteResourceCheckItems() { this->resourceCheckItems_ = nullptr;};
    inline string getResourceCheckItems() const { DARABONBA_PTR_GET_DEFAULT(resourceCheckItems_, "") };
    inline BatchCheckResourceMeasureRequest& setResourceCheckItems(string resourceCheckItems) { DARABONBA_PTR_SET_VALUE(resourceCheckItems_, resourceCheckItems) };


  protected:
    shared_ptr<string> belongId_ {};
    shared_ptr<string> belongIdType_ {};
    shared_ptr<string> bizType_ {};
    shared_ptr<string> espBizId_ {};
    shared_ptr<string> orderComponentParams_ {};
    shared_ptr<string> resourceCheckItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
