// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHRESOURCEMEASUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHRESOURCEMEASUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class PushResourceMeasureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushResourceMeasureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BelongId, belongId_);
      DARABONBA_PTR_TO_JSON(BelongIdType, belongIdType_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(MeasureData, measureData_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(UseTime, useTime_);
      DARABONBA_PTR_TO_JSON(UseType, useType_);
    };
    friend void from_json(const Darabonba::Json& j, PushResourceMeasureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BelongId, belongId_);
      DARABONBA_PTR_FROM_JSON(BelongIdType, belongIdType_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(MeasureData, measureData_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(UseTime, useTime_);
      DARABONBA_PTR_FROM_JSON(UseType, useType_);
    };
    PushResourceMeasureRequest() = default ;
    PushResourceMeasureRequest(const PushResourceMeasureRequest &) = default ;
    PushResourceMeasureRequest(PushResourceMeasureRequest &&) = default ;
    PushResourceMeasureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushResourceMeasureRequest() = default ;
    PushResourceMeasureRequest& operator=(const PushResourceMeasureRequest &) = default ;
    PushResourceMeasureRequest& operator=(PushResourceMeasureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->belongId_ == nullptr && this->belongIdType_ == nullptr && this->bizId_ == nullptr && this->measureData_ == nullptr && this->metaData_ == nullptr
        && this->resourceCode_ == nullptr && this->useTime_ == nullptr && this->useType_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline PushResourceMeasureRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // belongId Field Functions 
    bool hasBelongId() const { return this->belongId_ != nullptr;};
    void deleteBelongId() { this->belongId_ = nullptr;};
    inline string getBelongId() const { DARABONBA_PTR_GET_DEFAULT(belongId_, "") };
    inline PushResourceMeasureRequest& setBelongId(string belongId) { DARABONBA_PTR_SET_VALUE(belongId_, belongId) };


    // belongIdType Field Functions 
    bool hasBelongIdType() const { return this->belongIdType_ != nullptr;};
    void deleteBelongIdType() { this->belongIdType_ = nullptr;};
    inline string getBelongIdType() const { DARABONBA_PTR_GET_DEFAULT(belongIdType_, "") };
    inline PushResourceMeasureRequest& setBelongIdType(string belongIdType) { DARABONBA_PTR_SET_VALUE(belongIdType_, belongIdType) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline PushResourceMeasureRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // measureData Field Functions 
    bool hasMeasureData() const { return this->measureData_ != nullptr;};
    void deleteMeasureData() { this->measureData_ = nullptr;};
    inline string getMeasureData() const { DARABONBA_PTR_GET_DEFAULT(measureData_, "") };
    inline PushResourceMeasureRequest& setMeasureData(string measureData) { DARABONBA_PTR_SET_VALUE(measureData_, measureData) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
    inline PushResourceMeasureRequest& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string getResourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline PushResourceMeasureRequest& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // useTime Field Functions 
    bool hasUseTime() const { return this->useTime_ != nullptr;};
    void deleteUseTime() { this->useTime_ = nullptr;};
    inline string getUseTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
    inline PushResourceMeasureRequest& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


    // useType Field Functions 
    bool hasUseType() const { return this->useType_ != nullptr;};
    void deleteUseType() { this->useType_ = nullptr;};
    inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
    inline PushResourceMeasureRequest& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


  protected:
    shared_ptr<int64_t> amount_ {};
    shared_ptr<string> belongId_ {};
    shared_ptr<string> belongIdType_ {};
    shared_ptr<string> bizId_ {};
    shared_ptr<string> measureData_ {};
    shared_ptr<string> metaData_ {};
    shared_ptr<string> resourceCode_ {};
    shared_ptr<string> useTime_ {};
    shared_ptr<string> useType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
