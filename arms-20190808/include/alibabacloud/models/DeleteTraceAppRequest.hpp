// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRACEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRACEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteTraceAppRequestDeleteReason.hpp>
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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->deleteReason_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->type_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteTraceAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deleteReason Field Functions 
    bool hasDeleteReason() const { return this->deleteReason_ != nullptr;};
    void deleteDeleteReason() { this->deleteReason_ = nullptr;};
    inline const DeleteTraceAppRequestDeleteReason & deleteReason() const { DARABONBA_PTR_GET_CONST(deleteReason_, DeleteTraceAppRequestDeleteReason) };
    inline DeleteTraceAppRequestDeleteReason deleteReason() { DARABONBA_PTR_GET(deleteReason_, DeleteTraceAppRequestDeleteReason) };
    inline DeleteTraceAppRequest& setDeleteReason(const DeleteTraceAppRequestDeleteReason & deleteReason) { DARABONBA_PTR_SET_VALUE(deleteReason_, deleteReason) };
    inline DeleteTraceAppRequest& setDeleteReason(DeleteTraceAppRequestDeleteReason && deleteReason) { DARABONBA_PTR_SET_RVALUE(deleteReason_, deleteReason) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DeleteTraceAppRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTraceAppRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteTraceAppRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application that you want to delete. You can call the SearchTraceAppByName operation to query the application ID. For more information, see [SearchTraceAppByName](https://help.aliyun.com/document_detail/130676.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The reason(s) to delete application.
    std::shared_ptr<DeleteTraceAppRequestDeleteReason> deleteReason_ = nullptr;
    // The PID of the application. For more information about how to query the PID, see [QueryMetricByPage](https://www.alibabacloud.com/help/zh/doc-detail/186100.htm?spm=a2cdw.13409063.0.0.7a72281f0bkTfx#title-imy-7gj-qhr).
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the region in which the application is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the application that you want to delete. You can call the SearchTraceAppByName operation to query the application type. For more information, see [SearchTraceAppByName](https://help.aliyun.com/document_detail/130676.html). Valid values:
    // 
    // *   `TRACE`: Application Monitoring
    // *   `RETCODE`: frontend monitoring
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
