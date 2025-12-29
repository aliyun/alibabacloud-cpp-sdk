// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVERIFYSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVERIFYSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateVerifySettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVerifySettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(StepList, stepList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVerifySettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(StepList, stepList_);
    };
    CreateVerifySettingResponseBody() = default ;
    CreateVerifySettingResponseBody(const CreateVerifySettingResponseBody &) = default ;
    CreateVerifySettingResponseBody(CreateVerifySettingResponseBody &&) = default ;
    CreateVerifySettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVerifySettingResponseBody() = default ;
    CreateVerifySettingResponseBody& operator=(const CreateVerifySettingResponseBody &) = default ;
    CreateVerifySettingResponseBody& operator=(CreateVerifySettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizName_ == nullptr
        && this->bizType_ == nullptr && this->requestId_ == nullptr && this->solution_ == nullptr && this->stepList_ == nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline CreateVerifySettingResponseBody& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateVerifySettingResponseBody& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVerifySettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline CreateVerifySettingResponseBody& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // stepList Field Functions 
    bool hasStepList() const { return this->stepList_ != nullptr;};
    void deleteStepList() { this->stepList_ = nullptr;};
    inline const vector<string> & getStepList() const { DARABONBA_PTR_GET_CONST(stepList_, vector<string>) };
    inline vector<string> getStepList() { DARABONBA_PTR_GET(stepList_, vector<string>) };
    inline CreateVerifySettingResponseBody& setStepList(const vector<string> & stepList) { DARABONBA_PTR_SET_VALUE(stepList_, stepList) };
    inline CreateVerifySettingResponseBody& setStepList(vector<string> && stepList) { DARABONBA_PTR_SET_RVALUE(stepList_, stepList) };


  protected:
    // Verification scenario name.
    shared_ptr<string> bizName_ {};
    // Verification scenario identifier.
    shared_ptr<string> bizType_ {};
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Authentication solution name.
    shared_ptr<string> solution_ {};
    // Authentication steps
    shared_ptr<vector<string>> stepList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
