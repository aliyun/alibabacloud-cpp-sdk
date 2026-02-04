// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHEROBJECTCACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHEROBJECTCACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class RefreshErObjectCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshErObjectCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(MergeDomainName, mergeDomainName_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(RoutineId, routineId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshErObjectCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(MergeDomainName, mergeDomainName_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(RoutineId, routineId_);
    };
    RefreshErObjectCachesRequest() = default ;
    RefreshErObjectCachesRequest(const RefreshErObjectCachesRequest &) = default ;
    RefreshErObjectCachesRequest(RefreshErObjectCachesRequest &&) = default ;
    RefreshErObjectCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshErObjectCachesRequest() = default ;
    RefreshErObjectCachesRequest& operator=(const RefreshErObjectCachesRequest &) = default ;
    RefreshErObjectCachesRequest& operator=(RefreshErObjectCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->mergeDomainName_ == nullptr && this->objectPath_ == nullptr && this->objectType_ == nullptr && this->routineId_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RefreshErObjectCachesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // mergeDomainName Field Functions 
    bool hasMergeDomainName() const { return this->mergeDomainName_ != nullptr;};
    void deleteMergeDomainName() { this->mergeDomainName_ = nullptr;};
    inline string getMergeDomainName() const { DARABONBA_PTR_GET_DEFAULT(mergeDomainName_, "") };
    inline RefreshErObjectCachesRequest& setMergeDomainName(string mergeDomainName) { DARABONBA_PTR_SET_VALUE(mergeDomainName_, mergeDomainName) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string getObjectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline RefreshErObjectCachesRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline RefreshErObjectCachesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // routineId Field Functions 
    bool hasRoutineId() const { return this->routineId_ != nullptr;};
    void deleteRoutineId() { this->routineId_ = nullptr;};
    inline string getRoutineId() const { DARABONBA_PTR_GET_DEFAULT(routineId_, "") };
    inline RefreshErObjectCachesRequest& setRoutineId(string routineId) { DARABONBA_PTR_SET_VALUE(routineId_, routineId) };


  protected:
    // Specifies whether to refresh resources in a directory if the resources requested are different from the resources on the origin server. Default value: false.
    // 
    // *   **true**: refreshes all resources in the directory.
    // *   **false**: refreshes the changed resources in the directory.
    shared_ptr<bool> force_ {};
    // The domain names that are merged for refreshing. POPs that provide services for the domain names are refreshed.
    // 
    // >  Separate multiple domain names with commas (,).
    shared_ptr<string> mergeDomainName_ {};
    // The URL that you want to refresh.
    // 
    // > *   Separate URLs with line feeds (\\n or \\r\\n). Each object path can be up to 1,024 characters in length.
    // >*   The URLs in a request must belong to the same domain name.
    // >*   You can refresh up to 1,000 URLs in each request.
    // 
    // This parameter is required.
    shared_ptr<string> objectPath_ {};
    // The refresh type. Valid values:
    // 
    // *   **File** (default): refreshes content based on URLs.
    // *   **Directory**: refreshes content based on directories.
    // *   **Regex**: refreshes content based on regular expressions.
    // *   **IgnoreParams**: removes the question mark (`?`) and parameters after the question mark (`?`) in a request URL and refreshes content. After you call this operation with the request URL submitted, the system compares the submitted URL with the URL of the cached resource without specific parameters. If the URLs match, the points of presence (POPs) refresh the cached resource.
    // 
    // >  If you refresh the files in one or more directories, the resources in the directory that you want to refresh are marked as expired. You cannot delete the directory. If clients request resources on POPs that are marked as expired, Dynamic Content Delivery Network (DCDN) checks whether the resources on your origin server are updated. If resources are updated, DCDN retrieves the latest version of the resources and returns the resources to the clients. Otherwise, the origin server returns the 304 status code.
    // 
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // The ID of the routine, which is in the format of "Name.Subdomain" and is the unique identifier of a custom routine.
    shared_ptr<string> routineId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
