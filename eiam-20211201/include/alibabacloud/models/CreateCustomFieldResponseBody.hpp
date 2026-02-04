// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCustomFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomFieldResponseBody() = default ;
    CreateCustomFieldResponseBody(const CreateCustomFieldResponseBody &) = default ;
    CreateCustomFieldResponseBody(CreateCustomFieldResponseBody &&) = default ;
    CreateCustomFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomFieldResponseBody() = default ;
    CreateCustomFieldResponseBody& operator=(const CreateCustomFieldResponseBody &) = default ;
    CreateCustomFieldResponseBody& operator=(CreateCustomFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldId_ == nullptr
        && this->requestId_ == nullptr; };
    // fieldId Field Functions 
    bool hasFieldId() const { return this->fieldId_ != nullptr;};
    void deleteFieldId() { this->fieldId_ = nullptr;};
    inline string getFieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
    inline CreateCustomFieldResponseBody& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> fieldId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
