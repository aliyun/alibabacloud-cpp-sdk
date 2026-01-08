// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECFWRISKLEVELSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECFWRISKLEVELSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCfwRiskLevelSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCfwRiskLevelSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCfwRiskLevelSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
    };
    DescribeCfwRiskLevelSummaryResponseBody() = default ;
    DescribeCfwRiskLevelSummaryResponseBody(const DescribeCfwRiskLevelSummaryResponseBody &) = default ;
    DescribeCfwRiskLevelSummaryResponseBody(DescribeCfwRiskLevelSummaryResponseBody &&) = default ;
    DescribeCfwRiskLevelSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCfwRiskLevelSummaryResponseBody() = default ;
    DescribeCfwRiskLevelSummaryResponseBody& operator=(const DescribeCfwRiskLevelSummaryResponseBody &) = default ;
    DescribeCfwRiskLevelSummaryResponseBody& operator=(DescribeCfwRiskLevelSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Num, num_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Num, num_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RiskList() = default ;
      RiskList(const RiskList &) = default ;
      RiskList(RiskList &&) = default ;
      RiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskList() = default ;
      RiskList& operator=(const RiskList &) = default ;
      RiskList& operator=(RiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->level_ == nullptr
        && this->num_ == nullptr && this->type_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline RiskList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // num Field Functions 
      bool hasNum() const { return this->num_ != nullptr;};
      void deleteNum() { this->num_ = nullptr;};
      inline string getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, "") };
      inline RiskList& setNum(string num) { DARABONBA_PTR_SET_VALUE(num_, num) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RiskList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The risk levels. Valid values:
      // 
      // *   **medium**
      shared_ptr<string> level_ {};
      // The number of at-risk Elastic Compute Service (ECS) instances.
      shared_ptr<string> num_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCfwRiskLevelSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList>) };
    inline vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList>) };
    inline DescribeCfwRiskLevelSummaryResponseBody& setRiskList(const vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline DescribeCfwRiskLevelSummaryResponseBody& setRiskList(vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of risks.
    shared_ptr<vector<DescribeCfwRiskLevelSummaryResponseBody::RiskList>> riskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
