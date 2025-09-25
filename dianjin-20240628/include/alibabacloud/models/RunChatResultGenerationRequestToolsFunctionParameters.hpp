// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUESTTOOLSFUNCTIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUESTTOOLSFUNCTIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationRequestToolsFunctionParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationRequestToolsFunctionParameters& obj) { 
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationRequestToolsFunctionParameters& obj) { 
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    RunChatResultGenerationRequestToolsFunctionParameters() = default ;
    RunChatResultGenerationRequestToolsFunctionParameters(const RunChatResultGenerationRequestToolsFunctionParameters &) = default ;
    RunChatResultGenerationRequestToolsFunctionParameters(RunChatResultGenerationRequestToolsFunctionParameters &&) = default ;
    RunChatResultGenerationRequestToolsFunctionParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationRequestToolsFunctionParameters() = default ;
    RunChatResultGenerationRequestToolsFunctionParameters& operator=(const RunChatResultGenerationRequestToolsFunctionParameters &) = default ;
    RunChatResultGenerationRequestToolsFunctionParameters& operator=(RunChatResultGenerationRequestToolsFunctionParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->properties_ != nullptr
        && this->type_ != nullptr; };
    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline RunChatResultGenerationRequestToolsFunctionParameters& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline RunChatResultGenerationRequestToolsFunctionParameters& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunChatResultGenerationRequestToolsFunctionParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
