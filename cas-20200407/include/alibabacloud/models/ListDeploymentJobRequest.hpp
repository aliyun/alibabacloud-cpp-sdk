// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDeploymentJobRequest() = default ;
    ListDeploymentJobRequest(const ListDeploymentJobRequest &) = default ;
    ListDeploymentJobRequest(ListDeploymentJobRequest &&) = default ;
    ListDeploymentJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobRequest() = default ;
    ListDeploymentJobRequest& operator=(const ListDeploymentJobRequest &) = default ;
    ListDeploymentJobRequest& operator=(ListDeploymentJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && this->currentPage_ == nullptr && this->instanceId_ == nullptr && this->jobType_ == nullptr && this->showSize_ == nullptr && this->status_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline ListDeploymentJobRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDeploymentJobRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDeploymentJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListDeploymentJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListDeploymentJobRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeploymentJobRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The certificate ID.
    // > You can obtain this ID by calling the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation.
    shared_ptr<int64_t> certId_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The task type.
    shared_ptr<string> jobType_ {};
    // The paging Settings for the number of certificates to return on each page during a paged query. Default value: **50**.
    shared_ptr<int32_t> showSize_ {};
    // The deployment task status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
