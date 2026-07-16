// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODY_HPP_
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
  class ListEnvironmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentList, environmentList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentList, environmentList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEnvironmentsResponseBody() = default ;
    ListEnvironmentsResponseBody(const ListEnvironmentsResponseBody &) = default ;
    ListEnvironmentsResponseBody(ListEnvironmentsResponseBody &&) = default ;
    ListEnvironmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsResponseBody() = default ;
    ListEnvironmentsResponseBody& operator=(const ListEnvironmentsResponseBody &) = default ;
    ListEnvironmentsResponseBody& operator=(ListEnvironmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnvironmentList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnvironmentList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(PreSiteVersion, preSiteVersion_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, EnvironmentList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(PreSiteVersion, preSiteVersion_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      EnvironmentList() = default ;
      EnvironmentList(const EnvironmentList &) = default ;
      EnvironmentList(EnvironmentList &&) = default ;
      EnvironmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnvironmentList() = default ;
      EnvironmentList& operator=(const EnvironmentList &) = default ;
      EnvironmentList& operator=(EnvironmentList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->environmentName_ == nullptr && this->isDefault_ == nullptr && this->preSiteVersion_ == nullptr && this->priority_ == nullptr && this->readOnly_ == nullptr
        && this->rule_ == nullptr && this->siteVersion_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EnvironmentList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // environmentName Field Functions 
      bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
      void deleteEnvironmentName() { this->environmentName_ = nullptr;};
      inline string getEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
      inline EnvironmentList& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline EnvironmentList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // preSiteVersion Field Functions 
      bool hasPreSiteVersion() const { return this->preSiteVersion_ != nullptr;};
      void deletePreSiteVersion() { this->preSiteVersion_ = nullptr;};
      inline int32_t getPreSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(preSiteVersion_, 0) };
      inline EnvironmentList& setPreSiteVersion(int32_t preSiteVersion) { DARABONBA_PTR_SET_VALUE(preSiteVersion_, preSiteVersion) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline EnvironmentList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline EnvironmentList& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline EnvironmentList& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline EnvironmentList& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline EnvironmentList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The environment name.
      shared_ptr<string> environmentName_ {};
      // Indicates whether this is the default environment.
      shared_ptr<bool> isDefault_ {};
      // The previous version number.
      shared_ptr<int32_t> preSiteVersion_ {};
      // The priority.
      shared_ptr<int32_t> priority_ {};
      // Indicates whether the environment is read-only.
      shared_ptr<bool> readOnly_ {};
      // The environment rule.
      shared_ptr<string> rule_ {};
      // The site version number.
      shared_ptr<int32_t> siteVersion_ {};
      // The update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->environmentList_ == nullptr
        && this->requestId_ == nullptr; };
    // environmentList Field Functions 
    bool hasEnvironmentList() const { return this->environmentList_ != nullptr;};
    void deleteEnvironmentList() { this->environmentList_ = nullptr;};
    inline const vector<ListEnvironmentsResponseBody::EnvironmentList> & getEnvironmentList() const { DARABONBA_PTR_GET_CONST(environmentList_, vector<ListEnvironmentsResponseBody::EnvironmentList>) };
    inline vector<ListEnvironmentsResponseBody::EnvironmentList> getEnvironmentList() { DARABONBA_PTR_GET(environmentList_, vector<ListEnvironmentsResponseBody::EnvironmentList>) };
    inline ListEnvironmentsResponseBody& setEnvironmentList(const vector<ListEnvironmentsResponseBody::EnvironmentList> & environmentList) { DARABONBA_PTR_SET_VALUE(environmentList_, environmentList) };
    inline ListEnvironmentsResponseBody& setEnvironmentList(vector<ListEnvironmentsResponseBody::EnvironmentList> && environmentList) { DARABONBA_PTR_SET_RVALUE(environmentList_, environmentList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of environments.
    shared_ptr<vector<ListEnvironmentsResponseBody::EnvironmentList>> environmentList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
