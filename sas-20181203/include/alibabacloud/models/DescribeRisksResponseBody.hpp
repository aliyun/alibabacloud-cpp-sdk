// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSRESPONSEBODY_HPP_
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
  class DescribeRisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Risks, risks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Risks, risks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRisksResponseBody() = default ;
    DescribeRisksResponseBody(const DescribeRisksResponseBody &) = default ;
    DescribeRisksResponseBody(DescribeRisksResponseBody &&) = default ;
    DescribeRisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRisksResponseBody() = default ;
    DescribeRisksResponseBody& operator=(const DescribeRisksResponseBody &) = default ;
    DescribeRisksResponseBody& operator=(DescribeRisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Risks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Risks& obj) { 
        DARABONBA_PTR_TO_JSON(RiskDetail, riskDetail_);
        DARABONBA_PTR_TO_JSON(RiskId, riskId_);
        DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        DARABONBA_PTR_TO_JSON(RiskType, riskType_);
        DARABONBA_PTR_TO_JSON(SubRiskType, subRiskType_);
        DARABONBA_PTR_TO_JSON(SubTypeAlias, subTypeAlias_);
        DARABONBA_PTR_TO_JSON(TypeAlias, typeAlias_);
      };
      friend void from_json(const Darabonba::Json& j, Risks& obj) { 
        DARABONBA_PTR_FROM_JSON(RiskDetail, riskDetail_);
        DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
        DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
        DARABONBA_PTR_FROM_JSON(SubRiskType, subRiskType_);
        DARABONBA_PTR_FROM_JSON(SubTypeAlias, subTypeAlias_);
        DARABONBA_PTR_FROM_JSON(TypeAlias, typeAlias_);
      };
      Risks() = default ;
      Risks(const Risks &) = default ;
      Risks(Risks &&) = default ;
      Risks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Risks() = default ;
      Risks& operator=(const Risks &) = default ;
      Risks& operator=(Risks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->riskDetail_ == nullptr
        && this->riskId_ == nullptr && this->riskName_ == nullptr && this->riskType_ == nullptr && this->subRiskType_ == nullptr && this->subTypeAlias_ == nullptr
        && this->typeAlias_ == nullptr; };
      // riskDetail Field Functions 
      bool hasRiskDetail() const { return this->riskDetail_ != nullptr;};
      void deleteRiskDetail() { this->riskDetail_ = nullptr;};
      inline string getRiskDetail() const { DARABONBA_PTR_GET_DEFAULT(riskDetail_, "") };
      inline Risks& setRiskDetail(string riskDetail) { DARABONBA_PTR_SET_VALUE(riskDetail_, riskDetail) };


      // riskId Field Functions 
      bool hasRiskId() const { return this->riskId_ != nullptr;};
      void deleteRiskId() { this->riskId_ = nullptr;};
      inline int64_t getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
      inline Risks& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


      // riskName Field Functions 
      bool hasRiskName() const { return this->riskName_ != nullptr;};
      void deleteRiskName() { this->riskName_ = nullptr;};
      inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
      inline Risks& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline Risks& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      // subRiskType Field Functions 
      bool hasSubRiskType() const { return this->subRiskType_ != nullptr;};
      void deleteSubRiskType() { this->subRiskType_ = nullptr;};
      inline string getSubRiskType() const { DARABONBA_PTR_GET_DEFAULT(subRiskType_, "") };
      inline Risks& setSubRiskType(string subRiskType) { DARABONBA_PTR_SET_VALUE(subRiskType_, subRiskType) };


      // subTypeAlias Field Functions 
      bool hasSubTypeAlias() const { return this->subTypeAlias_ != nullptr;};
      void deleteSubTypeAlias() { this->subTypeAlias_ = nullptr;};
      inline string getSubTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(subTypeAlias_, "") };
      inline Risks& setSubTypeAlias(string subTypeAlias) { DARABONBA_PTR_SET_VALUE(subTypeAlias_, subTypeAlias) };


      // typeAlias Field Functions 
      bool hasTypeAlias() const { return this->typeAlias_ != nullptr;};
      void deleteTypeAlias() { this->typeAlias_ = nullptr;};
      inline string getTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(typeAlias_, "") };
      inline Risks& setTypeAlias(string typeAlias) { DARABONBA_PTR_SET_VALUE(typeAlias_, typeAlias) };


    protected:
      // The description of the baseline.
      shared_ptr<string> riskDetail_ {};
      // The baseline ID.
      shared_ptr<int64_t> riskId_ {};
      // The name of the baseline.
      shared_ptr<string> riskName_ {};
      // The name of the baseline type.
      shared_ptr<string> riskType_ {};
      // The name of the baseline subtype.
      shared_ptr<string> subRiskType_ {};
      // The display name of the baseline subtype.
      shared_ptr<string> subTypeAlias_ {};
      // The display name of the baseline type.
      shared_ptr<string> typeAlias_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->risks_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // risks Field Functions 
    bool hasRisks() const { return this->risks_ != nullptr;};
    void deleteRisks() { this->risks_ = nullptr;};
    inline const vector<DescribeRisksResponseBody::Risks> & getRisks() const { DARABONBA_PTR_GET_CONST(risks_, vector<DescribeRisksResponseBody::Risks>) };
    inline vector<DescribeRisksResponseBody::Risks> getRisks() { DARABONBA_PTR_GET(risks_, vector<DescribeRisksResponseBody::Risks>) };
    inline DescribeRisksResponseBody& setRisks(const vector<DescribeRisksResponseBody::Risks> & risks) { DARABONBA_PTR_SET_VALUE(risks_, risks) };
    inline DescribeRisksResponseBody& setRisks(vector<DescribeRisksResponseBody::Risks> && risks) { DARABONBA_PTR_SET_RVALUE(risks_, risks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRisksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The baselines.
    shared_ptr<vector<DescribeRisksResponseBody::Risks>> risks_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
