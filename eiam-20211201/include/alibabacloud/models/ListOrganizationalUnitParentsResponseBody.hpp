// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONALUNITPARENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListOrganizationalUnitParentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationalUnitParentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parents, parents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationalUnitParentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parents, parents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOrganizationalUnitParentsResponseBody() = default ;
    ListOrganizationalUnitParentsResponseBody(const ListOrganizationalUnitParentsResponseBody &) = default ;
    ListOrganizationalUnitParentsResponseBody(ListOrganizationalUnitParentsResponseBody &&) = default ;
    ListOrganizationalUnitParentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationalUnitParentsResponseBody() = default ;
    ListOrganizationalUnitParentsResponseBody& operator=(const ListOrganizationalUnitParentsResponseBody &) = default ;
    ListOrganizationalUnitParentsResponseBody& operator=(ListOrganizationalUnitParentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parents& obj) { 
        DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, Parents& obj) { 
        DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      };
      Parents() = default ;
      Parents(const Parents &) = default ;
      Parents(Parents &&) = default ;
      Parents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parents() = default ;
      Parents& operator=(const Parents &) = default ;
      Parents& operator=(Parents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->organizationalUnitId_ == nullptr
        && this->parentId_ == nullptr; };
      // organizationalUnitId Field Functions 
      bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
      void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
      inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
      inline Parents& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Parents& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      // The organization ID.
      shared_ptr<string> organizationalUnitId_ {};
      // The parent organization ID.
      shared_ptr<string> parentId_ {};
    };

    virtual bool empty() const override { return this->parents_ == nullptr
        && this->requestId_ == nullptr; };
    // parents Field Functions 
    bool hasParents() const { return this->parents_ != nullptr;};
    void deleteParents() { this->parents_ = nullptr;};
    inline const vector<ListOrganizationalUnitParentsResponseBody::Parents> & getParents() const { DARABONBA_PTR_GET_CONST(parents_, vector<ListOrganizationalUnitParentsResponseBody::Parents>) };
    inline vector<ListOrganizationalUnitParentsResponseBody::Parents> getParents() { DARABONBA_PTR_GET(parents_, vector<ListOrganizationalUnitParentsResponseBody::Parents>) };
    inline ListOrganizationalUnitParentsResponseBody& setParents(const vector<ListOrganizationalUnitParentsResponseBody::Parents> & parents) { DARABONBA_PTR_SET_VALUE(parents_, parents) };
    inline ListOrganizationalUnitParentsResponseBody& setParents(vector<ListOrganizationalUnitParentsResponseBody::Parents> && parents) { DARABONBA_PTR_SET_RVALUE(parents_, parents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrganizationalUnitParentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parent organizations.
    shared_ptr<vector<ListOrganizationalUnitParentsResponseBody::Parents>> parents_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
