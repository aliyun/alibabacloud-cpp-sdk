// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAUTODISPOSERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAUTODISPOSERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ExecuteAutoDisposeRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAutoDisposeRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SelectedEntityList, selectedEntityList_);
      DARABONBA_PTR_TO_JSON(UnSelectedEntityList, unSelectedEntityList_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAutoDisposeRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SelectedEntityList, selectedEntityList_);
      DARABONBA_PTR_FROM_JSON(UnSelectedEntityList, unSelectedEntityList_);
    };
    ExecuteAutoDisposeRecordsRequest() = default ;
    ExecuteAutoDisposeRecordsRequest(const ExecuteAutoDisposeRecordsRequest &) = default ;
    ExecuteAutoDisposeRecordsRequest(ExecuteAutoDisposeRecordsRequest &&) = default ;
    ExecuteAutoDisposeRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAutoDisposeRecordsRequest() = default ;
    ExecuteAutoDisposeRecordsRequest& operator=(const ExecuteAutoDisposeRecordsRequest &) = default ;
    ExecuteAutoDisposeRecordsRequest& operator=(ExecuteAutoDisposeRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnSelectedEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnSelectedEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoDisposeRecordId, autoDisposeRecordId_);
        DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      };
      friend void from_json(const Darabonba::Json& j, UnSelectedEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoDisposeRecordId, autoDisposeRecordId_);
        DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      };
      UnSelectedEntityList() = default ;
      UnSelectedEntityList(const UnSelectedEntityList &) = default ;
      UnSelectedEntityList(UnSelectedEntityList &&) = default ;
      UnSelectedEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnSelectedEntityList() = default ;
      UnSelectedEntityList& operator=(const UnSelectedEntityList &) = default ;
      UnSelectedEntityList& operator=(UnSelectedEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoDisposeRecordId_ == nullptr
        && this->entityUuid_ == nullptr; };
      // autoDisposeRecordId Field Functions 
      bool hasAutoDisposeRecordId() const { return this->autoDisposeRecordId_ != nullptr;};
      void deleteAutoDisposeRecordId() { this->autoDisposeRecordId_ = nullptr;};
      inline string getAutoDisposeRecordId() const { DARABONBA_PTR_GET_DEFAULT(autoDisposeRecordId_, "") };
      inline UnSelectedEntityList& setAutoDisposeRecordId(string autoDisposeRecordId) { DARABONBA_PTR_SET_VALUE(autoDisposeRecordId_, autoDisposeRecordId) };


      // entityUuid Field Functions 
      bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
      void deleteEntityUuid() { this->entityUuid_ = nullptr;};
      inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
      inline UnSelectedEntityList& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    protected:
      shared_ptr<string> autoDisposeRecordId_ {};
      shared_ptr<string> entityUuid_ {};
    };

    class SelectedEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoDisposeRecordId, autoDisposeRecordId_);
        DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoDisposeRecordId, autoDisposeRecordId_);
        DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
      };
      SelectedEntityList() = default ;
      SelectedEntityList(const SelectedEntityList &) = default ;
      SelectedEntityList(SelectedEntityList &&) = default ;
      SelectedEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedEntityList() = default ;
      SelectedEntityList& operator=(const SelectedEntityList &) = default ;
      SelectedEntityList& operator=(SelectedEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoDisposeRecordId_ == nullptr
        && this->entityUuid_ == nullptr; };
      // autoDisposeRecordId Field Functions 
      bool hasAutoDisposeRecordId() const { return this->autoDisposeRecordId_ != nullptr;};
      void deleteAutoDisposeRecordId() { this->autoDisposeRecordId_ = nullptr;};
      inline string getAutoDisposeRecordId() const { DARABONBA_PTR_GET_DEFAULT(autoDisposeRecordId_, "") };
      inline SelectedEntityList& setAutoDisposeRecordId(string autoDisposeRecordId) { DARABONBA_PTR_SET_VALUE(autoDisposeRecordId_, autoDisposeRecordId) };


      // entityUuid Field Functions 
      bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
      void deleteEntityUuid() { this->entityUuid_ = nullptr;};
      inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
      inline SelectedEntityList& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    protected:
      shared_ptr<string> autoDisposeRecordId_ {};
      shared_ptr<string> entityUuid_ {};
    };

    virtual bool empty() const override { return this->lang_ == nullptr
        && this->selectedEntityList_ == nullptr && this->unSelectedEntityList_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExecuteAutoDisposeRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // selectedEntityList Field Functions 
    bool hasSelectedEntityList() const { return this->selectedEntityList_ != nullptr;};
    void deleteSelectedEntityList() { this->selectedEntityList_ = nullptr;};
    inline const vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList> & getSelectedEntityList() const { DARABONBA_PTR_GET_CONST(selectedEntityList_, vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList>) };
    inline vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList> getSelectedEntityList() { DARABONBA_PTR_GET(selectedEntityList_, vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList>) };
    inline ExecuteAutoDisposeRecordsRequest& setSelectedEntityList(const vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList> & selectedEntityList) { DARABONBA_PTR_SET_VALUE(selectedEntityList_, selectedEntityList) };
    inline ExecuteAutoDisposeRecordsRequest& setSelectedEntityList(vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList> && selectedEntityList) { DARABONBA_PTR_SET_RVALUE(selectedEntityList_, selectedEntityList) };


    // unSelectedEntityList Field Functions 
    bool hasUnSelectedEntityList() const { return this->unSelectedEntityList_ != nullptr;};
    void deleteUnSelectedEntityList() { this->unSelectedEntityList_ = nullptr;};
    inline const vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList> & getUnSelectedEntityList() const { DARABONBA_PTR_GET_CONST(unSelectedEntityList_, vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList>) };
    inline vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList> getUnSelectedEntityList() { DARABONBA_PTR_GET(unSelectedEntityList_, vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList>) };
    inline ExecuteAutoDisposeRecordsRequest& setUnSelectedEntityList(const vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList> & unSelectedEntityList) { DARABONBA_PTR_SET_VALUE(unSelectedEntityList_, unSelectedEntityList) };
    inline ExecuteAutoDisposeRecordsRequest& setUnSelectedEntityList(vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList> && unSelectedEntityList) { DARABONBA_PTR_SET_RVALUE(unSelectedEntityList_, unSelectedEntityList) };


  protected:
    // This parameter is required.
    shared_ptr<string> lang_ {};
    shared_ptr<vector<ExecuteAutoDisposeRecordsRequest::SelectedEntityList>> selectedEntityList_ {};
    shared_ptr<vector<ExecuteAutoDisposeRecordsRequest::UnSelectedEntityList>> unSelectedEntityList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
