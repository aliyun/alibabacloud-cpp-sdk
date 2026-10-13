// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketProductFeature.hpp>
#include <alibabacloud/models/HiMarketIcon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoApprove, autoApprove_);
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(feature, feature_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoApprove, autoApprove_);
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(feature, feature_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateProductRequest() = default ;
    UpdateProductRequest(const UpdateProductRequest &) = default ;
    UpdateProductRequest(UpdateProductRequest &&) = default ;
    UpdateProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProductRequest() = default ;
    UpdateProductRequest& operator=(const UpdateProductRequest &) = default ;
    UpdateProductRequest& operator=(UpdateProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoApprove_ == nullptr
        && this->categories_ == nullptr && this->description_ == nullptr && this->document_ == nullptr && this->feature_ == nullptr && this->icon_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->clientToken_ == nullptr; };
    // autoApprove Field Functions 
    bool hasAutoApprove() const { return this->autoApprove_ != nullptr;};
    void deleteAutoApprove() { this->autoApprove_ = nullptr;};
    inline bool getAutoApprove() const { DARABONBA_PTR_GET_DEFAULT(autoApprove_, false) };
    inline UpdateProductRequest& setAutoApprove(bool autoApprove) { DARABONBA_PTR_SET_VALUE(autoApprove_, autoApprove) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline UpdateProductRequest& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline UpdateProductRequest& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProductRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline UpdateProductRequest& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline const HiMarketProductFeature & getFeature() const { DARABONBA_PTR_GET_CONST(feature_, HiMarketProductFeature) };
    inline HiMarketProductFeature getFeature() { DARABONBA_PTR_GET(feature_, HiMarketProductFeature) };
    inline UpdateProductRequest& setFeature(const HiMarketProductFeature & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
    inline UpdateProductRequest& setFeature(HiMarketProductFeature && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline const HiMarketIcon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, HiMarketIcon) };
    inline HiMarketIcon getIcon() { DARABONBA_PTR_GET(icon_, HiMarketIcon) };
    inline UpdateProductRequest& setIcon(const HiMarketIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
    inline UpdateProductRequest& setIcon(HiMarketIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProductRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateProductRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateProductRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // Specifies whether to automatically approve subscription requests for the API product.
    shared_ptr<bool> autoApprove_ {};
    // The list of product categories to which the API product belongs.
    shared_ptr<vector<string>> categories_ {};
    // The description of the API product.
    shared_ptr<string> description_ {};
    // The documentation content of the API product.
    shared_ptr<string> document_ {};
    // The capability configuration of the API product. Currently, this configuration includes only the modelFeature member, which contains the model, maxTokens, temperature, streaming, webSearch, enableThinking, and enableMultiModal fields.
    shared_ptr<HiMarketProductFeature> feature_ {};
    // The icon configuration of the API product, which consists of the icon type (type) and icon information (value) fields.
    shared_ptr<HiMarketIcon> icon_ {};
    // The name of the API product.
    shared_ptr<string> name_ {};
    // The type of the API product. The valid values are not declared in the API definition. Refer to the types displayed in the console.
    shared_ptr<string> type_ {};
    // The idempotency token. This token is generated by the caller and must be unique to prevent duplicate submissions of the same update request.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
