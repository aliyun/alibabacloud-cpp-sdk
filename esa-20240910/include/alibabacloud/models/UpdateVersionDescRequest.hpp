// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVERSIONDESCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVERSIONDESCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateVersionDescRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVersionDescRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVersionDescRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    UpdateVersionDescRequest() = default ;
    UpdateVersionDescRequest(const UpdateVersionDescRequest &) = default ;
    UpdateVersionDescRequest(UpdateVersionDescRequest &&) = default ;
    UpdateVersionDescRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVersionDescRequest() = default ;
    UpdateVersionDescRequest& operator=(const UpdateVersionDescRequest &) = default ;
    UpdateVersionDescRequest& operator=(UpdateVersionDescRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVersionDescRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateVersionDescRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline UpdateVersionDescRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The description of the version.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The version number to be updated.
    // 
    // This parameter is required.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
