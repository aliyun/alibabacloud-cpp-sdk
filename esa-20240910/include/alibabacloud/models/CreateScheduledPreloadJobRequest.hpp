// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDPRELOADJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateScheduledPreloadJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledPreloadJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InsertWay, insertWay_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(UrlList, urlList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledPreloadJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InsertWay, insertWay_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
    };
    CreateScheduledPreloadJobRequest() = default ;
    CreateScheduledPreloadJobRequest(const CreateScheduledPreloadJobRequest &) = default ;
    CreateScheduledPreloadJobRequest(CreateScheduledPreloadJobRequest &&) = default ;
    CreateScheduledPreloadJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledPreloadJobRequest() = default ;
    CreateScheduledPreloadJobRequest& operator=(const CreateScheduledPreloadJobRequest &) = default ;
    CreateScheduledPreloadJobRequest& operator=(CreateScheduledPreloadJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->insertWay_ == nullptr
        && return this->name_ == nullptr && return this->ossUrl_ == nullptr && return this->siteId_ == nullptr && return this->urlList_ == nullptr; };
    // insertWay Field Functions 
    bool hasInsertWay() const { return this->insertWay_ != nullptr;};
    void deleteInsertWay() { this->insertWay_ = nullptr;};
    inline string insertWay() const { DARABONBA_PTR_GET_DEFAULT(insertWay_, "") };
    inline CreateScheduledPreloadJobRequest& setInsertWay(string insertWay) { DARABONBA_PTR_SET_VALUE(insertWay_, insertWay) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateScheduledPreloadJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline CreateScheduledPreloadJobRequest& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateScheduledPreloadJobRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // urlList Field Functions 
    bool hasUrlList() const { return this->urlList_ != nullptr;};
    void deleteUrlList() { this->urlList_ = nullptr;};
    inline string urlList() const { DARABONBA_PTR_GET_DEFAULT(urlList_, "") };
    inline CreateScheduledPreloadJobRequest& setUrlList(string urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };


  protected:
    // The method to submit URLs to be prefetched.
    // 
    // Valid values:
    // 
    // *   **textBox**
    // *   **oss**
    // 
    // This parameter is required.
    std::shared_ptr<string> insertWay_ = nullptr;
    // The name of the scheduled prefetch task.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The URL of the OSS object that stores the URLs to be prefetched.
    std::shared_ptr<string> ossUrl_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The URLs to be prefetched. This parameter is required if you set InsertWay to textBox.
    std::shared_ptr<string> urlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
