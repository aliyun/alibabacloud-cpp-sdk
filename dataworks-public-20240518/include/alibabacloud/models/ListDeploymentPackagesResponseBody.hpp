// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODY_HPP_
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
  class ListDeploymentPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeploymentPackagesResponseBody() = default ;
    ListDeploymentPackagesResponseBody(const ListDeploymentPackagesResponseBody &) = default ;
    ListDeploymentPackagesResponseBody(ListDeploymentPackagesResponseBody &&) = default ;
    ListDeploymentPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackagesResponseBody() = default ;
    ListDeploymentPackagesResponseBody& operator=(const ListDeploymentPackagesResponseBody &) = default ;
    ListDeploymentPackagesResponseBody& operator=(ListDeploymentPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Deployments, deployments_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Deployments, deployments_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class Deployments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Deployments& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_TO_JSON(Executor, executor_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Deployments& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_FROM_JSON(Executor, executor_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Deployments() = default ;
        Deployments(const Deployments &) = default ;
        Deployments(Deployments &&) = default ;
        Deployments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Deployments() = default ;
        Deployments& operator=(const Deployments &) = default ;
        Deployments& operator=(Deployments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->errorMessage_ == nullptr && this->executeTime_ == nullptr && this->executor_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Deployments& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Deployments& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Deployments& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
        inline Deployments& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // executor Field Functions 
        bool hasExecutor() const { return this->executor_ != nullptr;};
        void deleteExecutor() { this->executor_ = nullptr;};
        inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
        inline Deployments& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Deployments& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Deployments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Deployments& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The timestamp when the deployment package was created.
        shared_ptr<int64_t> createTime_ {};
        // The Alibaba Cloud account ID of the deployment package creator.
        shared_ptr<string> creator_ {};
        // When the deployment package fails to execute, this parameter is used to record the error message.
        shared_ptr<string> errorMessage_ {};
        // The timestamp when the deployment package was executed.
        shared_ptr<int64_t> executeTime_ {};
        // The Alibaba Cloud account ID of the deployment package executor.
        shared_ptr<string> executor_ {};
        // The ID of the deployment package. You can use this ID to call the [GetDeployment](https://help.aliyun.com/document_detail/173950.html) operation to get the deployment package details.
        shared_ptr<int64_t> id_ {};
        // The name of the deployment package.
        shared_ptr<string> name_ {};
        // The status of the deployment package. Valid values:
        // 
        // *   0: It is ready.
        // *   1: It was successfully deployed.
        // *   2: It failed to be deployed.
        // *   6: It was rejected.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->deployments_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // deployments Field Functions 
      bool hasDeployments() const { return this->deployments_ != nullptr;};
      void deleteDeployments() { this->deployments_ = nullptr;};
      inline const vector<Data::Deployments> & getDeployments() const { DARABONBA_PTR_GET_CONST(deployments_, vector<Data::Deployments>) };
      inline vector<Data::Deployments> getDeployments() { DARABONBA_PTR_GET(deployments_, vector<Data::Deployments>) };
      inline Data& setDeployments(const vector<Data::Deployments> & deployments) { DARABONBA_PTR_SET_VALUE(deployments_, deployments) };
      inline Data& setDeployments(vector<Data::Deployments> && deployments) { DARABONBA_PTR_SET_RVALUE(deployments_, deployments) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The returned list of deployment packages.
      shared_ptr<vector<Data::Deployments>> deployments_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of records per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of records that meet the conditions.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDeploymentPackagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDeploymentPackagesResponseBody::Data) };
    inline ListDeploymentPackagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDeploymentPackagesResponseBody::Data) };
    inline ListDeploymentPackagesResponseBody& setData(const ListDeploymentPackagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeploymentPackagesResponseBody& setData(ListDeploymentPackagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of deployment packages that meet the query conditions.
    shared_ptr<ListDeploymentPackagesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
