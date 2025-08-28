// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORACLLISTATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries.hpp>
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
    virtual bool empty() const override { this->aclEntries_ != nullptr
        && this->aclId_ != nullptr && this->aclName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // aclEntries Field Functions 
    bool hasAclEntries() const { return this->aclEntries_ != nullptr;};
    void deleteAclEntries() { this->aclEntries_ = nullptr;};
    inline const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries & aclEntries() const { DARABONBA_PTR_GET_CONST(aclEntries_, DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries aclEntries() { DARABONBA_PTR_GET(aclEntries_, DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclEntries(const DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries & aclEntries) { DARABONBA_PTR_SET_VALUE(aclEntries_, aclEntries) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclEntries(DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries && aclEntries) { DARABONBA_PTR_SET_RVALUE(aclEntries_, aclEntries) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorAclListAttributesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ACLs.
    std::shared_ptr<DescribeIPv6TranslatorAclListAttributesResponseBodyAclEntries> aclEntries_ = nullptr;
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The name of the ACL.
    std::shared_ptr<string> aclName_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
