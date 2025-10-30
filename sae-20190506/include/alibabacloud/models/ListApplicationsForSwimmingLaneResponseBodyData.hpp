// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORSWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORSWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsForSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_TO_JSON(BaseAppName, baseAppName_);
      DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
      DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_TO_JSON(ServiceTags, serviceTags_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForSwimmingLaneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_FROM_JSON(BaseAppName, baseAppName_);
      DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
      DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_FROM_JSON(ServiceTags, serviceTags_);
    };
    ListApplicationsForSwimmingLaneResponseBodyData() = default ;
    ListApplicationsForSwimmingLaneResponseBodyData(const ListApplicationsForSwimmingLaneResponseBodyData &) = default ;
    ListApplicationsForSwimmingLaneResponseBodyData(ListApplicationsForSwimmingLaneResponseBodyData &&) = default ;
    ListApplicationsForSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForSwimmingLaneResponseBodyData() = default ;
    ListApplicationsForSwimmingLaneResponseBodyData& operator=(const ListApplicationsForSwimmingLaneResponseBodyData &) = default ;
    ListApplicationsForSwimmingLaneResponseBodyData& operator=(ListApplicationsForSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->baseAppId_ == nullptr && return this->baseAppName_ == nullptr && return this->mseAppId_ == nullptr && return this->mseAppName_ == nullptr
        && return this->mseNamespaceId_ == nullptr && return this->serviceTags_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string baseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // baseAppName Field Functions 
    bool hasBaseAppName() const { return this->baseAppName_ != nullptr;};
    void deleteBaseAppName() { this->baseAppName_ = nullptr;};
    inline string baseAppName() const { DARABONBA_PTR_GET_DEFAULT(baseAppName_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setBaseAppName(string baseAppName) { DARABONBA_PTR_SET_VALUE(baseAppName_, baseAppName) };


    // mseAppId Field Functions 
    bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
    void deleteMseAppId() { this->mseAppId_ = nullptr;};
    inline string mseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


    // mseAppName Field Functions 
    bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
    void deleteMseAppName() { this->mseAppName_ = nullptr;};
    inline string mseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


    // mseNamespaceId Field Functions 
    bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
    void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
    inline string mseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


    // serviceTags Field Functions 
    bool hasServiceTags() const { return this->serviceTags_ != nullptr;};
    void deleteServiceTags() { this->serviceTags_ = nullptr;};
    inline const map<string, string> & serviceTags() const { DARABONBA_PTR_GET_CONST(serviceTags_, map<string, string>) };
    inline map<string, string> serviceTags() { DARABONBA_PTR_GET(serviceTags_, map<string, string>) };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setServiceTags(const map<string, string> & serviceTags) { DARABONBA_PTR_SET_VALUE(serviceTags_, serviceTags) };
    inline ListApplicationsForSwimmingLaneResponseBodyData& setServiceTags(map<string, string> && serviceTags) { DARABONBA_PTR_SET_RVALUE(serviceTags_, serviceTags) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the baseline application.
    std::shared_ptr<string> baseAppId_ = nullptr;
    // The name of the baseline application.
    std::shared_ptr<string> baseAppName_ = nullptr;
    // The ID of the MSE instance.
    std::shared_ptr<string> mseAppId_ = nullptr;
    // MSE Instance Name
    std::shared_ptr<string> mseAppName_ = nullptr;
    // The ID of the namespace to which the MSE instance belongs.
    std::shared_ptr<string> mseNamespaceId_ = nullptr;
    // The canary tag configured for the application.
    std::shared_ptr<map<string, string>> serviceTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
