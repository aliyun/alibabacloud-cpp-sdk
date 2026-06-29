// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MATERIALINSPECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MATERIALINSPECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MaterialInspectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaterialInspectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ImageRefer, imageRefer_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, MaterialInspectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ImageRefer, imageRefer_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    MaterialInspectionRequest() = default ;
    MaterialInspectionRequest(const MaterialInspectionRequest &) = default ;
    MaterialInspectionRequest(MaterialInspectionRequest &&) = default ;
    MaterialInspectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaterialInspectionRequest() = default ;
    MaterialInspectionRequest& operator=(const MaterialInspectionRequest &) = default ;
    MaterialInspectionRequest& operator=(MaterialInspectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->imageRefer_ == nullptr && this->imageUrl_ == nullptr && this->reqId_ == nullptr && this->rules_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline MaterialInspectionRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // imageRefer Field Functions 
    bool hasImageRefer() const { return this->imageRefer_ != nullptr;};
    void deleteImageRefer() { this->imageRefer_ = nullptr;};
    inline string getImageRefer() const { DARABONBA_PTR_GET_DEFAULT(imageRefer_, "") };
    inline MaterialInspectionRequest& setImageRefer(string imageRefer) { DARABONBA_PTR_SET_VALUE(imageRefer_, imageRefer) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline MaterialInspectionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline MaterialInspectionRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline MaterialInspectionRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    shared_ptr<string> apiId_ {};
    shared_ptr<string> imageRefer_ {};
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    shared_ptr<string> reqId_ {};
    shared_ptr<string> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
