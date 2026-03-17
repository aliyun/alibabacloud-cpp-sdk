// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESRESPONSEBODY_HPP_
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
  class DescribeGrantRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesResponseBody() = default ;
    DescribeGrantRulesResponseBody(const DescribeGrantRulesResponseBody &) = default ;
    DescribeGrantRulesResponseBody(DescribeGrantRulesResponseBody &&) = default ;
    DescribeGrantRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesResponseBody() = default ;
    DescribeGrantRulesResponseBody& operator=(const DescribeGrantRulesResponseBody &) = default ;
    DescribeGrantRulesResponseBody& operator=(DescribeGrantRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantRules& obj) { 
        DARABONBA_PTR_TO_JSON(GrantRule, grantRule_);
      };
      friend void from_json(const Darabonba::Json& j, GrantRules& obj) { 
        DARABONBA_PTR_FROM_JSON(GrantRule, grantRule_);
      };
      GrantRules() = default ;
      GrantRules(const GrantRules &) = default ;
      GrantRules(GrantRules &&) = default ;
      GrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantRules() = default ;
      GrantRules& operator=(const GrantRules &) = default ;
      GrantRules& operator=(GrantRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GrantRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrantRule& obj) { 
          DARABONBA_PTR_TO_JSON(CcnInstanceId, ccnInstanceId_);
          DARABONBA_PTR_TO_JSON(CcnUid, ccnUid_);
          DARABONBA_PTR_TO_JSON(CenInstanceId, cenInstanceId_);
          DARABONBA_PTR_TO_JSON(CenUid, cenUid_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
          DARABONBA_PTR_TO_JSON(GrantTrafficService, grantTrafficService_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, GrantRule& obj) { 
          DARABONBA_PTR_FROM_JSON(CcnInstanceId, ccnInstanceId_);
          DARABONBA_PTR_FROM_JSON(CcnUid, ccnUid_);
          DARABONBA_PTR_FROM_JSON(CenInstanceId, cenInstanceId_);
          DARABONBA_PTR_FROM_JSON(CenUid, cenUid_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
          DARABONBA_PTR_FROM_JSON(GrantTrafficService, grantTrafficService_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        GrantRule() = default ;
        GrantRule(const GrantRule &) = default ;
        GrantRule(GrantRule &&) = default ;
        GrantRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrantRule() = default ;
        GrantRule& operator=(const GrantRule &) = default ;
        GrantRule& operator=(GrantRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ccnInstanceId_ == nullptr
        && this->ccnUid_ == nullptr && this->cenInstanceId_ == nullptr && this->cenUid_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->grantRuleId_ == nullptr && this->grantTrafficService_ == nullptr && this->regionId_ == nullptr; };
        // ccnInstanceId Field Functions 
        bool hasCcnInstanceId() const { return this->ccnInstanceId_ != nullptr;};
        void deleteCcnInstanceId() { this->ccnInstanceId_ = nullptr;};
        inline string getCcnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ccnInstanceId_, "") };
        inline GrantRule& setCcnInstanceId(string ccnInstanceId) { DARABONBA_PTR_SET_VALUE(ccnInstanceId_, ccnInstanceId) };


        // ccnUid Field Functions 
        bool hasCcnUid() const { return this->ccnUid_ != nullptr;};
        void deleteCcnUid() { this->ccnUid_ = nullptr;};
        inline int64_t getCcnUid() const { DARABONBA_PTR_GET_DEFAULT(ccnUid_, 0L) };
        inline GrantRule& setCcnUid(int64_t ccnUid) { DARABONBA_PTR_SET_VALUE(ccnUid_, ccnUid) };


        // cenInstanceId Field Functions 
        bool hasCenInstanceId() const { return this->cenInstanceId_ != nullptr;};
        void deleteCenInstanceId() { this->cenInstanceId_ = nullptr;};
        inline string getCenInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cenInstanceId_, "") };
        inline GrantRule& setCenInstanceId(string cenInstanceId) { DARABONBA_PTR_SET_VALUE(cenInstanceId_, cenInstanceId) };


        // cenUid Field Functions 
        bool hasCenUid() const { return this->cenUid_ != nullptr;};
        void deleteCenUid() { this->cenUid_ = nullptr;};
        inline int64_t getCenUid() const { DARABONBA_PTR_GET_DEFAULT(cenUid_, 0L) };
        inline GrantRule& setCenUid(int64_t cenUid) { DARABONBA_PTR_SET_VALUE(cenUid_, cenUid) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline GrantRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline GrantRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // grantRuleId Field Functions 
        bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
        void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
        inline string getGrantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
        inline GrantRule& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


        // grantTrafficService Field Functions 
        bool hasGrantTrafficService() const { return this->grantTrafficService_ != nullptr;};
        void deleteGrantTrafficService() { this->grantTrafficService_ = nullptr;};
        inline bool getGrantTrafficService() const { DARABONBA_PTR_GET_DEFAULT(grantTrafficService_, false) };
        inline GrantRule& setGrantTrafficService(bool grantTrafficService) { DARABONBA_PTR_SET_VALUE(grantTrafficService_, grantTrafficService) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GrantRule& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        shared_ptr<string> ccnInstanceId_ {};
        shared_ptr<int64_t> ccnUid_ {};
        shared_ptr<string> cenInstanceId_ {};
        shared_ptr<int64_t> cenUid_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<string> grantRuleId_ {};
        shared_ptr<bool> grantTrafficService_ {};
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->grantRule_ == nullptr; };
      // grantRule Field Functions 
      bool hasGrantRule() const { return this->grantRule_ != nullptr;};
      void deleteGrantRule() { this->grantRule_ = nullptr;};
      inline const vector<GrantRules::GrantRule> & getGrantRule() const { DARABONBA_PTR_GET_CONST(grantRule_, vector<GrantRules::GrantRule>) };
      inline vector<GrantRules::GrantRule> getGrantRule() { DARABONBA_PTR_GET(grantRule_, vector<GrantRules::GrantRule>) };
      inline GrantRules& setGrantRule(const vector<GrantRules::GrantRule> & grantRule) { DARABONBA_PTR_SET_VALUE(grantRule_, grantRule) };
      inline GrantRules& setGrantRule(vector<GrantRules::GrantRule> && grantRule) { DARABONBA_PTR_SET_RVALUE(grantRule_, grantRule) };


    protected:
      shared_ptr<vector<GrantRules::GrantRule>> grantRule_ {};
    };

    virtual bool empty() const override { return this->grantRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // grantRules Field Functions 
    bool hasGrantRules() const { return this->grantRules_ != nullptr;};
    void deleteGrantRules() { this->grantRules_ = nullptr;};
    inline const DescribeGrantRulesResponseBody::GrantRules & getGrantRules() const { DARABONBA_PTR_GET_CONST(grantRules_, DescribeGrantRulesResponseBody::GrantRules) };
    inline DescribeGrantRulesResponseBody::GrantRules getGrantRules() { DARABONBA_PTR_GET(grantRules_, DescribeGrantRulesResponseBody::GrantRules) };
    inline DescribeGrantRulesResponseBody& setGrantRules(const DescribeGrantRulesResponseBody::GrantRules & grantRules) { DARABONBA_PTR_SET_VALUE(grantRules_, grantRules) };
    inline DescribeGrantRulesResponseBody& setGrantRules(DescribeGrantRulesResponseBody::GrantRules && grantRules) { DARABONBA_PTR_SET_RVALUE(grantRules_, grantRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGrantRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGrantRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeGrantRulesResponseBody::GrantRules> grantRules_ {};
    // The page number of the returned page.
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
} // namespace Smartag20180313
#endif
