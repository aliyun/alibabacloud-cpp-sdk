// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractResultGenerationRequestAssistantMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationRequestAssistant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationRequestAssistant& obj) { 
      DARABONBA_PTR_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationRequestAssistant& obj) { 
      DARABONBA_PTR_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    RunContractResultGenerationRequestAssistant() = default ;
    RunContractResultGenerationRequestAssistant(const RunContractResultGenerationRequestAssistant &) = default ;
    RunContractResultGenerationRequestAssistant(RunContractResultGenerationRequestAssistant &&) = default ;
    RunContractResultGenerationRequestAssistant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationRequestAssistant() = default ;
    RunContractResultGenerationRequestAssistant& operator=(const RunContractResultGenerationRequestAssistant &) = default ;
    RunContractResultGenerationRequestAssistant& operator=(RunContractResultGenerationRequestAssistant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaData_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const Models::RunContractResultGenerationRequestAssistantMetaData & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, Models::RunContractResultGenerationRequestAssistantMetaData) };
    inline Models::RunContractResultGenerationRequestAssistantMetaData metaData() { DARABONBA_PTR_GET(metaData_, Models::RunContractResultGenerationRequestAssistantMetaData) };
    inline RunContractResultGenerationRequestAssistant& setMetaData(const Models::RunContractResultGenerationRequestAssistantMetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline RunContractResultGenerationRequestAssistant& setMetaData(Models::RunContractResultGenerationRequestAssistantMetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunContractResultGenerationRequestAssistant& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline RunContractResultGenerationRequestAssistant& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<Models::RunContractResultGenerationRequestAssistantMetaData> metaData_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
