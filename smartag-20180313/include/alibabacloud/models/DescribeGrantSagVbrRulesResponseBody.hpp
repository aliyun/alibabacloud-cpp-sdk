// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTSAGVBRRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTSAGVBRRULESRESPONSEBODY_HPP_
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
  class DescribeGrantSagVbrRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantSagVbrRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantSagVbrRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantSagVbrRulesResponseBody() = default ;
    DescribeGrantSagVbrRulesResponseBody(const DescribeGrantSagVbrRulesResponseBody &) = default ;
    DescribeGrantSagVbrRulesResponseBody(DescribeGrantSagVbrRulesResponseBody &&) = default ;
    DescribeGrantSagVbrRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantSagVbrRulesResponseBody() = default ;
    DescribeGrantSagVbrRulesResponseBody& operator=(const DescribeGrantSagVbrRulesResponseBody &) = default ;
    DescribeGrantSagVbrRulesResponseBody& operator=(DescribeGrantSagVbrRulesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Bound, bound_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_TO_JSON(SmartAGUid, smartAGUid_);
          DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
          DARABONBA_PTR_TO_JSON(VbrRegionId, vbrRegionId_);
          DARABONBA_PTR_TO_JSON(VbrUid, vbrUid_);
        };
        friend void from_json(const Darabonba::Json& j, GrantRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Bound, bound_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_FROM_JSON(SmartAGUid, smartAGUid_);
          DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
          DARABONBA_PTR_FROM_JSON(VbrRegionId, vbrRegionId_);
          DARABONBA_PTR_FROM_JSON(VbrUid, vbrUid_);
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
        virtual bool empty() const override { return this->bound_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->smartAGId_ == nullptr && this->smartAGUid_ == nullptr && this->vbrInstanceId_ == nullptr
        && this->vbrRegionId_ == nullptr && this->vbrUid_ == nullptr; };
        // bound Field Functions 
        bool hasBound() const { return this->bound_ != nullptr;};
        void deleteBound() { this->bound_ = nullptr;};
        inline bool getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, false) };
        inline GrantRule& setBound(bool bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline GrantRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline GrantRule& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline GrantRule& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


        // smartAGUid Field Functions 
        bool hasSmartAGUid() const { return this->smartAGUid_ != nullptr;};
        void deleteSmartAGUid() { this->smartAGUid_ = nullptr;};
        inline int64_t getSmartAGUid() const { DARABONBA_PTR_GET_DEFAULT(smartAGUid_, 0L) };
        inline GrantRule& setSmartAGUid(int64_t smartAGUid) { DARABONBA_PTR_SET_VALUE(smartAGUid_, smartAGUid) };


        // vbrInstanceId Field Functions 
        bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
        void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
        inline string getVbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
        inline GrantRule& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


        // vbrRegionId Field Functions 
        bool hasVbrRegionId() const { return this->vbrRegionId_ != nullptr;};
        void deleteVbrRegionId() { this->vbrRegionId_ = nullptr;};
        inline string getVbrRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionId_, "") };
        inline GrantRule& setVbrRegionId(string vbrRegionId) { DARABONBA_PTR_SET_VALUE(vbrRegionId_, vbrRegionId) };


        // vbrUid Field Functions 
        bool hasVbrUid() const { return this->vbrUid_ != nullptr;};
        void deleteVbrUid() { this->vbrUid_ = nullptr;};
        inline int64_t getVbrUid() const { DARABONBA_PTR_GET_DEFAULT(vbrUid_, 0L) };
        inline GrantRule& setVbrUid(int64_t vbrUid) { DARABONBA_PTR_SET_VALUE(vbrUid_, vbrUid) };


      protected:
        shared_ptr<bool> bound_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> smartAGId_ {};
        shared_ptr<int64_t> smartAGUid_ {};
        shared_ptr<string> vbrInstanceId_ {};
        shared_ptr<string> vbrRegionId_ {};
        shared_ptr<int64_t> vbrUid_ {};
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
    inline const DescribeGrantSagVbrRulesResponseBody::GrantRules & getGrantRules() const { DARABONBA_PTR_GET_CONST(grantRules_, DescribeGrantSagVbrRulesResponseBody::GrantRules) };
    inline DescribeGrantSagVbrRulesResponseBody::GrantRules getGrantRules() { DARABONBA_PTR_GET(grantRules_, DescribeGrantSagVbrRulesResponseBody::GrantRules) };
    inline DescribeGrantSagVbrRulesResponseBody& setGrantRules(const DescribeGrantSagVbrRulesResponseBody::GrantRules & grantRules) { DARABONBA_PTR_SET_VALUE(grantRules_, grantRules) };
    inline DescribeGrantSagVbrRulesResponseBody& setGrantRules(DescribeGrantSagVbrRulesResponseBody::GrantRules && grantRules) { DARABONBA_PTR_SET_RVALUE(grantRules_, grantRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGrantSagVbrRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGrantSagVbrRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantSagVbrRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantSagVbrRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeGrantSagVbrRulesResponseBody::GrantRules> grantRules_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of authorization rules.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
