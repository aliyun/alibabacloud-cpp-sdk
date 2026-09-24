// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MERCHANDISEPLACEMENTDETECTIONPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MerchandisePlacementDetectionProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MerchandisePlacementDetectionProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MerchandisePlacementDetectionProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MerchandisePlacementDetectionProRequest() = default ;
    MerchandisePlacementDetectionProRequest(const MerchandisePlacementDetectionProRequest &) = default ;
    MerchandisePlacementDetectionProRequest(MerchandisePlacementDetectionProRequest &&) = default ;
    MerchandisePlacementDetectionProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MerchandisePlacementDetectionProRequest() = default ;
    MerchandisePlacementDetectionProRequest& operator=(const MerchandisePlacementDetectionProRequest &) = default ;
    MerchandisePlacementDetectionProRequest& operator=(MerchandisePlacementDetectionProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->rule_ == nullptr && this->type_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline MerchandisePlacementDetectionProRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline MerchandisePlacementDetectionProRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MerchandisePlacementDetectionProRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The HTTPS URL of the display image to detect.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The detection rule. When non-empty, this value takes priority as the model prompt.
    shared_ptr<string> rule_ {};
    // The product type. This parameter must be set to Genki Forest when Rule is empty.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
