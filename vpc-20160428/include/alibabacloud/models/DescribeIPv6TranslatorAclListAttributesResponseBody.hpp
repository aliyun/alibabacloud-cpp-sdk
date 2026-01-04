// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeIPv6TranslatorAclListAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorAclListAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorAclListAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntries, aclEntries_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorAclListAttributesResponseBody() = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBody(const DescribeIPv6TranslatorAclListAttributesResponseBody &) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBody(DescribeIPv6TranslatorAclListAttributesResponseBody &&) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorAclListAttributesResponseBody() = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBody& operator=(const DescribeIPv6TranslatorAclListAttributesResponseBody &) = default ;
    DescribeIPv6TranslatorAclListAttributesResponseBody& operator=(DescribeIPv6TranslatorAclListAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(AclEntry, aclEntry_);
      };
      friend void from_json(const Darabonba::Json& j, AclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(AclEntry, aclEntry_);
      };
      AclEntries() = default ;
      AclEntries(const AclEntries &) = default ;
      AclEntries(AclEntries &&) = default ;
      AclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AclEntries() = default ;
      AclEntries& operator=(const AclEntries &) = default ;
      AclEntries& operator=(AclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AclEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AclEntry& obj) { 
          DARABONBA_PTR_TO_JSON(AclEntryComment, aclEntryComment_);
          DARABONBA_PTR_TO_JSON(AclEntryId, aclEntryId_);
          DARABONBA_PTR_TO_JSON(AclEntryIp, aclEntryIp_);
        };
        friend void from_json(const Darabonba::Json& j, AclEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(AclEntryComment, aclEntryComment_);
          DARABONBA_PTR_FROM_JSON(AclEntryId, aclEntryId_);
          DARABONBA_PTR_FROM_JSON(AclEntryIp, aclEntryIp_);
        };
        AclEntry() = default ;
        AclEntry(const AclEntry &) = default ;
        AclEntry(AclEntry &&) = default ;
        AclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AclEntry() = default ;
        AclEntry& operator=(const AclEntry &) = default ;
        AclEntry& operator=(AclEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aclEntryComment_ == nullptr
        && this->aclEntryId_ == nullptr && this->aclEntryIp_ == nullptr; };
        // aclEntryComment Field Functions 
        bool hasAclEntryComment() const { return this->aclEntryComment_ != nullptr;};
        void deleteAclEntryComment() { this->aclEntryComment_ = nullptr;};
        inline string getAclEntryComment() const { DARABONBA_PTR_GET_DEFAULT(aclEntryComment_, "") };
        inline AclEntry& setAclEntryComment(string aclEntryComment) { DARABONBA_PTR_SET_VALUE(aclEntryComment_, aclEntryComment) };


        // aclEntryId Field Functions 
        bool hasAclEntryId() const { return this->aclEntryId_ != nullptr;};
        void deleteAclEntryId() { this->aclEntryId_ = nullptr;};
        inline string getAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(aclEntryId_, "") };
        inline AclEntry& setAclEntryId(string aclEntryId) { DARABONBA_PTR_SET_VALUE(aclEntryId_, aclEntryId) };


        // aclEntryIp Field Functions 
        bool hasAclEntryIp() const { return this->aclEntryIp_ != nullptr;};
        void deleteAclEntryIp() { this->aclEntryIp_ = nullptr;};
        inline string getAclEntryIp() const { DARABONBA_PTR_GET_DEFAULT(aclEntryIp_, "") };
        inline AclEntry& setAclEntryIp(string aclEntryIp) { DARABONBA_PTR_SET_VALUE(aclEntryIp_, aclEntryIp) };


      protected:
        // The remarks of the ACL entry.
        shared_ptr<string> aclEntryComment_ {};
        // The ID of the ACL entry.
        shared_ptr<string> aclEntryId_ {};
        // The IP address specified in the ACL entry.
        shared_ptr<string> aclEntryIp_ {};
      };

      virtual bool empty() const override { return this->aclEntry_ == nullptr; };
      // aclEntry Field Functions 
      bool hasAclEntry() const { return this->aclEntry_ != nullptr;};
      void deleteAclEntry() { this->aclEntry_ = nullptr;};
      inline const vector<AclEntries::AclEntry> & getAclEntry() const { DARABONBA_PTR_GET_CONST(aclEntry_, vector<AclEntries::AclEntry>) };
      inline vector<AclEntries::AclEntry> getAclEntry() { DARABONBA_PTR_GET(aclEntry_, vector<AclEntries::AclEntry>) };
      inline AclEntries& setAclEntry(const vector<AclEntries::AclEntry> & aclEntry) { DARABONBA_PTR_SET_VALUE(aclEntry_, aclEntry) };
      inline AclEntries& setAclEntry(vector<AclEntries::AclEntry> && aclEntry) { DARABONBA_PTR_SET_RVALUE(aclEntry_, aclEntry) };


    protected:
      shared_ptr<vector<AclEntries::AclEntry>> aclEntry_ {};
    };

    virtual bool empty() const override { return this->aclEntries_ == nullptr
        && this->aclId_ == nullptr && this->aclName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries & getAclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries getAclEntries() { DARABONBA_PTR_GET(aclEntries_, DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclEntries(const DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclEntries(DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ACLs.
    shared_ptr<DescribeIPv6TranslatorAclListAttributesResponseBody::AclEntries> aclEntries_ {};
    // The ACL ID.
    shared_ptr<string> aclId_ {};
    // The name of the ACL.
    shared_ptr<string> aclName_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
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
