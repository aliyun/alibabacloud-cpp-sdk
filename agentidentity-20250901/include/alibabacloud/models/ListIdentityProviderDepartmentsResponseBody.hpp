// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListIdentityProviderDepartmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProviderDepartmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Departments, departments_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProviderDepartmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Departments, departments_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIdentityProviderDepartmentsResponseBody() = default ;
    ListIdentityProviderDepartmentsResponseBody(const ListIdentityProviderDepartmentsResponseBody &) = default ;
    ListIdentityProviderDepartmentsResponseBody(ListIdentityProviderDepartmentsResponseBody &&) = default ;
    ListIdentityProviderDepartmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProviderDepartmentsResponseBody() = default ;
    ListIdentityProviderDepartmentsResponseBody& operator=(const ListIdentityProviderDepartmentsResponseBody &) = default ;
    ListIdentityProviderDepartmentsResponseBody& operator=(ListIdentityProviderDepartmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Departments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Departments& obj) { 
        DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MemberCount, memberCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, Departments& obj) { 
        DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MemberCount, memberCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      };
      Departments() = default ;
      Departments(const Departments &) = default ;
      Departments(Departments &&) = default ;
      Departments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Departments() = default ;
      Departments& operator=(const Departments &) = default ;
      Departments& operator=(Departments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasChildren_ == nullptr
        && this->id_ == nullptr && this->memberCount_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr; };
      // hasChildren Field Functions 
      bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
      void deleteHasChildren() { this->hasChildren_ = nullptr;};
      inline bool getHasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
      inline Departments& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Departments& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // memberCount Field Functions 
      bool hasMemberCount() const { return this->memberCount_ != nullptr;};
      void deleteMemberCount() { this->memberCount_ = nullptr;};
      inline int64_t getMemberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0L) };
      inline Departments& setMemberCount(int64_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Departments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Departments& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      shared_ptr<bool> hasChildren_ {};
      shared_ptr<string> id_ {};
      shared_ptr<int64_t> memberCount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> parentId_ {};
    };

    virtual bool empty() const override { return this->departments_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // departments Field Functions 
    bool hasDepartments() const { return this->departments_ != nullptr;};
    void deleteDepartments() { this->departments_ = nullptr;};
    inline const vector<ListIdentityProviderDepartmentsResponseBody::Departments> & getDepartments() const { DARABONBA_PTR_GET_CONST(departments_, vector<ListIdentityProviderDepartmentsResponseBody::Departments>) };
    inline vector<ListIdentityProviderDepartmentsResponseBody::Departments> getDepartments() { DARABONBA_PTR_GET(departments_, vector<ListIdentityProviderDepartmentsResponseBody::Departments>) };
    inline ListIdentityProviderDepartmentsResponseBody& setDepartments(const vector<ListIdentityProviderDepartmentsResponseBody::Departments> & departments) { DARABONBA_PTR_SET_VALUE(departments_, departments) };
    inline ListIdentityProviderDepartmentsResponseBody& setDepartments(vector<ListIdentityProviderDepartmentsResponseBody::Departments> && departments) { DARABONBA_PTR_SET_RVALUE(departments_, departments) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProviderDepartmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProviderDepartmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListIdentityProviderDepartmentsResponseBody::Departments>> departments_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
