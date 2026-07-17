// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEFEATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEFEATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ModifyInstanceFeaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceFeaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SiteFeatures, siteFeatures_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceFeaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SiteFeatures, siteFeatures_);
    };
    ModifyInstanceFeaturesRequest() = default ;
    ModifyInstanceFeaturesRequest(const ModifyInstanceFeaturesRequest &) = default ;
    ModifyInstanceFeaturesRequest(ModifyInstanceFeaturesRequest &&) = default ;
    ModifyInstanceFeaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceFeaturesRequest() = default ;
    ModifyInstanceFeaturesRequest& operator=(const ModifyInstanceFeaturesRequest &) = default ;
    ModifyInstanceFeaturesRequest& operator=(ModifyInstanceFeaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      };
      friend void from_json(const Darabonba::Json& j, SiteFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      };
      SiteFeatures() = default ;
      SiteFeatures(const SiteFeatures &) = default ;
      SiteFeatures(SiteFeatures &&) = default ;
      SiteFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteFeatures() = default ;
      SiteFeatures& operator=(const SiteFeatures &) = default ;
      SiteFeatures& operator=(SiteFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->features_ == nullptr
        && this->siteId_ == nullptr; };
      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline string getFeatures() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
      inline SiteFeatures& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline SiteFeatures& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    protected:
      // The site feature configurations to modify.
      shared_ptr<string> features_ {};
      // The site ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
      shared_ptr<int64_t> siteId_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->siteFeatures_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceFeaturesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // siteFeatures Field Functions 
    bool hasSiteFeatures() const { return this->siteFeatures_ != nullptr;};
    void deleteSiteFeatures() { this->siteFeatures_ = nullptr;};
    inline const vector<ModifyInstanceFeaturesRequest::SiteFeatures> & getSiteFeatures() const { DARABONBA_PTR_GET_CONST(siteFeatures_, vector<ModifyInstanceFeaturesRequest::SiteFeatures>) };
    inline vector<ModifyInstanceFeaturesRequest::SiteFeatures> getSiteFeatures() { DARABONBA_PTR_GET(siteFeatures_, vector<ModifyInstanceFeaturesRequest::SiteFeatures>) };
    inline ModifyInstanceFeaturesRequest& setSiteFeatures(const vector<ModifyInstanceFeaturesRequest::SiteFeatures> & siteFeatures) { DARABONBA_PTR_SET_VALUE(siteFeatures_, siteFeatures) };
    inline ModifyInstanceFeaturesRequest& setSiteFeatures(vector<ModifyInstanceFeaturesRequest::SiteFeatures> && siteFeatures) { DARABONBA_PTR_SET_RVALUE(siteFeatures_, siteFeatures) };


  protected:
    // The plan instance ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of site feature configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyInstanceFeaturesRequest::SiteFeatures>> siteFeatures_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
