// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITENAMEEXCLUSIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSITENAMEEXCLUSIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteNameExclusiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteNameExclusiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteNameExclusiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    GetSiteNameExclusiveRequest() = default ;
    GetSiteNameExclusiveRequest(const GetSiteNameExclusiveRequest &) = default ;
    GetSiteNameExclusiveRequest(GetSiteNameExclusiveRequest &&) = default ;
    GetSiteNameExclusiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteNameExclusiveRequest() = default ;
    GetSiteNameExclusiveRequest& operator=(const GetSiteNameExclusiveRequest &) = default ;
    GetSiteNameExclusiveRequest& operator=(GetSiteNameExclusiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetSiteNameExclusiveRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
