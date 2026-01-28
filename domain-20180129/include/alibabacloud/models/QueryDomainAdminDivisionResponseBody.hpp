// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINADMINDIVISIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainAdminDivisionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainAdminDivisionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminDivisions, adminDivisions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainAdminDivisionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminDivisions, adminDivisions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDomainAdminDivisionResponseBody() = default ;
    QueryDomainAdminDivisionResponseBody(const QueryDomainAdminDivisionResponseBody &) = default ;
    QueryDomainAdminDivisionResponseBody(QueryDomainAdminDivisionResponseBody &&) = default ;
    QueryDomainAdminDivisionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainAdminDivisionResponseBody() = default ;
    QueryDomainAdminDivisionResponseBody& operator=(const QueryDomainAdminDivisionResponseBody &) = default ;
    QueryDomainAdminDivisionResponseBody& operator=(QueryDomainAdminDivisionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdminDivisions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdminDivisions& obj) { 
        DARABONBA_PTR_TO_JSON(AdminDivision, adminDivision_);
      };
      friend void from_json(const Darabonba::Json& j, AdminDivisions& obj) { 
        DARABONBA_PTR_FROM_JSON(AdminDivision, adminDivision_);
      };
      AdminDivisions() = default ;
      AdminDivisions(const AdminDivisions &) = default ;
      AdminDivisions(AdminDivisions &&) = default ;
      AdminDivisions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdminDivisions() = default ;
      AdminDivisions& operator=(const AdminDivisions &) = default ;
      AdminDivisions& operator=(AdminDivisions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AdminDivision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdminDivision& obj) { 
          DARABONBA_PTR_TO_JSON(Children, children_);
          DARABONBA_PTR_TO_JSON(DivisionName, divisionName_);
        };
        friend void from_json(const Darabonba::Json& j, AdminDivision& obj) { 
          DARABONBA_PTR_FROM_JSON(Children, children_);
          DARABONBA_PTR_FROM_JSON(DivisionName, divisionName_);
        };
        AdminDivision() = default ;
        AdminDivision(const AdminDivision &) = default ;
        AdminDivision(AdminDivision &&) = default ;
        AdminDivision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdminDivision() = default ;
        AdminDivision& operator=(const AdminDivision &) = default ;
        AdminDivision& operator=(AdminDivision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Children : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Children& obj) { 
            DARABONBA_PTR_TO_JSON(Children, children_);
          };
          friend void from_json(const Darabonba::Json& j, Children& obj) { 
            DARABONBA_PTR_FROM_JSON(Children, children_);
          };
          Children() = default ;
          Children(const Children &) = default ;
          Children(Children &&) = default ;
          Children(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Children() = default ;
          Children& operator=(const Children &) = default ;
          Children& operator=(Children &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ChildrenItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChildrenItem& obj) { 
              DARABONBA_PTR_TO_JSON(ChildDivisionName, childDivisionName_);
            };
            friend void from_json(const Darabonba::Json& j, ChildrenItem& obj) { 
              DARABONBA_PTR_FROM_JSON(ChildDivisionName, childDivisionName_);
            };
            ChildrenItem() = default ;
            ChildrenItem(const ChildrenItem &) = default ;
            ChildrenItem(ChildrenItem &&) = default ;
            ChildrenItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChildrenItem() = default ;
            ChildrenItem& operator=(const ChildrenItem &) = default ;
            ChildrenItem& operator=(ChildrenItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->childDivisionName_ == nullptr; };
            // childDivisionName Field Functions 
            bool hasChildDivisionName() const { return this->childDivisionName_ != nullptr;};
            void deleteChildDivisionName() { this->childDivisionName_ = nullptr;};
            inline string getChildDivisionName() const { DARABONBA_PTR_GET_DEFAULT(childDivisionName_, "") };
            inline ChildrenItem& setChildDivisionName(string childDivisionName) { DARABONBA_PTR_SET_VALUE(childDivisionName_, childDivisionName) };


          protected:
            shared_ptr<string> childDivisionName_ {};
          };

          virtual bool empty() const override { return this->children_ == nullptr; };
          // children Field Functions 
          bool hasChildren() const { return this->children_ != nullptr;};
          void deleteChildren() { this->children_ = nullptr;};
          inline const vector<Children::ChildrenItem> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Children::ChildrenItem>) };
          inline vector<Children::ChildrenItem> getChildren() { DARABONBA_PTR_GET(children_, vector<Children::ChildrenItem>) };
          inline Children& setChildren(const vector<Children::ChildrenItem> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
          inline Children& setChildren(vector<Children::ChildrenItem> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


        protected:
          shared_ptr<vector<Children::ChildrenItem>> children_ {};
        };

        virtual bool empty() const override { return this->children_ == nullptr
        && this->divisionName_ == nullptr; };
        // children Field Functions 
        bool hasChildren() const { return this->children_ != nullptr;};
        void deleteChildren() { this->children_ = nullptr;};
        inline const AdminDivision::Children & getChildren() const { DARABONBA_PTR_GET_CONST(children_, AdminDivision::Children) };
        inline AdminDivision::Children getChildren() { DARABONBA_PTR_GET(children_, AdminDivision::Children) };
        inline AdminDivision& setChildren(const AdminDivision::Children & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
        inline AdminDivision& setChildren(AdminDivision::Children && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


        // divisionName Field Functions 
        bool hasDivisionName() const { return this->divisionName_ != nullptr;};
        void deleteDivisionName() { this->divisionName_ = nullptr;};
        inline string getDivisionName() const { DARABONBA_PTR_GET_DEFAULT(divisionName_, "") };
        inline AdminDivision& setDivisionName(string divisionName) { DARABONBA_PTR_SET_VALUE(divisionName_, divisionName) };


      protected:
        shared_ptr<AdminDivision::Children> children_ {};
        shared_ptr<string> divisionName_ {};
      };

      virtual bool empty() const override { return this->adminDivision_ == nullptr; };
      // adminDivision Field Functions 
      bool hasAdminDivision() const { return this->adminDivision_ != nullptr;};
      void deleteAdminDivision() { this->adminDivision_ = nullptr;};
      inline const vector<AdminDivisions::AdminDivision> & getAdminDivision() const { DARABONBA_PTR_GET_CONST(adminDivision_, vector<AdminDivisions::AdminDivision>) };
      inline vector<AdminDivisions::AdminDivision> getAdminDivision() { DARABONBA_PTR_GET(adminDivision_, vector<AdminDivisions::AdminDivision>) };
      inline AdminDivisions& setAdminDivision(const vector<AdminDivisions::AdminDivision> & adminDivision) { DARABONBA_PTR_SET_VALUE(adminDivision_, adminDivision) };
      inline AdminDivisions& setAdminDivision(vector<AdminDivisions::AdminDivision> && adminDivision) { DARABONBA_PTR_SET_RVALUE(adminDivision_, adminDivision) };


    protected:
      shared_ptr<vector<AdminDivisions::AdminDivision>> adminDivision_ {};
    };

    virtual bool empty() const override { return this->adminDivisions_ == nullptr
        && this->requestId_ == nullptr; };
    // adminDivisions Field Functions 
    bool hasAdminDivisions() const { return this->adminDivisions_ != nullptr;};
    void deleteAdminDivisions() { this->adminDivisions_ = nullptr;};
    inline const QueryDomainAdminDivisionResponseBody::AdminDivisions & getAdminDivisions() const { DARABONBA_PTR_GET_CONST(adminDivisions_, QueryDomainAdminDivisionResponseBody::AdminDivisions) };
    inline QueryDomainAdminDivisionResponseBody::AdminDivisions getAdminDivisions() { DARABONBA_PTR_GET(adminDivisions_, QueryDomainAdminDivisionResponseBody::AdminDivisions) };
    inline QueryDomainAdminDivisionResponseBody& setAdminDivisions(const QueryDomainAdminDivisionResponseBody::AdminDivisions & adminDivisions) { DARABONBA_PTR_SET_VALUE(adminDivisions_, adminDivisions) };
    inline QueryDomainAdminDivisionResponseBody& setAdminDivisions(QueryDomainAdminDivisionResponseBody::AdminDivisions && adminDivisions) { DARABONBA_PTR_SET_RVALUE(adminDivisions_, adminDivisions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainAdminDivisionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryDomainAdminDivisionResponseBody::AdminDivisions> adminDivisions_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
