// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONREQUESTASSISTANT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONREQUESTASSISTANT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractRuleGenerationRequestAssistantMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationRequestAssistant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationRequestAssistant& obj) { 
      DARABONBA_PTR_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationRequestAssistant& obj) { 
      DARABONBA_PTR_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    RunContractRuleGenerationRequestAssistant() = default ;
    RunContractRuleGenerationRequestAssistant(const RunContractRuleGenerationRequestAssistant &) = default ;
    RunContractRuleGenerationRequestAssistant(RunContractRuleGenerationRequestAssistant &&) = default ;
    RunContractRuleGenerationRequestAssistant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationRequestAssistant() = default ;
    RunContractRuleGenerationRequestAssistant& operator=(const RunContractRuleGenerationRequestAssistant &) = default ;
    RunContractRuleGenerationRequestAssistant& operator=(RunContractRuleGenerationRequestAssistant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaData_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const Models::RunContractRuleGenerationRequestAssistantMetaData & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, Models::RunContractRuleGenerationRequestAssistantMetaData) };
    inline Models::RunContractRuleGenerationRequestAssistantMetaData metaData() { DARABONBA_PTR_GET(metaData_, Models::RunContractRuleGenerationRequestAssistantMetaData) };
    inline RunContractRuleGenerationRequestAssistant& setMetaData(const Models::RunContractRuleGenerationRequestAssistantMetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline RunContractRuleGenerationRequestAssistant& setMetaData(Models::RunContractRuleGenerationRequestAssistantMetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunContractRuleGenerationRequestAssistant& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline RunContractRuleGenerationRequestAssistant& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<Models::RunContractRuleGenerationRequestAssistantMetaData> metaData_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
