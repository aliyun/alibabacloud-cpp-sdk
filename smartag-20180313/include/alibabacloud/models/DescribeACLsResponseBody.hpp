// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeACLsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeACLsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acls, acls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeACLsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acls, acls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeACLsResponseBody() = default ;
    DescribeACLsResponseBody(const DescribeACLsResponseBody &) = default ;
    DescribeACLsResponseBody(DescribeACLsResponseBody &&) = default ;
    DescribeACLsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeACLsResponseBody() = default ;
    DescribeACLsResponseBody& operator=(const DescribeACLsResponseBody &) = default ;
    DescribeACLsResponseBody& operator=(DescribeACLsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AclType, aclType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SagCount, sagCount_);
        };
        friend void from_json(const Darabonba::Json& j, Acl& obj) { 
          DARABONBA_PTR_FROM_JSON(AclId, aclId_);
          DARABONBA_PTR_FROM_JSON(AclType, aclType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SagCount, sagCount_);
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
        && this->aclType_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr && this->sagCount_ == nullptr; };
        // aclId Field Functions 
        bool hasAclId() const { return this->aclId_ != nullptr;};
        void deleteAclId() { this->aclId_ = nullptr;};
        inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
        inline Acl& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


        // aclType Field Functions 
        bool hasAclType() const { return this->aclType_ != nullptr;};
        void deleteAclType() { this->aclType_ = nullptr;};
        inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
        inline Acl& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Acl& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Acl& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // sagCount Field Functions 
        bool hasSagCount() const { return this->sagCount_ != nullptr;};
        void deleteSagCount() { this->sagCount_ = nullptr;};
        inline string getSagCount() const { DARABONBA_PTR_GET_DEFAULT(sagCount_, "") };
        inline Acl& setSagCount(string sagCount) { DARABONBA_PTR_SET_VALUE(sagCount_, sagCount) };


      protected:
        shared_ptr<string> aclId_ {};
        shared_ptr<string> aclType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> sagCount_ {};
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
    inline const DescribeACLsResponseBody::Acls & getAcls() const { DARABONBA_PTR_GET_CONST(acls_, DescribeACLsResponseBody::Acls) };
    inline DescribeACLsResponseBody::Acls getAcls() { DARABONBA_PTR_GET(acls_, DescribeACLsResponseBody::Acls) };
    inline DescribeACLsResponseBody& setAcls(const DescribeACLsResponseBody::Acls & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
    inline DescribeACLsResponseBody& setAcls(DescribeACLsResponseBody::Acls && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeACLsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeACLsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeACLsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeACLsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeACLsResponseBody::Acls> acls_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
