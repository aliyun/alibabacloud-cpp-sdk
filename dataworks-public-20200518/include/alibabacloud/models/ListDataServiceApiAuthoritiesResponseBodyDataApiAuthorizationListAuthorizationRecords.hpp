// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIAUTHORITIESRESPONSEBODYDATAAPIAUTHORIZATIONLISTAUTHORIZATIONRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIAUTHORITIESRESPONSEBODYDATAAPIAUTHORIZATIONLISTAUTHORIZATIONRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords() = default ;
    ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords(const ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords &) = default ;
    ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords(ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords &&) = default ;
    ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords() = default ;
    ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& operator=(const ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords &) = default ;
    ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& operator=(ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->creatorId_ != nullptr && this->endTime_ != nullptr && this->projectId_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataServiceApiAuthoritiesResponseBodyDataApiAuthorizationListAuthorizationRecords& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The time when the access permissions on the API were granted to other users.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the API owner.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The end time of the validity period of the authorization.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the workspace to which the access permissions on the API are granted.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
