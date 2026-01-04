// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOECRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOECRRESPONSEBODY_HPP_
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
  class DescribeGrantRulesToEcrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EcrGrantRules, ecrGrantRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EcrGrantRules, ecrGrantRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToEcrResponseBody() = default ;
    DescribeGrantRulesToEcrResponseBody(const DescribeGrantRulesToEcrResponseBody &) = default ;
    DescribeGrantRulesToEcrResponseBody(DescribeGrantRulesToEcrResponseBody &&) = default ;
    DescribeGrantRulesToEcrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToEcrResponseBody() = default ;
    DescribeGrantRulesToEcrResponseBody& operator=(const DescribeGrantRulesToEcrResponseBody &) = default ;
    DescribeGrantRulesToEcrResponseBody& operator=(DescribeGrantRulesToEcrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcrGrantRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcrGrantRules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EcrInstanceId, ecrInstanceId_);
        DARABONBA_PTR_TO_JSON(EcrUid, ecrUid_);
      };
      friend void from_json(const Darabonba::Json& j, EcrGrantRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EcrInstanceId, ecrInstanceId_);
        DARABONBA_PTR_FROM_JSON(EcrUid, ecrUid_);
      };
      EcrGrantRules() = default ;
      EcrGrantRules(const EcrGrantRules &) = default ;
      EcrGrantRules(EcrGrantRules &&) = default ;
      EcrGrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcrGrantRules() = default ;
      EcrGrantRules& operator=(const EcrGrantRules &) = default ;
      EcrGrantRules& operator=(EcrGrantRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->ecrInstanceId_ == nullptr && this->ecrUid_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EcrGrantRules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // ecrInstanceId Field Functions 
      bool hasEcrInstanceId() const { return this->ecrInstanceId_ != nullptr;};
      void deleteEcrInstanceId() { this->ecrInstanceId_ = nullptr;};
      inline string getEcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecrInstanceId_, "") };
      inline EcrGrantRules& setEcrInstanceId(string ecrInstanceId) { DARABONBA_PTR_SET_VALUE(ecrInstanceId_, ecrInstanceId) };


      // ecrUid Field Functions 
      bool hasEcrUid() const { return this->ecrUid_ != nullptr;};
      void deleteEcrUid() { this->ecrUid_ = nullptr;};
      inline int64_t getEcrUid() const { DARABONBA_PTR_GET_DEFAULT(ecrUid_, 0L) };
      inline EcrGrantRules& setEcrUid(int64_t ecrUid) { DARABONBA_PTR_SET_VALUE(ecrUid_, ecrUid) };


    protected:
      // The authorization time. The time follows the ISO8601 standard and uses UTC time. The format is YYYY-MM-DDThh:mm:ssZ.
      shared_ptr<string> createTime_ {};
      // The ECR account ID.
      shared_ptr<string> ecrInstanceId_ {};
      // The ECR account ID.
      shared_ptr<int64_t> ecrUid_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->ecrGrantRules_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ecrGrantRules Field Functions 
    bool hasEcrGrantRules() const { return this->ecrGrantRules_ != nullptr;};
    void deleteEcrGrantRules() { this->ecrGrantRules_ = nullptr;};
    inline const vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules> & getEcrGrantRules() const { DARABONBA_PTR_GET_CONST(ecrGrantRules_, vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules>) };
    inline vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules> getEcrGrantRules() { DARABONBA_PTR_GET(ecrGrantRules_, vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules>) };
    inline DescribeGrantRulesToEcrResponseBody& setEcrGrantRules(const vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules> & ecrGrantRules) { DARABONBA_PTR_SET_VALUE(ecrGrantRules_, ecrGrantRules) };
    inline DescribeGrantRulesToEcrResponseBody& setEcrGrantRules(vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules> && ecrGrantRules) { DARABONBA_PTR_SET_RVALUE(ecrGrantRules_, ecrGrantRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToEcrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesToEcrResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The cross-account authorization list of the ECR
    shared_ptr<vector<DescribeGrantRulesToEcrResponseBody::EcrGrantRules>> ecrGrantRules_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on each page. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
