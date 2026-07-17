// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSITEFEATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSITEFEATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ModifySiteFeaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySiteFeaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewInstanceId, newInstanceId_);
      DARABONBA_PTR_TO_JSON(SiteFeatures, siteFeatures_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySiteFeaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewInstanceId, newInstanceId_);
      DARABONBA_PTR_FROM_JSON(SiteFeatures, siteFeatures_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ModifySiteFeaturesRequest() = default ;
    ModifySiteFeaturesRequest(const ModifySiteFeaturesRequest &) = default ;
    ModifySiteFeaturesRequest(ModifySiteFeaturesRequest &&) = default ;
    ModifySiteFeaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySiteFeaturesRequest() = default ;
    ModifySiteFeaturesRequest& operator=(const ModifySiteFeaturesRequest &) = default ;
    ModifySiteFeaturesRequest& operator=(ModifySiteFeaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newInstanceId_ == nullptr
        && this->siteFeatures_ == nullptr && this->siteId_ == nullptr; };
    // newInstanceId Field Functions 
    bool hasNewInstanceId() const { return this->newInstanceId_ != nullptr;};
    void deleteNewInstanceId() { this->newInstanceId_ = nullptr;};
    inline string getNewInstanceId() const { DARABONBA_PTR_GET_DEFAULT(newInstanceId_, "") };
    inline ModifySiteFeaturesRequest& setNewInstanceId(string newInstanceId) { DARABONBA_PTR_SET_VALUE(newInstanceId_, newInstanceId) };


    // siteFeatures Field Functions 
    bool hasSiteFeatures() const { return this->siteFeatures_ != nullptr;};
    void deleteSiteFeatures() { this->siteFeatures_ = nullptr;};
    inline string getSiteFeatures() const { DARABONBA_PTR_GET_DEFAULT(siteFeatures_, "") };
    inline ModifySiteFeaturesRequest& setSiteFeatures(string siteFeatures) { DARABONBA_PTR_SET_VALUE(siteFeatures_, siteFeatures) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ModifySiteFeaturesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> newInstanceId_ {};
    // The site feature information to be cleared.
    // 
    // This parameter is required.
    shared_ptr<string> siteFeatures_ {};
    // The site ID. You can obtain the ID by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
