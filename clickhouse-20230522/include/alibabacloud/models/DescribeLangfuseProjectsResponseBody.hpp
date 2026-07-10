// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELANGFUSEPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELANGFUSEPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeLangfuseProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLangfuseProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLangfuseProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLangfuseProjectsResponseBody() = default ;
    DescribeLangfuseProjectsResponseBody(const DescribeLangfuseProjectsResponseBody &) = default ;
    DescribeLangfuseProjectsResponseBody(DescribeLangfuseProjectsResponseBody &&) = default ;
    DescribeLangfuseProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLangfuseProjectsResponseBody() = default ;
    DescribeLangfuseProjectsResponseBody& operator=(const DescribeLangfuseProjectsResponseBody &) = default ;
    DescribeLangfuseProjectsResponseBody& operator=(DescribeLangfuseProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Projects, projects_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
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
      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        };
        Projects() = default ;
        Projects(const Projects &) = default ;
        Projects(Projects &&) = default ;
        Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Projects() = default ;
        Projects& operator=(const Projects &) = default ;
        Projects& operator=(Projects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->name_ == nullptr && this->organizationId_ == nullptr && this->projectId_ == nullptr && this->updatedAt_ == nullptr; };
        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Projects& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Projects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline Projects& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline Projects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Projects& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      protected:
        // The time when the Langfuse project was created.
        shared_ptr<string> createdAt_ {};
        // The Langfuse project name.
        shared_ptr<string> name_ {};
        // The organization ID to which the Langfuse project belongs.
        shared_ptr<string> organizationId_ {};
        // The Langfuse project ID.
        shared_ptr<string> projectId_ {};
        // The time when the Langfuse project was last updated.
        shared_ptr<string> updatedAt_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projects_ == nullptr && this->totalCount_ == nullptr; };
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


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<Data::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Data::Projects>) };
      inline vector<Data::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Data::Projects>) };
      inline Data& setProjects(const vector<Data::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline Data& setProjects(vector<Data::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of records per page.
      shared_ptr<int64_t> pageSize_ {};
      // The list of Langfuse projects.
      shared_ptr<vector<Data::Projects>> projects_ {};
      // The total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLangfuseProjectsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeLangfuseProjectsResponseBody::Data) };
    inline DescribeLangfuseProjectsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeLangfuseProjectsResponseBody::Data) };
    inline DescribeLangfuseProjectsResponseBody& setData(const DescribeLangfuseProjectsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLangfuseProjectsResponseBody& setData(DescribeLangfuseProjectsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLangfuseProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<DescribeLangfuseProjectsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
