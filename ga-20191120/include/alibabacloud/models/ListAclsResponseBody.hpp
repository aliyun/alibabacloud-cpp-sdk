// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListAclsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acls, acls_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acls, acls_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAclsResponseBody() = default ;
    ListAclsResponseBody(const ListAclsResponseBody &) = default ;
    ListAclsResponseBody(ListAclsResponseBody &&) = default ;
    ListAclsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclsResponseBody() = default ;
    ListAclsResponseBody& operator=(const ListAclsResponseBody &) = default ;
    ListAclsResponseBody& operator=(ListAclsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Acls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acls& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(AclName, aclName_);
        DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Acls& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(AclName, aclName_);
        DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Acls() = default ;
      Acls(const Acls &) = default ;
      Acls(Acls &&) = default ;
      Acls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Acls() = default ;
      Acls& operator=(const Acls &) = default ;
      Acls& operator=(Acls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the network ACL.
        shared_ptr<string> key_ {};
        // The tag value of the network ACL.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclName_ == nullptr && this->aclStatus_ == nullptr && this->addressIPVersion_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline Acls& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // aclName Field Functions 
      bool hasAclName() const { return this->aclName_ != nullptr;};
      void deleteAclName() { this->aclName_ = nullptr;};
      inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
      inline Acls& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
      inline Acls& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // addressIPVersion Field Functions 
      bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
      void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
      inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
      inline Acls& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Acls& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Acls::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Acls::Tags>) };
      inline vector<Acls::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Acls::Tags>) };
      inline Acls& setTags(const vector<Acls::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Acls& setTags(vector<Acls::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the network ACL.
      shared_ptr<string> aclId_ {};
      // The name of the network ACL.
      shared_ptr<string> aclName_ {};
      // The status of the network ACL. Valid values:
      // 
      // *   **init**: The network ACL is being initialized.
      // *   **active**: The network ACL is available.
      // *   **configuring**: The network ACL is being configured.
      // *   **updating**: The network ACL is being updated.
      // *   **deleting:** The network ACL is being deleted.
      shared_ptr<string> aclStatus_ {};
      // The IP version of the network ACL. Valid values:
      // 
      // *   **IPv4**
      // *   **IPv6**
      shared_ptr<string> addressIPVersion_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the network ACL.
      shared_ptr<vector<Acls::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->acls_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // acls Field Functions 
    bool hasAcls() const { return this->acls_ != nullptr;};
    void deleteAcls() { this->acls_ = nullptr;};
    inline const vector<ListAclsResponseBody::Acls> & getAcls() const { DARABONBA_PTR_GET_CONST(acls_, vector<ListAclsResponseBody::Acls>) };
    inline vector<ListAclsResponseBody::Acls> getAcls() { DARABONBA_PTR_GET(acls_, vector<ListAclsResponseBody::Acls>) };
    inline ListAclsResponseBody& setAcls(const vector<ListAclsResponseBody::Acls> & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
    inline ListAclsResponseBody& setAcls(vector<ListAclsResponseBody::Acls> && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAclsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAclsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAclsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAclsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The network ACLs.
    shared_ptr<vector<ListAclsResponseBody::Acls>> acls_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** is not returned, it indicates that no additional results exist.
    // *   If **NextToken** is returned, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
