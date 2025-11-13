// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUESTASSISTANT_HPP_
#define ALIBABACLOUD_MODELS_RUNLEGALADVICECONSULTATIONREQUESTASSISTANT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunLegalAdviceConsultationRequestAssistant : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLegalAdviceConsultationRequestAssistant& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(metaData, metaData_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, RunLegalAdviceConsultationRequestAssistant& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(metaData, metaData_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    RunLegalAdviceConsultationRequestAssistant() = default ;
    RunLegalAdviceConsultationRequestAssistant(const RunLegalAdviceConsultationRequestAssistant &) = default ;
    RunLegalAdviceConsultationRequestAssistant(RunLegalAdviceConsultationRequestAssistant &&) = default ;
    RunLegalAdviceConsultationRequestAssistant(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLegalAdviceConsultationRequestAssistant() = default ;
    RunLegalAdviceConsultationRequestAssistant& operator=(const RunLegalAdviceConsultationRequestAssistant &) = default ;
    RunLegalAdviceConsultationRequestAssistant& operator=(RunLegalAdviceConsultationRequestAssistant &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->metaData_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RunLegalAdviceConsultationRequestAssistant& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const map<string, string> & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
    inline map<string, string> metaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
    inline RunLegalAdviceConsultationRequestAssistant& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline RunLegalAdviceConsultationRequestAssistant& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunLegalAdviceConsultationRequestAssistant& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline RunLegalAdviceConsultationRequestAssistant& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, string>> metaData_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
