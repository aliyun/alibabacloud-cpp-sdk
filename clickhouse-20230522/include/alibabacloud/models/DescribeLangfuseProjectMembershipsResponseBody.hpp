// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELANGFUSEPROJECTMEMBERSHIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELANGFUSEPROJECTMEMBERSHIPSRESPONSEBODY_HPP_
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
  class DescribeLangfuseProjectMembershipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLangfuseProjectMembershipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLangfuseProjectMembershipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLangfuseProjectMembershipsResponseBody() = default ;
    DescribeLangfuseProjectMembershipsResponseBody(const DescribeLangfuseProjectMembershipsResponseBody &) = default ;
    DescribeLangfuseProjectMembershipsResponseBody(DescribeLangfuseProjectMembershipsResponseBody &&) = default ;
    DescribeLangfuseProjectMembershipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLangfuseProjectMembershipsResponseBody() = default ;
    DescribeLangfuseProjectMembershipsResponseBody& operator=(const DescribeLangfuseProjectMembershipsResponseBody &) = default ;
    DescribeLangfuseProjectMembershipsResponseBody& operator=(DescribeLangfuseProjectMembershipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Memberships, memberships_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Memberships, memberships_);
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
      class Memberships : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Memberships& obj) { 
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrgRole, orgRole_);
          DARABONBA_PTR_TO_JSON(ProjectRole, projectRole_);
        };
        friend void from_json(const Darabonba::Json& j, Memberships& obj) { 
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrgRole, orgRole_);
          DARABONBA_PTR_FROM_JSON(ProjectRole, projectRole_);
        };
        Memberships() = default ;
        Memberships(const Memberships &) = default ;
        Memberships(Memberships &&) = default ;
        Memberships(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Memberships() = default ;
        Memberships& operator=(const Memberships &) = default ;
        Memberships& operator=(Memberships &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->email_ == nullptr
        && this->name_ == nullptr && this->orgRole_ == nullptr && this->projectRole_ == nullptr; };
        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Memberships& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Memberships& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orgRole Field Functions 
        bool hasOrgRole() const { return this->orgRole_ != nullptr;};
        void deleteOrgRole() { this->orgRole_ = nullptr;};
        inline string getOrgRole() const { DARABONBA_PTR_GET_DEFAULT(orgRole_, "") };
        inline Memberships& setOrgRole(string orgRole) { DARABONBA_PTR_SET_VALUE(orgRole_, orgRole) };


        // projectRole Field Functions 
        bool hasProjectRole() const { return this->projectRole_ != nullptr;};
        void deleteProjectRole() { this->projectRole_ = nullptr;};
        inline string getProjectRole() const { DARABONBA_PTR_GET_DEFAULT(projectRole_, "") };
        inline Memberships& setProjectRole(string projectRole) { DARABONBA_PTR_SET_VALUE(projectRole_, projectRole) };


      protected:
        // The email address of the user.
        shared_ptr<string> email_ {};
        // The username.
        shared_ptr<string> name_ {};
        // The role of the user in the Langfuse organization.
        shared_ptr<string> orgRole_ {};
        // The role of the user in the Langfuse project.
        shared_ptr<string> projectRole_ {};
      };

      virtual bool empty() const override { return this->memberships_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // memberships Field Functions 
      bool hasMemberships() const { return this->memberships_ != nullptr;};
      void deleteMemberships() { this->memberships_ = nullptr;};
      inline const vector<Data::Memberships> & getMemberships() const { DARABONBA_PTR_GET_CONST(memberships_, vector<Data::Memberships>) };
      inline vector<Data::Memberships> getMemberships() { DARABONBA_PTR_GET(memberships_, vector<Data::Memberships>) };
      inline Data& setMemberships(const vector<Data::Memberships> & memberships) { DARABONBA_PTR_SET_VALUE(memberships_, memberships) };
      inline Data& setMemberships(vector<Data::Memberships> && memberships) { DARABONBA_PTR_SET_RVALUE(memberships_, memberships) };


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
      // The list of user roles in the Langfuse project.
      shared_ptr<vector<Data::Memberships>> memberships_ {};
      // The current page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLangfuseProjectMembershipsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeLangfuseProjectMembershipsResponseBody::Data) };
    inline DescribeLangfuseProjectMembershipsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeLangfuseProjectMembershipsResponseBody::Data) };
    inline DescribeLangfuseProjectMembershipsResponseBody& setData(const DescribeLangfuseProjectMembershipsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLangfuseProjectMembershipsResponseBody& setData(DescribeLangfuseProjectMembershipsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLangfuseProjectMembershipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeLangfuseProjectMembershipsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
