// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderSyncScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderSyncScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderSyncScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetIdentityProviderSyncScopeResponseBody() = default ;
    GetIdentityProviderSyncScopeResponseBody(const GetIdentityProviderSyncScopeResponseBody &) = default ;
    GetIdentityProviderSyncScopeResponseBody(GetIdentityProviderSyncScopeResponseBody &&) = default ;
    GetIdentityProviderSyncScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderSyncScopeResponseBody() = default ;
    GetIdentityProviderSyncScopeResponseBody& operator=(const GetIdentityProviderSyncScopeResponseBody &) = default ;
    GetIdentityProviderSyncScopeResponseBody& operator=(GetIdentityProviderSyncScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(estimateStatus, estimateStatus_);
        DARABONBA_PTR_TO_JSON(estimatedUserCount, estimatedUserCount_);
        DARABONBA_PTR_TO_JSON(expandedDepartmentCount, expandedDepartmentCount_);
        DARABONBA_PTR_TO_JSON(selectedDepartments, selectedDepartments_);
        DARABONBA_PTR_TO_JSON(syncScope, syncScope_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(estimateStatus, estimateStatus_);
        DARABONBA_PTR_FROM_JSON(estimatedUserCount, estimatedUserCount_);
        DARABONBA_PTR_FROM_JSON(expandedDepartmentCount, expandedDepartmentCount_);
        DARABONBA_PTR_FROM_JSON(selectedDepartments, selectedDepartments_);
        DARABONBA_PTR_FROM_JSON(syncScope, syncScope_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SyncScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SyncScope& obj) { 
          DARABONBA_PTR_TO_JSON(departmentIds, departmentIds_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, SyncScope& obj) { 
          DARABONBA_PTR_FROM_JSON(departmentIds, departmentIds_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
        };
        SyncScope() = default ;
        SyncScope(const SyncScope &) = default ;
        SyncScope(SyncScope &&) = default ;
        SyncScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SyncScope() = default ;
        SyncScope& operator=(const SyncScope &) = default ;
        SyncScope& operator=(SyncScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->departmentIds_ == nullptr
        && this->mode_ == nullptr; };
        // departmentIds Field Functions 
        bool hasDepartmentIds() const { return this->departmentIds_ != nullptr;};
        void deleteDepartmentIds() { this->departmentIds_ = nullptr;};
        inline const vector<string> & getDepartmentIds() const { DARABONBA_PTR_GET_CONST(departmentIds_, vector<string>) };
        inline vector<string> getDepartmentIds() { DARABONBA_PTR_GET(departmentIds_, vector<string>) };
        inline SyncScope& setDepartmentIds(const vector<string> & departmentIds) { DARABONBA_PTR_SET_VALUE(departmentIds_, departmentIds) };
        inline SyncScope& setDepartmentIds(vector<string> && departmentIds) { DARABONBA_PTR_SET_RVALUE(departmentIds_, departmentIds) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline SyncScope& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        // When the mode is SelectedDepartments, this parameter contains at least one non-empty department ID, which should be obtained from ListIdentityProviderDepartments. When the mode is AllAuthorized, pass an empty array or omit this parameter.
        shared_ptr<vector<string>> departmentIds_ {};
        // The scope mode. Valid values: AllAuthorized (the entire authorized scope, limited by the application\\"s address book authorization) and SelectedDepartments (the selected departments and all their sub-departments). When explicitly submitting syncScope, a valid mode must be provided and verified by the backend.
        shared_ptr<string> mode_ {};
      };

      class SelectedDepartments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SelectedDepartments& obj) { 
          DARABONBA_PTR_TO_JSON(exists, exists_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, SelectedDepartments& obj) { 
          DARABONBA_PTR_FROM_JSON(exists, exists_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        SelectedDepartments() = default ;
        SelectedDepartments(const SelectedDepartments &) = default ;
        SelectedDepartments(SelectedDepartments &&) = default ;
        SelectedDepartments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SelectedDepartments() = default ;
        SelectedDepartments& operator=(const SelectedDepartments &) = default ;
        SelectedDepartments& operator=(SelectedDepartments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->exists_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // exists Field Functions 
        bool hasExists() const { return this->exists_ != nullptr;};
        void deleteExists() { this->exists_ = nullptr;};
        inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
        inline SelectedDepartments& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline SelectedDepartments& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SelectedDepartments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Indicates whether the selected department still exists. A value of false indicates that the selection is invalid and the synchronization scope must be reconfirmed.
        shared_ptr<bool> exists_ {};
        // The unique identifier of the department returned by the identity provider. When querying the sub-departments of this node, use this value as parentDepartmentId.
        shared_ptr<string> id_ {};
        // The name of the department returned by the identity provider.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->estimateStatus_ == nullptr
        && this->estimatedUserCount_ == nullptr && this->expandedDepartmentCount_ == nullptr && this->selectedDepartments_ == nullptr && this->syncScope_ == nullptr; };
      // estimateStatus Field Functions 
      bool hasEstimateStatus() const { return this->estimateStatus_ != nullptr;};
      void deleteEstimateStatus() { this->estimateStatus_ = nullptr;};
      inline string getEstimateStatus() const { DARABONBA_PTR_GET_DEFAULT(estimateStatus_, "") };
      inline Data& setEstimateStatus(string estimateStatus) { DARABONBA_PTR_SET_VALUE(estimateStatus_, estimateStatus) };


      // estimatedUserCount Field Functions 
      bool hasEstimatedUserCount() const { return this->estimatedUserCount_ != nullptr;};
      void deleteEstimatedUserCount() { this->estimatedUserCount_ = nullptr;};
      inline int64_t getEstimatedUserCount() const { DARABONBA_PTR_GET_DEFAULT(estimatedUserCount_, 0L) };
      inline Data& setEstimatedUserCount(int64_t estimatedUserCount) { DARABONBA_PTR_SET_VALUE(estimatedUserCount_, estimatedUserCount) };


      // expandedDepartmentCount Field Functions 
      bool hasExpandedDepartmentCount() const { return this->expandedDepartmentCount_ != nullptr;};
      void deleteExpandedDepartmentCount() { this->expandedDepartmentCount_ = nullptr;};
      inline int64_t getExpandedDepartmentCount() const { DARABONBA_PTR_GET_DEFAULT(expandedDepartmentCount_, 0L) };
      inline Data& setExpandedDepartmentCount(int64_t expandedDepartmentCount) { DARABONBA_PTR_SET_VALUE(expandedDepartmentCount_, expandedDepartmentCount) };


      // selectedDepartments Field Functions 
      bool hasSelectedDepartments() const { return this->selectedDepartments_ != nullptr;};
      void deleteSelectedDepartments() { this->selectedDepartments_ = nullptr;};
      inline const vector<Data::SelectedDepartments> & getSelectedDepartments() const { DARABONBA_PTR_GET_CONST(selectedDepartments_, vector<Data::SelectedDepartments>) };
      inline vector<Data::SelectedDepartments> getSelectedDepartments() { DARABONBA_PTR_GET(selectedDepartments_, vector<Data::SelectedDepartments>) };
      inline Data& setSelectedDepartments(const vector<Data::SelectedDepartments> & selectedDepartments) { DARABONBA_PTR_SET_VALUE(selectedDepartments_, selectedDepartments) };
      inline Data& setSelectedDepartments(vector<Data::SelectedDepartments> && selectedDepartments) { DARABONBA_PTR_SET_RVALUE(selectedDepartments_, selectedDepartments) };


      // syncScope Field Functions 
      bool hasSyncScope() const { return this->syncScope_ != nullptr;};
      void deleteSyncScope() { this->syncScope_ = nullptr;};
      inline const Data::SyncScope & getSyncScope() const { DARABONBA_PTR_GET_CONST(syncScope_, Data::SyncScope) };
      inline Data::SyncScope getSyncScope() { DARABONBA_PTR_GET(syncScope_, Data::SyncScope) };
      inline Data& setSyncScope(const Data::SyncScope & syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };
      inline Data& setSyncScope(Data::SyncScope && syncScope) { DARABONBA_PTR_SET_RVALUE(syncScope_, syncScope) };


    protected:
      // The estimation status of the user count for the synchronization scope. The count is available only when the status is Ready. A missing count in other states cannot be considered as 0.
      shared_ptr<string> estimateStatus_ {};
      // The estimated number of users in the saved synchronization scope. This parameter is returned only when estimateStatus is Ready and the downstream system provides the value. It does not represent the number of users that have been synchronized.
      shared_ptr<int64_t> estimatedUserCount_ {};
      // The estimated number of departments including sub-departments. This parameter is returned only when estimateStatus is Ready and the downstream system provides the value.
      shared_ptr<int64_t> expandedDepartmentCount_ {};
      // The names and validity of the saved selected departments. This parameter can be an empty array when the mode is AllAuthorized. An empty array does not indicate that the organization has no departments.
      shared_ptr<vector<Data::SelectedDepartments>> selectedDepartments_ {};
      // The saved synchronization scope downstream. AllAuthorized indicates the address book scope authorized for the application.
      shared_ptr<Data::SyncScope> syncScope_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIdentityProviderSyncScopeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIdentityProviderSyncScopeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIdentityProviderSyncScopeResponseBody::Data) };
    inline GetIdentityProviderSyncScopeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIdentityProviderSyncScopeResponseBody::Data) };
    inline GetIdentityProviderSyncScopeResponseBody& setData(const GetIdentityProviderSyncScopeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIdentityProviderSyncScopeResponseBody& setData(GetIdentityProviderSyncScopeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetIdentityProviderSyncScopeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIdentityProviderSyncScopeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderSyncScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIdentityProviderSyncScopeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code of the API request. SUCCESS indicates that the request is successful, but does not indicate that the asynchronous synchronization task is completed.
    shared_ptr<string> code_ {};
    // The business data returned by the request.
    shared_ptr<GetIdentityProviderSyncScopeResponseBody::Data> data_ {};
    // The HTTP status code of the API request. It does not indicate the execution result of the asynchronous task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message of the API request.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. Provide this value when troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API request is successful. To check whether the asynchronous task is completed, query the task status.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
