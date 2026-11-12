// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MerchandisePlacementDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePlacementDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(RagId, ragId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePlacementDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(RagId, ragId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MerchandisePlacementDetectionRequest() = default ;
    MerchandisePlacementDetectionRequest(const MerchandisePlacementDetectionRequest &) = default ;
    MerchandisePlacementDetectionRequest(MerchandisePlacementDetectionRequest &&) = default ;
    MerchandisePlacementDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePlacementDetectionRequest() = default ;
    MerchandisePlacementDetectionRequest& operator=(const MerchandisePlacementDetectionRequest &) = default ;
    MerchandisePlacementDetectionRequest& operator=(MerchandisePlacementDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->imageUrl_ == nullptr && this->ragId_ == nullptr && this->rule_ == nullptr && this->type_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline MerchandisePlacementDetectionRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline MerchandisePlacementDetectionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // ragId Field Functions 
    bool hasRagId() const { return this->ragId_ != nullptr;};
    void deleteRagId() { this->ragId_ = nullptr;};
    inline string getRagId() const { DARABONBA_PTR_GET_DEFAULT(ragId_, "") };
    inline MerchandisePlacementDetectionRequest& setRagId(string ragId) { DARABONBA_PTR_SET_VALUE(ragId_, ragId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline MerchandisePlacementDetectionRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MerchandisePlacementDetectionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies the ID of a custom API. Pass this parameter if you need to specify a custom version of the API. If you created a custom API during the trial phase, you can query the ApiId of the corresponding feature in the product console by choosing Intelligent Inspection > API Management > My APIs.
    shared_ptr<string> apiId_ {};
    // The URL of the original shelf or floor display image to be recognized. The URL must be accessible over the Internet or from OSS.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The ID of the customer-specific SKU vector database. This parameter determines which database is used for retrieval. The database must be created through the database creation process in advance.
    shared_ptr<string> ragId_ {};
    // The custom rule. You can enter a detection prompt, which is passed as the rule input parameter to the workflow. If this parameter is specified, the type parameter is not required, and the independent rule branch is used. If this parameter is left empty, you must specify the type parameter to start detection.
    shared_ptr<string> rule_ {};
    // The business type. This parameter is reserved for future routing based on business lines. Currently, only skincare products are supported.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
