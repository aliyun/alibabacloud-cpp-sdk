// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTESTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTESTORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAttestorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttestorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attestors, attestors_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttestorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attestors, attestors_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAttestorsResponseBody() = default ;
    DescribeAttestorsResponseBody(const DescribeAttestorsResponseBody &) = default ;
    DescribeAttestorsResponseBody(DescribeAttestorsResponseBody &&) = default ;
    DescribeAttestorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttestorsResponseBody() = default ;
    DescribeAttestorsResponseBody& operator=(const DescribeAttestorsResponseBody &) = default ;
    DescribeAttestorsResponseBody& operator=(DescribeAttestorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Attestors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attestors& obj) { 
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(KeyRegionId, keyRegionId_);
        DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Attestors& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        DARABONBA_PTR_FROM_JSON(KeyRegionId, keyRegionId_);
        DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      Attestors() = default ;
      Attestors(const Attestors &) = default ;
      Attestors(Attestors &&) = default ;
      Attestors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attestors() = default ;
      Attestors& operator=(const Attestors &) = default ;
      Attestors& operator=(Attestors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyId_ == nullptr
        && this->keyRegionId_ == nullptr && this->keyVersionId_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr; };
      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline Attestors& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // keyRegionId Field Functions 
      bool hasKeyRegionId() const { return this->keyRegionId_ != nullptr;};
      void deleteKeyRegionId() { this->keyRegionId_ = nullptr;};
      inline string getKeyRegionId() const { DARABONBA_PTR_GET_DEFAULT(keyRegionId_, "") };
      inline Attestors& setKeyRegionId(string keyRegionId) { DARABONBA_PTR_SET_VALUE(keyRegionId_, keyRegionId) };


      // keyVersionId Field Functions 
      bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
      void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
      inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
      inline Attestors& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Attestors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Attestors& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The ID of the KMS key.
      shared_ptr<string> keyId_ {};
      // The region ID of the KMS key.
      shared_ptr<string> keyRegionId_ {};
      // The version ID of the Key Management Service (KMS) key.
      shared_ptr<string> keyVersionId_ {};
      // The name of the witness.
      shared_ptr<string> name_ {};
      // The description.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->attestors_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // attestors Field Functions 
    bool hasAttestors() const { return this->attestors_ != nullptr;};
    void deleteAttestors() { this->attestors_ = nullptr;};
    inline const vector<DescribeAttestorsResponseBody::Attestors> & getAttestors() const { DARABONBA_PTR_GET_CONST(attestors_, vector<DescribeAttestorsResponseBody::Attestors>) };
    inline vector<DescribeAttestorsResponseBody::Attestors> getAttestors() { DARABONBA_PTR_GET(attestors_, vector<DescribeAttestorsResponseBody::Attestors>) };
    inline DescribeAttestorsResponseBody& setAttestors(const vector<DescribeAttestorsResponseBody::Attestors> & attestors) { DARABONBA_PTR_SET_VALUE(attestors_, attestors) };
    inline DescribeAttestorsResponseBody& setAttestors(vector<DescribeAttestorsResponseBody::Attestors> && attestors) { DARABONBA_PTR_SET_RVALUE(attestors_, attestors) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAttestorsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAttestorsResponseBody::PageInfo) };
    inline DescribeAttestorsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAttestorsResponseBody::PageInfo) };
    inline DescribeAttestorsResponseBody& setPageInfo(const DescribeAttestorsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAttestorsResponseBody& setPageInfo(DescribeAttestorsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttestorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The witnesses.
    shared_ptr<vector<DescribeAttestorsResponseBody::Attestors>> attestors_ {};
    // The pagination information.
    shared_ptr<DescribeAttestorsResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
