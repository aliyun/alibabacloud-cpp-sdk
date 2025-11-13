// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONREQUESTASSISTANTMETADATA_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONREQUESTASSISTANTMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationRequestAssistantMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationRequestAssistantMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(fileId, fileId_);
      DARABONBA_PTR_TO_JSON(position, position_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationRequestAssistantMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(fileId, fileId_);
      DARABONBA_PTR_FROM_JSON(position, position_);
    };
    RunContractRuleGenerationRequestAssistantMetaData() = default ;
    RunContractRuleGenerationRequestAssistantMetaData(const RunContractRuleGenerationRequestAssistantMetaData &) = default ;
    RunContractRuleGenerationRequestAssistantMetaData(RunContractRuleGenerationRequestAssistantMetaData &&) = default ;
    RunContractRuleGenerationRequestAssistantMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationRequestAssistantMetaData() = default ;
    RunContractRuleGenerationRequestAssistantMetaData& operator=(const RunContractRuleGenerationRequestAssistantMetaData &) = default ;
    RunContractRuleGenerationRequestAssistantMetaData& operator=(RunContractRuleGenerationRequestAssistantMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileId_ == nullptr
        && return this->position_ == nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline RunContractRuleGenerationRequestAssistantMetaData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline RunContractRuleGenerationRequestAssistantMetaData& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
