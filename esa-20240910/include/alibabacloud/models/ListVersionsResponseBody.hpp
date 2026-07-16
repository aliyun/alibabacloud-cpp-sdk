// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVERSIONSRESPONSEBODY_HPP_
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
  class ListVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteVersionList, siteVersionList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteVersionList, siteVersionList_);
    };
    ListVersionsResponseBody() = default ;
    ListVersionsResponseBody(const ListVersionsResponseBody &) = default ;
    ListVersionsResponseBody(ListVersionsResponseBody &&) = default ;
    ListVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVersionsResponseBody() = default ;
    ListVersionsResponseBody& operator=(const ListVersionsResponseBody &) = default ;
    ListVersionsResponseBody& operator=(ListVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteVersionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteVersionList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnvironmentNameList, environmentNameList_);
        DARABONBA_PTR_TO_JSON(ParentSiteVersion, parentSiteVersion_);
        DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SiteVersionList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnvironmentNameList, environmentNameList_);
        DARABONBA_PTR_FROM_JSON(ParentSiteVersion, parentSiteVersion_);
        DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SiteVersionList() = default ;
      SiteVersionList(const SiteVersionList &) = default ;
      SiteVersionList(SiteVersionList &&) = default ;
      SiteVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteVersionList() = default ;
      SiteVersionList& operator=(const SiteVersionList &) = default ;
      SiteVersionList& operator=(SiteVersionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->environmentNameList_ == nullptr && this->parentSiteVersion_ == nullptr && this->readOnly_ == nullptr && this->siteVersion_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SiteVersionList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SiteVersionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environmentNameList Field Functions 
      bool hasEnvironmentNameList() const { return this->environmentNameList_ != nullptr;};
      void deleteEnvironmentNameList() { this->environmentNameList_ = nullptr;};
      inline const vector<string> & getEnvironmentNameList() const { DARABONBA_PTR_GET_CONST(environmentNameList_, vector<string>) };
      inline vector<string> getEnvironmentNameList() { DARABONBA_PTR_GET(environmentNameList_, vector<string>) };
      inline SiteVersionList& setEnvironmentNameList(const vector<string> & environmentNameList) { DARABONBA_PTR_SET_VALUE(environmentNameList_, environmentNameList) };
      inline SiteVersionList& setEnvironmentNameList(vector<string> && environmentNameList) { DARABONBA_PTR_SET_RVALUE(environmentNameList_, environmentNameList) };


      // parentSiteVersion Field Functions 
      bool hasParentSiteVersion() const { return this->parentSiteVersion_ != nullptr;};
      void deleteParentSiteVersion() { this->parentSiteVersion_ = nullptr;};
      inline int32_t getParentSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(parentSiteVersion_, 0) };
      inline SiteVersionList& setParentSiteVersion(int32_t parentSiteVersion) { DARABONBA_PTR_SET_VALUE(parentSiteVersion_, parentSiteVersion) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline SiteVersionList& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline SiteVersionList& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SiteVersionList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SiteVersionList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The environment list of the site version. The version may have no environment or one or more environments configured, such as the default environment or environment 2.
      shared_ptr<vector<string>> environmentNameList_ {};
      // The parent version of the site version.
      shared_ptr<int32_t> parentSiteVersion_ {};
      // Indicates whether the version is read-only. Default value: false.
      shared_ptr<bool> readOnly_ {};
      // The site version.
      shared_ptr<int32_t> siteVersion_ {};
      // The status. Valid values:
      // 
      // - **online**: active.
      // 
      // - **configuring**: being configured.
      // 
      // - **configure_faild**: configuration failed.
      shared_ptr<string> status_ {};
      // The update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->siteVersionList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteVersionList Field Functions 
    bool hasSiteVersionList() const { return this->siteVersionList_ != nullptr;};
    void deleteSiteVersionList() { this->siteVersionList_ = nullptr;};
    inline const vector<ListVersionsResponseBody::SiteVersionList> & getSiteVersionList() const { DARABONBA_PTR_GET_CONST(siteVersionList_, vector<ListVersionsResponseBody::SiteVersionList>) };
    inline vector<ListVersionsResponseBody::SiteVersionList> getSiteVersionList() { DARABONBA_PTR_GET(siteVersionList_, vector<ListVersionsResponseBody::SiteVersionList>) };
    inline ListVersionsResponseBody& setSiteVersionList(const vector<ListVersionsResponseBody::SiteVersionList> & siteVersionList) { DARABONBA_PTR_SET_VALUE(siteVersionList_, siteVersionList) };
    inline ListVersionsResponseBody& setSiteVersionList(vector<ListVersionsResponseBody::SiteVersionList> && siteVersionList) { DARABONBA_PTR_SET_RVALUE(siteVersionList_, siteVersionList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The version list of the site.
    shared_ptr<vector<ListVersionsResponseBody::SiteVersionList>> siteVersionList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
