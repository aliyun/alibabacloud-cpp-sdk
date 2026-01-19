// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acls, acls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acls, acls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessControlListsResponseBody() = default ;
    DescribeAccessControlListsResponseBody(const DescribeAccessControlListsResponseBody &) = default ;
    DescribeAccessControlListsResponseBody(DescribeAccessControlListsResponseBody &&) = default ;
    DescribeAccessControlListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsResponseBody() = default ;
    DescribeAccessControlListsResponseBody& operator=(const DescribeAccessControlListsResponseBody &) = default ;
    DescribeAccessControlListsResponseBody& operator=(DescribeAccessControlListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Acls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acls& obj) { 
        DARABONBA_PTR_TO_JSON(Acl, acl_);
      };
      friend void from_json(const Darabonba::Json& j, Acls& obj) { 
        DARABONBA_PTR_FROM_JSON(Acl, acl_);
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
      class Acl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Acl& obj) { 
          DARABONBA_PTR_TO_JSON(AclId, aclId_);
          DARABONBA_PTR_TO_JSON(AclName, aclName_);
          DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
        };
        friend void from_json(const Darabonba::Json& j, Acl& obj) { 
          DARABONBA_PTR_FROM_JSON(AclId, aclId_);
          DARABONBA_PTR_FROM_JSON(AclName, aclName_);
          DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
        };
        Acl() = default ;
        Acl(const Acl &) = default ;
        Acl(Acl &&) = default ;
        Acl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Acl() = default ;
        Acl& operator=(const Acl &) = default ;
        Acl& operator=(Acl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclName_ == nullptr && this->addressIPVersion_ == nullptr; };
        // aclId Field Functions 
        bool hasAclId() const { return this->aclId_ != nullptr;};
        void deleteAclId() { this->aclId_ = nullptr;};
        inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
        inline Acl& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


        // aclName Field Functions 
        bool hasAclName() const { return this->aclName_ != nullptr;};
        void deleteAclName() { this->aclName_ = nullptr;};
        inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
        inline Acl& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


        // addressIPVersion Field Functions 
        bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
        void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
        inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
        inline Acl& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


      protected:
        // The ID of the access control policy.
        shared_ptr<string> aclId_ {};
        // The name of the access control policy.
        shared_ptr<string> aclName_ {};
        // 访问控制策略组的IP版本。
        // - **IPv4**。
        // - **IPv6**。
        shared_ptr<string> addressIPVersion_ {};
      };

      virtual bool empty() const override { return this->acl_ == nullptr; };
      // acl Field Functions 
      bool hasAcl() const { return this->acl_ != nullptr;};
      void deleteAcl() { this->acl_ = nullptr;};
      inline const vector<Acls::Acl> & getAcl() const { DARABONBA_PTR_GET_CONST(acl_, vector<Acls::Acl>) };
      inline vector<Acls::Acl> getAcl() { DARABONBA_PTR_GET(acl_, vector<Acls::Acl>) };
      inline Acls& setAcl(const vector<Acls::Acl> & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
      inline Acls& setAcl(vector<Acls::Acl> && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    protected:
      shared_ptr<vector<Acls::Acl>> acl_ {};
    };

    virtual bool empty() const override { return this->acls_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // acls Field Functions 
    bool hasAcls() const { return this->acls_ != nullptr;};
    void deleteAcls() { this->acls_ = nullptr;};
    inline const DescribeAccessControlListsResponseBody::Acls & getAcls() const { DARABONBA_PTR_GET_CONST(acls_, DescribeAccessControlListsResponseBody::Acls) };
    inline DescribeAccessControlListsResponseBody::Acls getAcls() { DARABONBA_PTR_GET(acls_, DescribeAccessControlListsResponseBody::Acls) };
    inline DescribeAccessControlListsResponseBody& setAcls(const DescribeAccessControlListsResponseBody::Acls & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
    inline DescribeAccessControlListsResponseBody& setAcls(DescribeAccessControlListsResponseBody::Acls && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessControlListsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessControlListsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessControlListsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ACLs.
    shared_ptr<DescribeAccessControlListsResponseBody::Acls> acls_ {};
    // The page number of the current page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
