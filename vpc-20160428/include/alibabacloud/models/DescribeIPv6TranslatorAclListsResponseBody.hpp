// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorAclListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorAcls, ipv6TranslatorAcls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorAcls, ipv6TranslatorAcls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorAclListsResponseBody() = default ;
    DescribeIPv6TranslatorAclListsResponseBody(const DescribeIPv6TranslatorAclListsResponseBody &) = default ;
    DescribeIPv6TranslatorAclListsResponseBody(DescribeIPv6TranslatorAclListsResponseBody &&) = default ;
    DescribeIPv6TranslatorAclListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListsResponseBody() = default ;
    DescribeIPv6TranslatorAclListsResponseBody& operator=(const DescribeIPv6TranslatorAclListsResponseBody &) = default ;
    DescribeIPv6TranslatorAclListsResponseBody& operator=(DescribeIPv6TranslatorAclListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ipv6TranslatorAcls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6TranslatorAcls& obj) { 
        DARABONBA_PTR_TO_JSON(IPv6TranslatorAcl, IPv6TranslatorAcl_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6TranslatorAcls& obj) { 
        DARABONBA_PTR_FROM_JSON(IPv6TranslatorAcl, IPv6TranslatorAcl_);
      };
      Ipv6TranslatorAcls() = default ;
      Ipv6TranslatorAcls(const Ipv6TranslatorAcls &) = default ;
      Ipv6TranslatorAcls(Ipv6TranslatorAcls &&) = default ;
      Ipv6TranslatorAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6TranslatorAcls() = default ;
      Ipv6TranslatorAcls& operator=(const Ipv6TranslatorAcls &) = default ;
      Ipv6TranslatorAcls& operator=(Ipv6TranslatorAcls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IPv6TranslatorAcl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IPv6TranslatorAcl& obj) { 
          DARABONBA_PTR_TO_JSON(AclId, aclId_);
          DARABONBA_PTR_TO_JSON(AclName, aclName_);
        };
        friend void from_json(const Darabonba::Json& j, IPv6TranslatorAcl& obj) { 
          DARABONBA_PTR_FROM_JSON(AclId, aclId_);
          DARABONBA_PTR_FROM_JSON(AclName, aclName_);
        };
        IPv6TranslatorAcl() = default ;
        IPv6TranslatorAcl(const IPv6TranslatorAcl &) = default ;
        IPv6TranslatorAcl(IPv6TranslatorAcl &&) = default ;
        IPv6TranslatorAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IPv6TranslatorAcl() = default ;
        IPv6TranslatorAcl& operator=(const IPv6TranslatorAcl &) = default ;
        IPv6TranslatorAcl& operator=(IPv6TranslatorAcl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclName_ == nullptr; };
        // aclId Field Functions 
        bool hasAclId() const { return this->aclId_ != nullptr;};
        void deleteAclId() { this->aclId_ = nullptr;};
        inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
        inline IPv6TranslatorAcl& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


        // aclName Field Functions 
        bool hasAclName() const { return this->aclName_ != nullptr;};
        void deleteAclName() { this->aclName_ = nullptr;};
        inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
        inline IPv6TranslatorAcl& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


      protected:
        // The ACL ID.
        shared_ptr<string> aclId_ {};
        // The ACL name.
        shared_ptr<string> aclName_ {};
      };

      virtual bool empty() const override { return this->IPv6TranslatorAcl_ == nullptr; };
      // IPv6TranslatorAcl Field Functions 
      bool hasIPv6TranslatorAcl() const { return this->IPv6TranslatorAcl_ != nullptr;};
      void deleteIPv6TranslatorAcl() { this->IPv6TranslatorAcl_ = nullptr;};
      inline const vector<Ipv6TranslatorAcls::IPv6TranslatorAcl> & getIPv6TranslatorAcl() const { DARABONBA_PTR_GET_CONST(IPv6TranslatorAcl_, vector<Ipv6TranslatorAcls::IPv6TranslatorAcl>) };
      inline vector<Ipv6TranslatorAcls::IPv6TranslatorAcl> getIPv6TranslatorAcl() { DARABONBA_PTR_GET(IPv6TranslatorAcl_, vector<Ipv6TranslatorAcls::IPv6TranslatorAcl>) };
      inline Ipv6TranslatorAcls& setIPv6TranslatorAcl(const vector<Ipv6TranslatorAcls::IPv6TranslatorAcl> & iPv6TranslatorAcl) { DARABONBA_PTR_SET_VALUE(IPv6TranslatorAcl_, iPv6TranslatorAcl) };
      inline Ipv6TranslatorAcls& setIPv6TranslatorAcl(vector<Ipv6TranslatorAcls::IPv6TranslatorAcl> && iPv6TranslatorAcl) { DARABONBA_PTR_SET_RVALUE(IPv6TranslatorAcl_, iPv6TranslatorAcl) };


    protected:
      shared_ptr<vector<Ipv6TranslatorAcls::IPv6TranslatorAcl>> IPv6TranslatorAcl_ {};
    };

    virtual bool empty() const override { return this->ipv6TranslatorAcls_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // ipv6TranslatorAcls Field Functions 
    bool hasIpv6TranslatorAcls() const { return this->ipv6TranslatorAcls_ != nullptr;};
    void deleteIpv6TranslatorAcls() { this->ipv6TranslatorAcls_ = nullptr;};
    inline const DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls & getIpv6TranslatorAcls() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorAcls_, DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls) };
    inline DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls getIpv6TranslatorAcls() { DARABONBA_PTR_GET(ipv6TranslatorAcls_, DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setIpv6TranslatorAcls(const DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls & ipv6TranslatorAcls) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorAcls_, ipv6TranslatorAcls) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setIpv6TranslatorAcls(DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls && ipv6TranslatorAcls) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorAcls_, ipv6TranslatorAcls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorAclListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorAclListsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of network ACLs.
    shared_ptr<DescribeIPv6TranslatorAclListsResponseBody::Ipv6TranslatorAcls> ipv6TranslatorAcls_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
