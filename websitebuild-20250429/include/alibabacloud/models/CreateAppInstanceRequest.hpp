// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateAction, createAction_);
      DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateAction, createAction_);
      DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateAppInstanceRequest() = default ;
    CreateAppInstanceRequest(const CreateAppInstanceRequest &) = default ;
    CreateAppInstanceRequest(CreateAppInstanceRequest &&) = default ;
    CreateAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceRequest() = default ;
    CreateAppInstanceRequest& operator=(const CreateAppInstanceRequest &) = default ;
    CreateAppInstanceRequest& operator=(CreateAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // tag key
      shared_ptr<string> tagKey_ {};
      // value of tag 0
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->autoRenew_ == nullptr && this->clientToken_ == nullptr && this->createAction_ == nullptr && this->deployArea_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->extend_ == nullptr && this->name_ == nullptr && this->paymentType_ == nullptr && this->pricingCycle_ == nullptr
        && this->quantity_ == nullptr && this->resourceGroupId_ == nullptr && this->siteVersion_ == nullptr && this->tags_ == nullptr && this->version_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline CreateAppInstanceRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAppInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createAction Field Functions 
    bool hasCreateAction() const { return this->createAction_ != nullptr;};
    void deleteCreateAction() { this->createAction_ = nullptr;};
    inline string getCreateAction() const { DARABONBA_PTR_GET_DEFAULT(createAction_, "") };
    inline CreateAppInstanceRequest& setCreateAction(string createAction) { DARABONBA_PTR_SET_VALUE(createAction_, createAction) };


    // deployArea Field Functions 
    bool hasDeployArea() const { return this->deployArea_ != nullptr;};
    void deleteDeployArea() { this->deployArea_ = nullptr;};
    inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
    inline CreateAppInstanceRequest& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateAppInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline CreateAppInstanceRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateAppInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateAppInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline CreateAppInstanceRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAppInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
    inline CreateAppInstanceRequest& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateAppInstanceRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateAppInstanceRequest::Tags>) };
    inline vector<CreateAppInstanceRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateAppInstanceRequest::Tags>) };
    inline CreateAppInstanceRequest& setTags(const vector<CreateAppInstanceRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateAppInstanceRequest& setTags(vector<CreateAppInstanceRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateAppInstanceRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Application type
    shared_ptr<string> applicationType_ {};
    // Whether to enable auto-renewal upon expiration
    shared_ptr<bool> autoRenew_ {};
    // Ensures idempotence of the request. Generate a unique value from your client to ensure that it is unique across different requests. ClientToken only supports ASCII characters and cannot exceed 64 characters
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> createAction_ {};
    // Deployment area
    shared_ptr<string> deployArea_ {};
    shared_ptr<string> description_ {};
    // Required. The number of subscription periods
    shared_ptr<int32_t> duration_ {};
    // Extended information
    shared_ptr<string> extend_ {};
    shared_ptr<string> name_ {};
    // Payment type
    shared_ptr<string> paymentType_ {};
    // Required. The unit of the subscription period, Year: Year, Month: Month, Day: Day, Hour: Hour
    shared_ptr<string> pricingCycle_ {};
    // Required. The quantity of instances to be ordered.
    shared_ptr<int32_t> quantity_ {};
    // Resource group ID
    shared_ptr<string> resourceGroupId_ {};
    // Site version
    shared_ptr<string> siteVersion_ {};
    // List of tags
    shared_ptr<vector<CreateAppInstanceRequest::Tags>> tags_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
