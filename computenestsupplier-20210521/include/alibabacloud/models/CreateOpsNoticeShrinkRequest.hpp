// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPSNOTICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPSNOTICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateOpsNoticeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpsNoticeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributesShrink_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpsNoticeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributesShrink_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateOpsNoticeShrinkRequest() = default ;
    CreateOpsNoticeShrinkRequest(const CreateOpsNoticeShrinkRequest &) = default ;
    CreateOpsNoticeShrinkRequest(CreateOpsNoticeShrinkRequest &&) = default ;
    CreateOpsNoticeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpsNoticeShrinkRequest() = default ;
    CreateOpsNoticeShrinkRequest& operator=(const CreateOpsNoticeShrinkRequest &) = default ;
    CreateOpsNoticeShrinkRequest& operator=(CreateOpsNoticeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributesShrink_ == nullptr
        && this->category_ == nullptr && this->clientToken_ == nullptr && this->content_ == nullptr && this->regionId_ == nullptr && this->serviceId_ == nullptr
        && this->serviceVersion_ == nullptr && this->severity_ == nullptr && this->solutions_ == nullptr && this->type_ == nullptr; };
    // attributesShrink Field Functions 
    bool hasAttributesShrink() const { return this->attributesShrink_ != nullptr;};
    void deleteAttributesShrink() { this->attributesShrink_ = nullptr;};
    inline string getAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(attributesShrink_, "") };
    inline CreateOpsNoticeShrinkRequest& setAttributesShrink(string attributesShrink) { DARABONBA_PTR_SET_VALUE(attributesShrink_, attributesShrink) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateOpsNoticeShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOpsNoticeShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateOpsNoticeShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOpsNoticeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateOpsNoticeShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline const vector<string> & getServiceVersion() const { DARABONBA_PTR_GET_CONST(serviceVersion_, vector<string>) };
    inline vector<string> getServiceVersion() { DARABONBA_PTR_GET(serviceVersion_, vector<string>) };
    inline CreateOpsNoticeShrinkRequest& setServiceVersion(const vector<string> & serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };
    inline CreateOpsNoticeShrinkRequest& setServiceVersion(vector<string> && serviceVersion) { DARABONBA_PTR_SET_RVALUE(serviceVersion_, serviceVersion) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateOpsNoticeShrinkRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline string getSolutions() const { DARABONBA_PTR_GET_DEFAULT(solutions_, "") };
    inline CreateOpsNoticeShrinkRequest& setSolutions(string solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateOpsNoticeShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> attributesShrink_ {};
    // This parameter is required.
    shared_ptr<string> category_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> serviceId_ {};
    shared_ptr<vector<string>> serviceVersion_ {};
    // This parameter is required.
    shared_ptr<string> severity_ {};
    shared_ptr<string> solutions_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
