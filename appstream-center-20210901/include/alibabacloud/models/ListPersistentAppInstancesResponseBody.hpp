// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListPersistentAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPersistentAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PersistentAppInstanceModels, persistentAppInstanceModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPersistentAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PersistentAppInstanceModels, persistentAppInstanceModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPersistentAppInstancesResponseBody() = default ;
    ListPersistentAppInstancesResponseBody(const ListPersistentAppInstancesResponseBody &) = default ;
    ListPersistentAppInstancesResponseBody(ListPersistentAppInstancesResponseBody &&) = default ;
    ListPersistentAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPersistentAppInstancesResponseBody() = default ;
    ListPersistentAppInstancesResponseBody& operator=(const ListPersistentAppInstancesResponseBody &) = default ;
    ListPersistentAppInstancesResponseBody& operator=(ListPersistentAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PersistentAppInstanceModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PersistentAppInstanceModels& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
        DARABONBA_PTR_TO_JSON(AppInstancePersistentName, appInstancePersistentName_);
        DARABONBA_PTR_TO_JSON(AppInstancePersistentStatus, appInstancePersistentStatus_);
        DARABONBA_PTR_TO_JSON(AppInstanceStatus, appInstanceStatus_);
        DARABONBA_PTR_TO_JSON(AuthorizedUsers, authorizedUsers_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      };
      friend void from_json(const Darabonba::Json& j, PersistentAppInstanceModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
        DARABONBA_PTR_FROM_JSON(AppInstancePersistentName, appInstancePersistentName_);
        DARABONBA_PTR_FROM_JSON(AppInstancePersistentStatus, appInstancePersistentStatus_);
        DARABONBA_PTR_FROM_JSON(AppInstanceStatus, appInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(AuthorizedUsers, authorizedUsers_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      };
      PersistentAppInstanceModels() = default ;
      PersistentAppInstanceModels(const PersistentAppInstanceModels &) = default ;
      PersistentAppInstanceModels(PersistentAppInstanceModels &&) = default ;
      PersistentAppInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PersistentAppInstanceModels() = default ;
      PersistentAppInstanceModels& operator=(const PersistentAppInstanceModels &) = default ;
      PersistentAppInstanceModels& operator=(PersistentAppInstanceModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->appInstancePersistentName_ == nullptr && this->appInstancePersistentStatus_ == nullptr && this->appInstanceStatus_ == nullptr
        && this->authorizedUsers_ == nullptr && this->gmtCreate_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline PersistentAppInstanceModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline PersistentAppInstanceModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // appInstancePersistentId Field Functions 
      bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
      void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
      inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
      inline PersistentAppInstanceModels& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


      // appInstancePersistentName Field Functions 
      bool hasAppInstancePersistentName() const { return this->appInstancePersistentName_ != nullptr;};
      void deleteAppInstancePersistentName() { this->appInstancePersistentName_ = nullptr;};
      inline string getAppInstancePersistentName() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentName_, "") };
      inline PersistentAppInstanceModels& setAppInstancePersistentName(string appInstancePersistentName) { DARABONBA_PTR_SET_VALUE(appInstancePersistentName_, appInstancePersistentName) };


      // appInstancePersistentStatus Field Functions 
      bool hasAppInstancePersistentStatus() const { return this->appInstancePersistentStatus_ != nullptr;};
      void deleteAppInstancePersistentStatus() { this->appInstancePersistentStatus_ = nullptr;};
      inline string getAppInstancePersistentStatus() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentStatus_, "") };
      inline PersistentAppInstanceModels& setAppInstancePersistentStatus(string appInstancePersistentStatus) { DARABONBA_PTR_SET_VALUE(appInstancePersistentStatus_, appInstancePersistentStatus) };


      // appInstanceStatus Field Functions 
      bool hasAppInstanceStatus() const { return this->appInstanceStatus_ != nullptr;};
      void deleteAppInstanceStatus() { this->appInstanceStatus_ = nullptr;};
      inline string getAppInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(appInstanceStatus_, "") };
      inline PersistentAppInstanceModels& setAppInstanceStatus(string appInstanceStatus) { DARABONBA_PTR_SET_VALUE(appInstanceStatus_, appInstanceStatus) };


      // authorizedUsers Field Functions 
      bool hasAuthorizedUsers() const { return this->authorizedUsers_ != nullptr;};
      void deleteAuthorizedUsers() { this->authorizedUsers_ = nullptr;};
      inline const vector<string> & getAuthorizedUsers() const { DARABONBA_PTR_GET_CONST(authorizedUsers_, vector<string>) };
      inline vector<string> getAuthorizedUsers() { DARABONBA_PTR_GET(authorizedUsers_, vector<string>) };
      inline PersistentAppInstanceModels& setAuthorizedUsers(const vector<string> & authorizedUsers) { DARABONBA_PTR_SET_VALUE(authorizedUsers_, authorizedUsers) };
      inline PersistentAppInstanceModels& setAuthorizedUsers(vector<string> && authorizedUsers) { DARABONBA_PTR_SET_RVALUE(authorizedUsers_, authorizedUsers) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline PersistentAppInstanceModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    protected:
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The ID of the app instance.
      shared_ptr<string> appInstanceId_ {};
      // The ID of the app instance of the persistent session type.
      shared_ptr<string> appInstancePersistentId_ {};
      // The name of the app instance of the persistent session type.
      shared_ptr<string> appInstancePersistentName_ {};
      // The status of the app instance of the persistent session type.
      // 
      // Valid values:
      // 
      // *   STARTING
      // *   RUNNING
      // *   STOPPED
      // *   UNAVAILABLE
      // *   DELETING
      // *   PENDING
      // *   STOPPING
      // *   DELETED
      // *   REBUILDING
      shared_ptr<string> appInstancePersistentStatus_ {};
      // The status of the app instance.
      // 
      // Valid values:
      // 
      // *   INIT: The app instance is being initialized.
      // *   STARTING: The app instance is being started.
      // *   CLOSING: The app instance is being stopped.
      // *   CLOSED: The app instance is closed.
      // *   RUNNING: The app instance is running.
      // *   idle: The app instance is idle.
      // *   BOUND: The app instance is bound to an app instance group.
      // *   UNAVAILABLE: The app instance is unavailable.
      // *   DELETED: The app instance is deleted.
      shared_ptr<string> appInstanceStatus_ {};
      // The authorized users.
      shared_ptr<vector<string>> authorizedUsers_ {};
      // The time when the app instance was created.
      shared_ptr<string> gmtCreate_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->persistentAppInstanceModels_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPersistentAppInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPersistentAppInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // persistentAppInstanceModels Field Functions 
    bool hasPersistentAppInstanceModels() const { return this->persistentAppInstanceModels_ != nullptr;};
    void deletePersistentAppInstanceModels() { this->persistentAppInstanceModels_ = nullptr;};
    inline const vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels> & getPersistentAppInstanceModels() const { DARABONBA_PTR_GET_CONST(persistentAppInstanceModels_, vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels>) };
    inline vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels> getPersistentAppInstanceModels() { DARABONBA_PTR_GET(persistentAppInstanceModels_, vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels>) };
    inline ListPersistentAppInstancesResponseBody& setPersistentAppInstanceModels(const vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels> & persistentAppInstanceModels) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceModels_, persistentAppInstanceModels) };
    inline ListPersistentAppInstancesResponseBody& setPersistentAppInstanceModels(vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels> && persistentAppInstanceModels) { DARABONBA_PTR_SET_RVALUE(persistentAppInstanceModels_, persistentAppInstanceModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPersistentAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPersistentAppInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The app instances of the persistent session type.
    shared_ptr<vector<ListPersistentAppInstancesResponseBody::PersistentAppInstanceModels>> persistentAppInstanceModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
