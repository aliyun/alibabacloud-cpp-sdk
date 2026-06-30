// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELOPERATORAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELOPERATORAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateModelOperatorApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelOperatorApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelOperatorApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    CreateModelOperatorApiKeyRequest() = default ;
    CreateModelOperatorApiKeyRequest(const CreateModelOperatorApiKeyRequest &) = default ;
    CreateModelOperatorApiKeyRequest(CreateModelOperatorApiKeyRequest &&) = default ;
    CreateModelOperatorApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelOperatorApiKeyRequest() = default ;
    CreateModelOperatorApiKeyRequest& operator=(const CreateModelOperatorApiKeyRequest &) = default ;
    CreateModelOperatorApiKeyRequest& operator=(CreateModelOperatorApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelOperatorApiKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // This parameter is required.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
