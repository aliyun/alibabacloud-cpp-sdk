// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeMetricsBySignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeMetricsBySignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeMetricsBySignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(types, types_);
    };
    ListComputeMetricsBySignatureRequest() = default ;
    ListComputeMetricsBySignatureRequest(const ListComputeMetricsBySignatureRequest &) = default ;
    ListComputeMetricsBySignatureRequest(ListComputeMetricsBySignatureRequest &&) = default ;
    ListComputeMetricsBySignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeMetricsBySignatureRequest() = default ;
    ListComputeMetricsBySignatureRequest& operator=(const ListComputeMetricsBySignatureRequest &) = default ;
    ListComputeMetricsBySignatureRequest& operator=(ListComputeMetricsBySignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->instanceId_ == nullptr && this->jobOwner_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectNames_ == nullptr
        && this->signature_ == nullptr && this->startDate_ == nullptr && this->types_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline ListComputeMetricsBySignatureRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListComputeMetricsBySignatureRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string getJobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline ListComputeMetricsBySignatureRequest& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListComputeMetricsBySignatureRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListComputeMetricsBySignatureRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline ListComputeMetricsBySignatureRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline ListComputeMetricsBySignatureRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline ListComputeMetricsBySignatureRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline ListComputeMetricsBySignatureRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListComputeMetricsBySignatureRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListComputeMetricsBySignatureRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> jobOwner_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<string>> projectNames_ {};
    shared_ptr<string> signature_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<vector<string>> types_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
