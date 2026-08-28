// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DiduiAreaDeductionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiduiAreaDeductionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Products, productsShrink_);
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(TargetImageUrl, targetImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DiduiAreaDeductionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Products, productsShrink_);
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(TargetImageUrl, targetImageUrl_);
    };
    DiduiAreaDeductionShrinkRequest() = default ;
    DiduiAreaDeductionShrinkRequest(const DiduiAreaDeductionShrinkRequest &) = default ;
    DiduiAreaDeductionShrinkRequest(DiduiAreaDeductionShrinkRequest &&) = default ;
    DiduiAreaDeductionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiduiAreaDeductionShrinkRequest() = default ;
    DiduiAreaDeductionShrinkRequest& operator=(const DiduiAreaDeductionShrinkRequest &) = default ;
    DiduiAreaDeductionShrinkRequest& operator=(DiduiAreaDeductionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productsShrink_ == nullptr
        && this->ragId_ == nullptr && this->reqId_ == nullptr && this->targetImageUrl_ == nullptr; };
    // productsShrink Field Functions 
    bool hasProductsShrink() const { return this->productsShrink_ != nullptr;};
    void deleteProductsShrink() { this->productsShrink_ = nullptr;};
    inline string getProductsShrink() const { DARABONBA_PTR_GET_DEFAULT(productsShrink_, "") };
    inline DiduiAreaDeductionShrinkRequest& setProductsShrink(string productsShrink) { DARABONBA_PTR_SET_VALUE(productsShrink_, productsShrink) };


    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline DiduiAreaDeductionShrinkRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DiduiAreaDeductionShrinkRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // targetImageUrl Field Functions 
    bool hasTargetImageUrl() const { return this->targetImageUrl_ != nullptr;};
    void deleteTargetImageUrl() { this->targetImageUrl_ = nullptr;};
    inline string getTargetImageUrl() const { DARABONBA_PTR_GET_DEFAULT(targetImageUrl_, "") };
    inline DiduiAreaDeductionShrinkRequest& setTargetImageUrl(string targetImageUrl) { DARABONBA_PTR_SET_VALUE(targetImageUrl_, targetImageUrl) };


  protected:
    // The list of products and their detection boxes.
    // 
    // This parameter is required.
    shared_ptr<string> productsShrink_ {};
    // The ID of the customer-specific SKU vector store that determines which store is used for retrieval. The store must be created in advance through the store creation process.
    shared_ptr<string> ragId_ {};
    // The optional business request ID used for Tracing Analysis.
    shared_ptr<string> reqId_ {};
    // The HTTPS URL of the overall floor display image.
    // 
    // This parameter is required.
    shared_ptr<string> targetImageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
