// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVATEVERSIONMANAGEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVATEVERSIONMANAGEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeactivateVersionManagementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactivateVersionManagementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeactivateVersionManagementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeactivateVersionManagementRequest() = default ;
    DeactivateVersionManagementRequest(const DeactivateVersionManagementRequest &) = default ;
    DeactivateVersionManagementRequest(DeactivateVersionManagementRequest &&) = default ;
    DeactivateVersionManagementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactivateVersionManagementRequest() = default ;
    DeactivateVersionManagementRequest& operator=(const DeactivateVersionManagementRequest &) = default ;
    DeactivateVersionManagementRequest& operator=(DeactivateVersionManagementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->siteId_ != nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeactivateVersionManagementRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
