// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListReleaseVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(releaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(releaseVersionStatus, releaseVersionStatus_);
      DARABONBA_PTR_TO_JSON(serviceFilter, serviceFilter_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(releaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(releaseVersionStatus, releaseVersionStatus_);
      DARABONBA_PTR_FROM_JSON(serviceFilter, serviceFilter_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListReleaseVersionsRequest() = default ;
    ListReleaseVersionsRequest(const ListReleaseVersionsRequest &) = default ;
    ListReleaseVersionsRequest(ListReleaseVersionsRequest &&) = default ;
    ListReleaseVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReleaseVersionsRequest() = default ;
    ListReleaseVersionsRequest& operator=(const ListReleaseVersionsRequest &) = default ;
    ListReleaseVersionsRequest& operator=(ListReleaseVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->releaseType_ == nullptr && this->releaseVersion_ == nullptr && this->releaseVersionStatus_ == nullptr && this->serviceFilter_ == nullptr && this->workspaceId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListReleaseVersionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline ListReleaseVersionsRequest& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ListReleaseVersionsRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // releaseVersionStatus Field Functions 
    bool hasReleaseVersionStatus() const { return this->releaseVersionStatus_ != nullptr;};
    void deleteReleaseVersionStatus() { this->releaseVersionStatus_ = nullptr;};
    inline string getReleaseVersionStatus() const { DARABONBA_PTR_GET_DEFAULT(releaseVersionStatus_, "") };
    inline ListReleaseVersionsRequest& setReleaseVersionStatus(string releaseVersionStatus) { DARABONBA_PTR_SET_VALUE(releaseVersionStatus_, releaseVersionStatus) };


    // serviceFilter Field Functions 
    bool hasServiceFilter() const { return this->serviceFilter_ != nullptr;};
    void deleteServiceFilter() { this->serviceFilter_ = nullptr;};
    inline string getServiceFilter() const { DARABONBA_PTR_GET_DEFAULT(serviceFilter_, "") };
    inline ListReleaseVersionsRequest& setServiceFilter(string serviceFilter) { DARABONBA_PTR_SET_VALUE(serviceFilter_, serviceFilter) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListReleaseVersionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The type of the version.
    // 
    // Valid values:
    // 
    // *   stable
    // *   Beta
    shared_ptr<string> releaseType_ {};
    // The version of EMR Serverless Spark.
    shared_ptr<string> releaseVersion_ {};
    // The status of the version.
    // 
    // Valid values:
    // 
    // *   ONLINE
    // *   OFFLINE
    shared_ptr<string> releaseVersionStatus_ {};
    shared_ptr<string> serviceFilter_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
