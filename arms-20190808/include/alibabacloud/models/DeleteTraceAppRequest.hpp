// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRACEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRACEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteTraceAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTraceAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DeleteReason, deleteReason_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTraceAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DeleteReason, deleteReason_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeleteTraceAppRequest() = default ;
    DeleteTraceAppRequest(const DeleteTraceAppRequest &) = default ;
    DeleteTraceAppRequest(DeleteTraceAppRequest &&) = default ;
    DeleteTraceAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTraceAppRequest() = default ;
    DeleteTraceAppRequest& operator=(const DeleteTraceAppRequest &) = default ;
    DeleteTraceAppRequest& operator=(DeleteTraceAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteReason : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteReason& obj) { 
        DARABONBA_PTR_TO_JSON(ReasonIds, reasonIds_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteReason& obj) { 
        DARABONBA_PTR_FROM_JSON(ReasonIds, reasonIds_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      DeleteReason() = default ;
      DeleteReason(const DeleteReason &) = default ;
      DeleteReason(DeleteReason &&) = default ;
      DeleteReason(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteReason() = default ;
      DeleteReason& operator=(const DeleteReason &) = default ;
      DeleteReason& operator=(DeleteReason &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReasonIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReasonIds& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ReasonIds& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ReasonIds() = default ;
        ReasonIds(const ReasonIds &) = default ;
        ReasonIds(ReasonIds &&) = default ;
        ReasonIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReasonIds() = default ;
        ReasonIds& operator=(const ReasonIds &) = default ;
        ReasonIds& operator=(ReasonIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline ReasonIds& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ReasonIds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the reason for deletion.
        shared_ptr<int32_t> id_ {};
        // A description of the reason for removal.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->reasonIds_ == nullptr
        && this->remark_ == nullptr; };
      // reasonIds Field Functions 
      bool hasReasonIds() const { return this->reasonIds_ != nullptr;};
      void deleteReasonIds() { this->reasonIds_ = nullptr;};
      inline const vector<DeleteReason::ReasonIds> & getReasonIds() const { DARABONBA_PTR_GET_CONST(reasonIds_, vector<DeleteReason::ReasonIds>) };
      inline vector<DeleteReason::ReasonIds> getReasonIds() { DARABONBA_PTR_GET(reasonIds_, vector<DeleteReason::ReasonIds>) };
      inline DeleteReason& setReasonIds(const vector<DeleteReason::ReasonIds> & reasonIds) { DARABONBA_PTR_SET_VALUE(reasonIds_, reasonIds) };
      inline DeleteReason& setReasonIds(vector<DeleteReason::ReasonIds> && reasonIds) { DARABONBA_PTR_SET_RVALUE(reasonIds_, reasonIds) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline DeleteReason& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // Reasons Ids.
      shared_ptr<vector<DeleteReason::ReasonIds>> reasonIds_ {};
      // Additional remarks when none of the reasons for removal provided are met.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->deleteReason_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteTraceAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deleteReason Field Functions 
    bool hasDeleteReason() const { return this->deleteReason_ != nullptr;};
    void deleteDeleteReason() { this->deleteReason_ = nullptr;};
    inline const DeleteTraceAppRequest::DeleteReason & getDeleteReason() const { DARABONBA_PTR_GET_CONST(deleteReason_, DeleteTraceAppRequest::DeleteReason) };
    inline DeleteTraceAppRequest::DeleteReason getDeleteReason() { DARABONBA_PTR_GET(deleteReason_, DeleteTraceAppRequest::DeleteReason) };
    inline DeleteTraceAppRequest& setDeleteReason(const DeleteTraceAppRequest::DeleteReason & deleteReason) { DARABONBA_PTR_SET_VALUE(deleteReason_, deleteReason) };
    inline DeleteTraceAppRequest& setDeleteReason(DeleteTraceAppRequest::DeleteReason && deleteReason) { DARABONBA_PTR_SET_RVALUE(deleteReason_, deleteReason) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DeleteTraceAppRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTraceAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteTraceAppRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application that you want to delete. You can call the SearchTraceAppByName operation to query the application ID. For more information, see [SearchTraceAppByName](https://help.aliyun.com/document_detail/130676.html).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The reason(s) to delete application.
    shared_ptr<DeleteTraceAppRequest::DeleteReason> deleteReason_ {};
    // The PID of the application. For more information about how to query the PID, see [QueryMetricByPage](https://www.alibabacloud.com/help/zh/doc-detail/186100.htm?spm=a2cdw.13409063.0.0.7a72281f0bkTfx#title-imy-7gj-qhr).
    // 
    // This parameter is required.
    shared_ptr<string> pid_ {};
    // The ID of the region in which the application is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The type of the application that you want to delete. You can call the SearchTraceAppByName operation to query the application type. For more information, see [SearchTraceAppByName](https://help.aliyun.com/document_detail/130676.html). Valid values:
    // 
    // *   `TRACE`: Application Monitoring
    // *   `RETCODE`: frontend monitoring
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
