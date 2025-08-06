// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACESPEC_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class WorkspaceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspaceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeType, codeType_);
      DARABONBA_PTR_TO_JSON(IsGuaranteedValid, isGuaranteedValid_);
      DARABONBA_PTR_TO_JSON(IsOverSoldValid, isOverSoldValid_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspaceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
      DARABONBA_PTR_FROM_JSON(IsGuaranteedValid, isGuaranteedValid_);
      DARABONBA_PTR_FROM_JSON(IsOverSoldValid, isOverSoldValid_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
    };
    WorkspaceSpec() = default ;
    WorkspaceSpec(const WorkspaceSpec &) = default ;
    WorkspaceSpec(WorkspaceSpec &&) = default ;
    WorkspaceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspaceSpec() = default ;
    WorkspaceSpec& operator=(const WorkspaceSpec &) = default ;
    WorkspaceSpec& operator=(WorkspaceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->codeType_ != nullptr && this->isGuaranteedValid_ != nullptr && this->isOverSoldValid_ != nullptr && this->reason_ != nullptr && this->spec_ != nullptr
        && this->specName_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline WorkspaceSpec& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline WorkspaceSpec& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // isGuaranteedValid Field Functions 
    bool hasIsGuaranteedValid() const { return this->isGuaranteedValid_ != nullptr;};
    void deleteIsGuaranteedValid() { this->isGuaranteedValid_ = nullptr;};
    inline bool isGuaranteedValid() const { DARABONBA_PTR_GET_DEFAULT(isGuaranteedValid_, false) };
    inline WorkspaceSpec& setIsGuaranteedValid(bool isGuaranteedValid) { DARABONBA_PTR_SET_VALUE(isGuaranteedValid_, isGuaranteedValid) };


    // isOverSoldValid Field Functions 
    bool hasIsOverSoldValid() const { return this->isOverSoldValid_ != nullptr;};
    void deleteIsOverSoldValid() { this->isOverSoldValid_ = nullptr;};
    inline bool isOverSoldValid() const { DARABONBA_PTR_GET_DEFAULT(isOverSoldValid_, false) };
    inline WorkspaceSpec& setIsOverSoldValid(bool isOverSoldValid) { DARABONBA_PTR_SET_VALUE(isOverSoldValid_, isOverSoldValid) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline WorkspaceSpec& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const ResourceAmount & spec() const { DARABONBA_PTR_GET_CONST(spec_, ResourceAmount) };
    inline ResourceAmount spec() { DARABONBA_PTR_GET(spec_, ResourceAmount) };
    inline WorkspaceSpec& setSpec(const ResourceAmount & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline WorkspaceSpec& setSpec(ResourceAmount && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline WorkspaceSpec& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> codeType_ = nullptr;
    std::shared_ptr<bool> isGuaranteedValid_ = nullptr;
    std::shared_ptr<bool> isOverSoldValid_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<ResourceAmount> spec_ = nullptr;
    std::shared_ptr<string> specName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
