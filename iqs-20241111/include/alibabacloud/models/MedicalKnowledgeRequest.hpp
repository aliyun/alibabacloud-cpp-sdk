// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDICALKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEDICALKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MedicalKnowInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class MedicalKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MedicalKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, MedicalKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    MedicalKnowledgeRequest() = default ;
    MedicalKnowledgeRequest(const MedicalKnowledgeRequest &) = default ;
    MedicalKnowledgeRequest(MedicalKnowledgeRequest &&) = default ;
    MedicalKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MedicalKnowledgeRequest() = default ;
    MedicalKnowledgeRequest& operator=(const MedicalKnowledgeRequest &) = default ;
    MedicalKnowledgeRequest& operator=(MedicalKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MedicalKnowInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, MedicalKnowInput) };
    inline MedicalKnowInput getBody() { DARABONBA_PTR_GET(body_, MedicalKnowInput) };
    inline MedicalKnowledgeRequest& setBody(const MedicalKnowInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline MedicalKnowledgeRequest& setBody(MedicalKnowInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<MedicalKnowInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
