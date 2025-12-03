// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASEREQUESTTESTCASESTEPCONTENTINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASEREQUESTTESTCASESTEPCONTENTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTestCaseRequestTestcaseStepContentInfoStepResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseRequestTestcaseStepContentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseRequestTestcaseStepContentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(precondition, precondition_);
      DARABONBA_PTR_TO_JSON(stepResultList, stepResultList_);
      DARABONBA_PTR_TO_JSON(stepType, stepType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseRequestTestcaseStepContentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(precondition, precondition_);
      DARABONBA_PTR_FROM_JSON(stepResultList, stepResultList_);
      DARABONBA_PTR_FROM_JSON(stepType, stepType_);
    };
    CreateTestCaseRequestTestcaseStepContentInfo() = default ;
    CreateTestCaseRequestTestcaseStepContentInfo(const CreateTestCaseRequestTestcaseStepContentInfo &) = default ;
    CreateTestCaseRequestTestcaseStepContentInfo(CreateTestCaseRequestTestcaseStepContentInfo &&) = default ;
    CreateTestCaseRequestTestcaseStepContentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseRequestTestcaseStepContentInfo() = default ;
    CreateTestCaseRequestTestcaseStepContentInfo& operator=(const CreateTestCaseRequestTestcaseStepContentInfo &) = default ;
    CreateTestCaseRequestTestcaseStepContentInfo& operator=(CreateTestCaseRequestTestcaseStepContentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->precondition_ == nullptr
        && return this->stepResultList_ == nullptr && return this->stepType_ == nullptr; };
    // precondition Field Functions 
    bool hasPrecondition() const { return this->precondition_ != nullptr;};
    void deletePrecondition() { this->precondition_ = nullptr;};
    inline string precondition() const { DARABONBA_PTR_GET_DEFAULT(precondition_, "") };
    inline CreateTestCaseRequestTestcaseStepContentInfo& setPrecondition(string precondition) { DARABONBA_PTR_SET_VALUE(precondition_, precondition) };


    // stepResultList Field Functions 
    bool hasStepResultList() const { return this->stepResultList_ != nullptr;};
    void deleteStepResultList() { this->stepResultList_ = nullptr;};
    inline const vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList> & stepResultList() const { DARABONBA_PTR_GET_CONST(stepResultList_, vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList>) };
    inline vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList> stepResultList() { DARABONBA_PTR_GET(stepResultList_, vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList>) };
    inline CreateTestCaseRequestTestcaseStepContentInfo& setStepResultList(const vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList> & stepResultList) { DARABONBA_PTR_SET_VALUE(stepResultList_, stepResultList) };
    inline CreateTestCaseRequestTestcaseStepContentInfo& setStepResultList(vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList> && stepResultList) { DARABONBA_PTR_SET_RVALUE(stepResultList_, stepResultList) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline CreateTestCaseRequestTestcaseStepContentInfo& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


  protected:
    std::shared_ptr<string> precondition_ = nullptr;
    std::shared_ptr<vector<Models::CreateTestCaseRequestTestcaseStepContentInfoStepResultList>> stepResultList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> stepType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
