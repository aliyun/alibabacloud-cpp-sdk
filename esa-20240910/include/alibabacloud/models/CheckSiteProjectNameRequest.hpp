// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSITEPROJECTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSITEPROJECTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckSiteProjectNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSiteProjectNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSiteProjectNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CheckSiteProjectNameRequest() = default ;
    CheckSiteProjectNameRequest(const CheckSiteProjectNameRequest &) = default ;
    CheckSiteProjectNameRequest(CheckSiteProjectNameRequest &&) = default ;
    CheckSiteProjectNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSiteProjectNameRequest() = default ;
    CheckSiteProjectNameRequest& operator=(const CheckSiteProjectNameRequest &) = default ;
    CheckSiteProjectNameRequest& operator=(CheckSiteProjectNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && return this->siteId_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CheckSiteProjectNameRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CheckSiteProjectNameRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The name of the real-time log delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
