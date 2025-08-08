// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETONLINEDDLPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOnlineDDLProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineDDLProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobDetailId, jobDetailId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnlineDDLProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobDetailId, jobDetailId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetOnlineDDLProgressRequest() = default ;
    GetOnlineDDLProgressRequest(const GetOnlineDDLProgressRequest &) = default ;
    GetOnlineDDLProgressRequest(GetOnlineDDLProgressRequest &&) = default ;
    GetOnlineDDLProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineDDLProgressRequest() = default ;
    GetOnlineDDLProgressRequest& operator=(const GetOnlineDDLProgressRequest &) = default ;
    GetOnlineDDLProgressRequest& operator=(GetOnlineDDLProgressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobDetailId_ != nullptr
        && this->tid_ != nullptr; };
    // jobDetailId Field Functions 
    bool hasJobDetailId() const { return this->jobDetailId_ != nullptr;};
    void deleteJobDetailId() { this->jobDetailId_ = nullptr;};
    inline int64_t jobDetailId() const { DARABONBA_PTR_GET_DEFAULT(jobDetailId_, 0L) };
    inline GetOnlineDDLProgressRequest& setJobDetailId(int64_t jobDetailId) { DARABONBA_PTR_SET_VALUE(jobDetailId_, jobDetailId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetOnlineDDLProgressRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the OnlineDDL SQL task details. You can call the [ListDBTaskSQLJobDetail](https://help.aliyun.com/document_detail/207073.html) operation to obtain the task detail ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobDetailId_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
