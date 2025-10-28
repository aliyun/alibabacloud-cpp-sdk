// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(SolutionMessage, solutionMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(SolutionMessage, solutionMessage_);
    };
    CreateDiagnosisResponseBody() = default ;
    CreateDiagnosisResponseBody(const CreateDiagnosisResponseBody &) = default ;
    CreateDiagnosisResponseBody(CreateDiagnosisResponseBody &&) = default ;
    CreateDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosisResponseBody() = default ;
    CreateDiagnosisResponseBody& operator=(const CreateDiagnosisResponseBody &) = default ;
    CreateDiagnosisResponseBody& operator=(CreateDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reasonCode_ == nullptr
        && return this->reasonMessage_ == nullptr && return this->solutionMessage_ == nullptr; };
    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline CreateDiagnosisResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline CreateDiagnosisResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // solutionMessage Field Functions 
    bool hasSolutionMessage() const { return this->solutionMessage_ != nullptr;};
    void deleteSolutionMessage() { this->solutionMessage_ = nullptr;};
    inline string solutionMessage() const { DARABONBA_PTR_GET_DEFAULT(solutionMessage_, "") };
    inline CreateDiagnosisResponseBody& setSolutionMessage(string solutionMessage) { DARABONBA_PTR_SET_VALUE(solutionMessage_, solutionMessage) };


  protected:
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> solutionMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
