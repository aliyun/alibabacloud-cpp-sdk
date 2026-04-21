// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALANSWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEDICALANSWERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MedicalAnswerInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalAnswerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalAnswerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalAnswerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    MedicalAnswerRequest() = default ;
    MedicalAnswerRequest(const MedicalAnswerRequest &) = default ;
    MedicalAnswerRequest(MedicalAnswerRequest &&) = default ;
    MedicalAnswerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalAnswerRequest() = default ;
    MedicalAnswerRequest& operator=(const MedicalAnswerRequest &) = default ;
    MedicalAnswerRequest& operator=(MedicalAnswerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MedicalAnswerInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, MedicalAnswerInput) };
    inline MedicalAnswerInput getBody() { DARABONBA_PTR_GET(body_, MedicalAnswerInput) };
    inline MedicalAnswerRequest& setBody(const MedicalAnswerInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline MedicalAnswerRequest& setBody(MedicalAnswerInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<MedicalAnswerInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
