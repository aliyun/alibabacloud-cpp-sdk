// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCLUSTERTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCLUSTERTYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListUserClusterTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserClusterTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserClusterTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserClusterTypesResponseBody() = default ;
    ListUserClusterTypesResponseBody(const ListUserClusterTypesResponseBody &) = default ;
    ListUserClusterTypesResponseBody(ListUserClusterTypesResponseBody &&) = default ;
    ListUserClusterTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserClusterTypesResponseBody() = default ;
    ListUserClusterTypesResponseBody& operator=(const ListUserClusterTypesResponseBody &) = default ;
    ListUserClusterTypesResponseBody& operator=(ListUserClusterTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterTypes& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      ClusterTypes() = default ;
      ClusterTypes(const ClusterTypes &) = default ;
      ClusterTypes(ClusterTypes &&) = default ;
      ClusterTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterTypes() = default ;
      ClusterTypes& operator=(const ClusterTypes &) = default ;
      ClusterTypes& operator=(ClusterTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->typeName_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline ClusterTypes& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline ClusterTypes& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      // The access type of cluster type
      shared_ptr<string> accessType_ {};
      // The name of cluster type
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->clusterTypes_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // clusterTypes Field Functions 
    bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
    void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
    inline const vector<ListUserClusterTypesResponseBody::ClusterTypes> & getClusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<ListUserClusterTypesResponseBody::ClusterTypes>) };
    inline vector<ListUserClusterTypesResponseBody::ClusterTypes> getClusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<ListUserClusterTypesResponseBody::ClusterTypes>) };
    inline ListUserClusterTypesResponseBody& setClusterTypes(const vector<ListUserClusterTypesResponseBody::ClusterTypes> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
    inline ListUserClusterTypesResponseBody& setClusterTypes(vector<ListUserClusterTypesResponseBody::ClusterTypes> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserClusterTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserClusterTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of cluster types. Number of elements in the array: 1 to 100.
    shared_ptr<vector<ListUserClusterTypesResponseBody::ClusterTypes>> clusterTypes_ {};
    // NextToken for the next page. Include this value when requesting the next page.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
