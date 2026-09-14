// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTDEPLOYMENTENVIRONMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTDEPLOYMENTENVIRONMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectDeploymentEnvironmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectDeploymentEnvironmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectDeploymentEnvironmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrossProjectDeploymentEnvironmentsResponseBody() = default ;
    ListCrossProjectDeploymentEnvironmentsResponseBody(const ListCrossProjectDeploymentEnvironmentsResponseBody &) = default ;
    ListCrossProjectDeploymentEnvironmentsResponseBody(ListCrossProjectDeploymentEnvironmentsResponseBody &&) = default ;
    ListCrossProjectDeploymentEnvironmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectDeploymentEnvironmentsResponseBody() = default ;
    ListCrossProjectDeploymentEnvironmentsResponseBody& operator=(const ListCrossProjectDeploymentEnvironmentsResponseBody &) = default ;
    ListCrossProjectDeploymentEnvironmentsResponseBody& operator=(ListCrossProjectDeploymentEnvironmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentEnvironments, deploymentEnvironments_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentEnvironments, deploymentEnvironments_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class DeploymentEnvironments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentEnvironments& obj) { 
          DARABONBA_PTR_TO_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SourceProjectId, sourceProjectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TargetProjectId, targetProjectId_);
          DARABONBA_PTR_TO_JSON(TargetProjectName, targetProjectName_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentEnvironments& obj) { 
          DARABONBA_PTR_FROM_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SourceProjectId, sourceProjectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TargetProjectId, targetProjectId_);
          DARABONBA_PTR_FROM_JSON(TargetProjectName, targetProjectName_);
        };
        DeploymentEnvironments() = default ;
        DeploymentEnvironments(const DeploymentEnvironments &) = default ;
        DeploymentEnvironments(DeploymentEnvironments &&) = default ;
        DeploymentEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentEnvironments() = default ;
        DeploymentEnvironments& operator=(const DeploymentEnvironments &) = default ;
        DeploymentEnvironments& operator=(DeploymentEnvironments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deploymentEnvironmentId_ == nullptr
        && this->name_ == nullptr && this->sourceProjectId_ == nullptr && this->status_ == nullptr && this->targetProjectId_ == nullptr && this->targetProjectName_ == nullptr; };
        // deploymentEnvironmentId Field Functions 
        bool hasDeploymentEnvironmentId() const { return this->deploymentEnvironmentId_ != nullptr;};
        void deleteDeploymentEnvironmentId() { this->deploymentEnvironmentId_ = nullptr;};
        inline int64_t getDeploymentEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentEnvironmentId_, 0L) };
        inline DeploymentEnvironments& setDeploymentEnvironmentId(int64_t deploymentEnvironmentId) { DARABONBA_PTR_SET_VALUE(deploymentEnvironmentId_, deploymentEnvironmentId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DeploymentEnvironments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceProjectId Field Functions 
        bool hasSourceProjectId() const { return this->sourceProjectId_ != nullptr;};
        void deleteSourceProjectId() { this->sourceProjectId_ = nullptr;};
        inline int64_t getSourceProjectId() const { DARABONBA_PTR_GET_DEFAULT(sourceProjectId_, 0L) };
        inline DeploymentEnvironments& setSourceProjectId(int64_t sourceProjectId) { DARABONBA_PTR_SET_VALUE(sourceProjectId_, sourceProjectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DeploymentEnvironments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // targetProjectId Field Functions 
        bool hasTargetProjectId() const { return this->targetProjectId_ != nullptr;};
        void deleteTargetProjectId() { this->targetProjectId_ = nullptr;};
        inline int64_t getTargetProjectId() const { DARABONBA_PTR_GET_DEFAULT(targetProjectId_, 0L) };
        inline DeploymentEnvironments& setTargetProjectId(int64_t targetProjectId) { DARABONBA_PTR_SET_VALUE(targetProjectId_, targetProjectId) };


        // targetProjectName Field Functions 
        bool hasTargetProjectName() const { return this->targetProjectName_ != nullptr;};
        void deleteTargetProjectName() { this->targetProjectName_ = nullptr;};
        inline string getTargetProjectName() const { DARABONBA_PTR_GET_DEFAULT(targetProjectName_, "") };
        inline DeploymentEnvironments& setTargetProjectName(string targetProjectName) { DARABONBA_PTR_SET_VALUE(targetProjectName_, targetProjectName) };


      protected:
        // The cross-workspace deployment environment ID.
        shared_ptr<int64_t> deploymentEnvironmentId_ {};
        // The environment name.
        shared_ptr<string> name_ {};
        // The source project workspace ID.
        shared_ptr<int64_t> sourceProjectId_ {};
        // The environment status.
        shared_ptr<string> status_ {};
        // The target project workspace ID.
        shared_ptr<int64_t> targetProjectId_ {};
        // The target project workspace name.
        shared_ptr<string> targetProjectName_ {};
      };

      virtual bool empty() const override { return this->deploymentEnvironments_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
      // deploymentEnvironments Field Functions 
      bool hasDeploymentEnvironments() const { return this->deploymentEnvironments_ != nullptr;};
      void deleteDeploymentEnvironments() { this->deploymentEnvironments_ = nullptr;};
      inline const vector<Data::DeploymentEnvironments> & getDeploymentEnvironments() const { DARABONBA_PTR_GET_CONST(deploymentEnvironments_, vector<Data::DeploymentEnvironments>) };
      inline vector<Data::DeploymentEnvironments> getDeploymentEnvironments() { DARABONBA_PTR_GET(deploymentEnvironments_, vector<Data::DeploymentEnvironments>) };
      inline Data& setDeploymentEnvironments(const vector<Data::DeploymentEnvironments> & deploymentEnvironments) { DARABONBA_PTR_SET_VALUE(deploymentEnvironments_, deploymentEnvironments) };
      inline Data& setDeploymentEnvironments(vector<Data::DeploymentEnvironments> && deploymentEnvironments) { DARABONBA_PTR_SET_RVALUE(deploymentEnvironments_, deploymentEnvironments) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of enabled cross-workspace deployment environments in the source project.
      shared_ptr<vector<Data::DeploymentEnvironments>> deploymentEnvironments_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCrossProjectDeploymentEnvironmentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCrossProjectDeploymentEnvironmentsResponseBody::Data) };
    inline ListCrossProjectDeploymentEnvironmentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCrossProjectDeploymentEnvironmentsResponseBody::Data) };
    inline ListCrossProjectDeploymentEnvironmentsResponseBody& setData(const ListCrossProjectDeploymentEnvironmentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCrossProjectDeploymentEnvironmentsResponseBody& setData(ListCrossProjectDeploymentEnvironmentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrossProjectDeploymentEnvironmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrossProjectDeploymentEnvironmentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response.
    shared_ptr<ListCrossProjectDeploymentEnvironmentsResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
