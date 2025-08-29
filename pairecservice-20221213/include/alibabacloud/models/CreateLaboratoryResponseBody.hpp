// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELABORATORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELABORATORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateLaboratoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLaboratoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLaboratoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLaboratoryResponseBody() = default ;
    CreateLaboratoryResponseBody(const CreateLaboratoryResponseBody &) = default ;
    CreateLaboratoryResponseBody(CreateLaboratoryResponseBody &&) = default ;
    CreateLaboratoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLaboratoryResponseBody() = default ;
    CreateLaboratoryResponseBody& operator=(const CreateLaboratoryResponseBody &) = default ;
    CreateLaboratoryResponseBody& operator=(CreateLaboratoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->laboratoryId_ != nullptr
        && this->requestId_ != nullptr; };
    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string laboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline CreateLaboratoryResponseBody& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLaboratoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> laboratoryId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
