// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetIdentityProviderSyncScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderSyncScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EstimateStatus, estimateStatus_);
      DARABONBA_PTR_TO_JSON(EstimatedUserCount, estimatedUserCount_);
      DARABONBA_PTR_TO_JSON(ExpandedDepartmentCount, expandedDepartmentCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelectedDepartments, selectedDepartments_);
      DARABONBA_PTR_TO_JSON(SyncScope, syncScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderSyncScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EstimateStatus, estimateStatus_);
      DARABONBA_PTR_FROM_JSON(EstimatedUserCount, estimatedUserCount_);
      DARABONBA_PTR_FROM_JSON(ExpandedDepartmentCount, expandedDepartmentCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelectedDepartments, selectedDepartments_);
      DARABONBA_PTR_FROM_JSON(SyncScope, syncScope_);
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
    class SyncScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncScope& obj) { 
        DARABONBA_PTR_TO_JSON(DepartmentIds, departmentIds_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, SyncScope& obj) { 
        DARABONBA_PTR_FROM_JSON(DepartmentIds, departmentIds_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
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
      shared_ptr<vector<string>> departmentIds_ {};
      shared_ptr<string> mode_ {};
    };

    class SelectedDepartments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedDepartments& obj) { 
        DARABONBA_PTR_TO_JSON(Exists, exists_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedDepartments& obj) { 
        DARABONBA_PTR_FROM_JSON(Exists, exists_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      shared_ptr<bool> exists_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->estimateStatus_ == nullptr
        && this->estimatedUserCount_ == nullptr && this->expandedDepartmentCount_ == nullptr && this->requestId_ == nullptr && this->selectedDepartments_ == nullptr && this->syncScope_ == nullptr; };
    // estimateStatus Field Functions 
    bool hasEstimateStatus() const { return this->estimateStatus_ != nullptr;};
    void deleteEstimateStatus() { this->estimateStatus_ = nullptr;};
    inline string getEstimateStatus() const { DARABONBA_PTR_GET_DEFAULT(estimateStatus_, "") };
    inline GetIdentityProviderSyncScopeResponseBody& setEstimateStatus(string estimateStatus) { DARABONBA_PTR_SET_VALUE(estimateStatus_, estimateStatus) };


    // estimatedUserCount Field Functions 
    bool hasEstimatedUserCount() const { return this->estimatedUserCount_ != nullptr;};
    void deleteEstimatedUserCount() { this->estimatedUserCount_ = nullptr;};
    inline int64_t getEstimatedUserCount() const { DARABONBA_PTR_GET_DEFAULT(estimatedUserCount_, 0L) };
    inline GetIdentityProviderSyncScopeResponseBody& setEstimatedUserCount(int64_t estimatedUserCount) { DARABONBA_PTR_SET_VALUE(estimatedUserCount_, estimatedUserCount) };


    // expandedDepartmentCount Field Functions 
    bool hasExpandedDepartmentCount() const { return this->expandedDepartmentCount_ != nullptr;};
    void deleteExpandedDepartmentCount() { this->expandedDepartmentCount_ = nullptr;};
    inline int64_t getExpandedDepartmentCount() const { DARABONBA_PTR_GET_DEFAULT(expandedDepartmentCount_, 0L) };
    inline GetIdentityProviderSyncScopeResponseBody& setExpandedDepartmentCount(int64_t expandedDepartmentCount) { DARABONBA_PTR_SET_VALUE(expandedDepartmentCount_, expandedDepartmentCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderSyncScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedDepartments Field Functions 
    bool hasSelectedDepartments() const { return this->selectedDepartments_ != nullptr;};
    void deleteSelectedDepartments() { this->selectedDepartments_ = nullptr;};
    inline const vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments> & getSelectedDepartments() const { DARABONBA_PTR_GET_CONST(selectedDepartments_, vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments>) };
    inline vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments> getSelectedDepartments() { DARABONBA_PTR_GET(selectedDepartments_, vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments>) };
    inline GetIdentityProviderSyncScopeResponseBody& setSelectedDepartments(const vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments> & selectedDepartments) { DARABONBA_PTR_SET_VALUE(selectedDepartments_, selectedDepartments) };
    inline GetIdentityProviderSyncScopeResponseBody& setSelectedDepartments(vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments> && selectedDepartments) { DARABONBA_PTR_SET_RVALUE(selectedDepartments_, selectedDepartments) };


    // syncScope Field Functions 
    bool hasSyncScope() const { return this->syncScope_ != nullptr;};
    void deleteSyncScope() { this->syncScope_ = nullptr;};
    inline const GetIdentityProviderSyncScopeResponseBody::SyncScope & getSyncScope() const { DARABONBA_PTR_GET_CONST(syncScope_, GetIdentityProviderSyncScopeResponseBody::SyncScope) };
    inline GetIdentityProviderSyncScopeResponseBody::SyncScope getSyncScope() { DARABONBA_PTR_GET(syncScope_, GetIdentityProviderSyncScopeResponseBody::SyncScope) };
    inline GetIdentityProviderSyncScopeResponseBody& setSyncScope(const GetIdentityProviderSyncScopeResponseBody::SyncScope & syncScope) { DARABONBA_PTR_SET_VALUE(syncScope_, syncScope) };
    inline GetIdentityProviderSyncScopeResponseBody& setSyncScope(GetIdentityProviderSyncScopeResponseBody::SyncScope && syncScope) { DARABONBA_PTR_SET_RVALUE(syncScope_, syncScope) };


  protected:
    shared_ptr<string> estimateStatus_ {};
    shared_ptr<int64_t> estimatedUserCount_ {};
    shared_ptr<int64_t> expandedDepartmentCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetIdentityProviderSyncScopeResponseBody::SelectedDepartments>> selectedDepartments_ {};
    shared_ptr<GetIdentityProviderSyncScopeResponseBody::SyncScope> syncScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
