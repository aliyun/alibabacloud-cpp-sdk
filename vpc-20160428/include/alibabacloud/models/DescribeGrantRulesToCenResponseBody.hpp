// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODY_HPP_
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
  class DescribeGrantRulesToCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenGrantRules, cenGrantRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenGrantRules, cenGrantRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToCenResponseBody() = default ;
    DescribeGrantRulesToCenResponseBody(const DescribeGrantRulesToCenResponseBody &) = default ;
    DescribeGrantRulesToCenResponseBody(DescribeGrantRulesToCenResponseBody &&) = default ;
    DescribeGrantRulesToCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBody() = default ;
    DescribeGrantRulesToCenResponseBody& operator=(const DescribeGrantRulesToCenResponseBody &) = default ;
    DescribeGrantRulesToCenResponseBody& operator=(DescribeGrantRulesToCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CenGrantRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CenGrantRules& obj) { 
        DARABONBA_PTR_TO_JSON(CbnGrantRule, cbnGrantRule_);
      };
      friend void from_json(const Darabonba::Json& j, CenGrantRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CbnGrantRule, cbnGrantRule_);
      };
      CenGrantRules() = default ;
      CenGrantRules(const CenGrantRules &) = default ;
      CenGrantRules(CenGrantRules &&) = default ;
      CenGrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CenGrantRules() = default ;
      CenGrantRules& operator=(const CenGrantRules &) = default ;
      CenGrantRules& operator=(CenGrantRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CbnGrantRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CbnGrantRule& obj) { 
          DARABONBA_PTR_TO_JSON(CenInstanceId, cenInstanceId_);
          DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        };
        friend void from_json(const Darabonba::Json& j, CbnGrantRule& obj) { 
          DARABONBA_PTR_FROM_JSON(CenInstanceId, cenInstanceId_);
          DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        };
        CbnGrantRule() = default ;
        CbnGrantRule(const CbnGrantRule &) = default ;
        CbnGrantRule(CbnGrantRule &&) = default ;
        CbnGrantRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CbnGrantRule() = default ;
        CbnGrantRule& operator=(const CbnGrantRule &) = default ;
        CbnGrantRule& operator=(CbnGrantRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cenInstanceId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->creationTime_ == nullptr; };
        // cenInstanceId Field Functions 
        bool hasCenInstanceId() const { return this->cenInstanceId_ != nullptr;};
        void deleteCenInstanceId() { this->cenInstanceId_ = nullptr;};
        inline string getCenInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cenInstanceId_, "") };
        inline CbnGrantRule& setCenInstanceId(string cenInstanceId) { DARABONBA_PTR_SET_VALUE(cenInstanceId_, cenInstanceId) };


        // cenOwnerId Field Functions 
        bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
        void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
        inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
        inline CbnGrantRule& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline CbnGrantRule& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      protected:
        // The ID of the authorized CEN instance.
        shared_ptr<string> cenInstanceId_ {};
        // The UID of the Alibaba Cloud account to which the authorized CEN instance belongs.
        shared_ptr<int64_t> cenOwnerId_ {};
        // The time when the instance was created.
        shared_ptr<string> creationTime_ {};
      };

      virtual bool empty() const override { return this->cbnGrantRule_ == nullptr; };
      // cbnGrantRule Field Functions 
      bool hasCbnGrantRule() const { return this->cbnGrantRule_ != nullptr;};
      void deleteCbnGrantRule() { this->cbnGrantRule_ = nullptr;};
      inline const vector<CenGrantRules::CbnGrantRule> & getCbnGrantRule() const { DARABONBA_PTR_GET_CONST(cbnGrantRule_, vector<CenGrantRules::CbnGrantRule>) };
      inline vector<CenGrantRules::CbnGrantRule> getCbnGrantRule() { DARABONBA_PTR_GET(cbnGrantRule_, vector<CenGrantRules::CbnGrantRule>) };
      inline CenGrantRules& setCbnGrantRule(const vector<CenGrantRules::CbnGrantRule> & cbnGrantRule) { DARABONBA_PTR_SET_VALUE(cbnGrantRule_, cbnGrantRule) };
      inline CenGrantRules& setCbnGrantRule(vector<CenGrantRules::CbnGrantRule> && cbnGrantRule) { DARABONBA_PTR_SET_RVALUE(cbnGrantRule_, cbnGrantRule) };


    protected:
      shared_ptr<vector<CenGrantRules::CbnGrantRule>> cbnGrantRule_ {};
    };

    virtual bool empty() const override { return this->cenGrantRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cenGrantRules Field Functions 
    bool hasCenGrantRules() const { return this->cenGrantRules_ != nullptr;};
    void deleteCenGrantRules() { this->cenGrantRules_ = nullptr;};
    inline const DescribeGrantRulesToCenResponseBody::CenGrantRules & getCenGrantRules() const { DARABONBA_PTR_GET_CONST(cenGrantRules_, DescribeGrantRulesToCenResponseBody::CenGrantRules) };
    inline DescribeGrantRulesToCenResponseBody::CenGrantRules getCenGrantRules() { DARABONBA_PTR_GET(cenGrantRules_, DescribeGrantRulesToCenResponseBody::CenGrantRules) };
    inline DescribeGrantRulesToCenResponseBody& setCenGrantRules(const DescribeGrantRulesToCenResponseBody::CenGrantRules & cenGrantRules) { DARABONBA_PTR_SET_VALUE(cenGrantRules_, cenGrantRules) };
    inline DescribeGrantRulesToCenResponseBody& setCenGrantRules(DescribeGrantRulesToCenResponseBody::CenGrantRules && cenGrantRules) { DARABONBA_PTR_SET_RVALUE(cenGrantRules_, cenGrantRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGrantRulesToCenResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGrantRulesToCenResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesToCenResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the authorization.
    shared_ptr<DescribeGrantRulesToCenResponseBody::CenGrantRules> cenGrantRules_ {};
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
} // namespace Vpc20160428
#endif
