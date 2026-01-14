// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLEVELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLEVELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeRiskLevelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskLevelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
    };
    DescribeRiskLevelsResponseBody() = default ;
    DescribeRiskLevelsResponseBody(const DescribeRiskLevelsResponseBody &) = default ;
    DescribeRiskLevelsResponseBody(DescribeRiskLevelsResponseBody &&) = default ;
    DescribeRiskLevelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskLevelsResponseBody() = default ;
    DescribeRiskLevelsResponseBody& operator=(const DescribeRiskLevelsResponseBody &) = default ;
    DescribeRiskLevelsResponseBody& operator=(DescribeRiskLevelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskLevelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskLevelList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ReferenceNum, referenceNum_);
      };
      friend void from_json(const Darabonba::Json& j, RiskLevelList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ReferenceNum, referenceNum_);
      };
      RiskLevelList() = default ;
      RiskLevelList(const RiskLevelList &) = default ;
      RiskLevelList(RiskLevelList &&) = default ;
      RiskLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskLevelList() = default ;
      RiskLevelList& operator=(const RiskLevelList &) = default ;
      RiskLevelList& operator=(RiskLevelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->referenceNum_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RiskLevelList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RiskLevelList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RiskLevelList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // referenceNum Field Functions 
      bool hasReferenceNum() const { return this->referenceNum_ != nullptr;};
      void deleteReferenceNum() { this->referenceNum_ = nullptr;};
      inline int32_t getReferenceNum() const { DARABONBA_PTR_GET_DEFAULT(referenceNum_, 0) };
      inline RiskLevelList& setReferenceNum(int32_t referenceNum) { DARABONBA_PTR_SET_VALUE(referenceNum_, referenceNum) };


    protected:
      // The description of the sensitivity level. You can enter a custom description.
      // 
      // The following list describes the sensitivity level names and the corresponding default description:
      // 
      // *   **NA**: which indicates that no sensitive data is detected.
      // *   **S1**: which indicates the sensitive data at sensitivity level 1.
      // *   **S2**: which indicates the sensitive data at sensitivity level 2.
      // *   **S3**: which indicates the sensitive data at sensitivity level 3.
      // *   **S4**: which indicates the sensitive data at sensitivity level 4.
      // *   **S5**: which indicates the sensitive data at sensitivity level 5.
      // *   **S6**: which indicates the sensitive data at sensitivity level 6.
      // *   **S7**: which indicates the sensitive data at sensitivity level 7.
      // *   **S8**: which indicates the sensitive data at sensitivity level 8.
      // *   **S9**: which indicates the sensitive data at sensitivity level 9.
      // *   **S10**: which indicates the sensitive data at sensitivity level 10.
      shared_ptr<string> description_ {};
      // The unique ID of the sensitivity level. Valid values: 1 to 11. Each sensitivity level ID maps a sensitivity level. For example, the sensitivity level ID of 2 corresponds to the sensitivity level S1.
      // 
      // For more information, see the description of the Name parameter.
      shared_ptr<int64_t> id_ {};
      // The name of the sensitivity level. The highest sensitivity level varies based on rule templates. The highest sensitivity level is S10. The highest sensitivity level of the **Built-in data security classification templates for Alibaba and Ant Group** is S4, and that of the **built-in classification templates for financial data** and **built-in classification templates for assets** is S5. For more information about the built-in classification templates for financial data, see Guidelines for Security Classification of Financial Data and Security Data - JRT 0197-2020. For a copied rule template, the highest sensitivity level is S10. The following list describes the sensitivity level names and the corresponding IDs:
      // 
      // *   **NA**: 1
      // *   **S1**: 2
      // *   **S2**: 3
      // *   **S3**: 4
      // *   **S4**: 5
      // *   **S5**: 6
      // *   **S6**: 7
      // *   **S7**: 8
      // *   **S8**: 9
      // *   **S9**: 10
      // *   **S10**: 11
      shared_ptr<string> name_ {};
      // The number of times that each sensitivity level is referenced in the rule template. Default value: 0.
      shared_ptr<int32_t> referenceNum_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskLevelList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskLevelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<DescribeRiskLevelsResponseBody::RiskLevelList> & getRiskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<DescribeRiskLevelsResponseBody::RiskLevelList>) };
    inline vector<DescribeRiskLevelsResponseBody::RiskLevelList> getRiskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<DescribeRiskLevelsResponseBody::RiskLevelList>) };
    inline DescribeRiskLevelsResponseBody& setRiskLevelList(const vector<DescribeRiskLevelsResponseBody::RiskLevelList> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline DescribeRiskLevelsResponseBody& setRiskLevelList(vector<DescribeRiskLevelsResponseBody::RiskLevelList> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of sensitivity levels.
    shared_ptr<vector<DescribeRiskLevelsResponseBody::RiskLevelList>> riskLevelList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
