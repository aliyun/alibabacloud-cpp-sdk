// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class CreateCustomEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEntityId, customEntityId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEntityId, customEntityId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomEntityResponseBody() = default ;
    CreateCustomEntityResponseBody(const CreateCustomEntityResponseBody &) = default ;
    CreateCustomEntityResponseBody(CreateCustomEntityResponseBody &&) = default ;
    CreateCustomEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomEntityResponseBody() = default ;
    CreateCustomEntityResponseBody& operator=(const CreateCustomEntityResponseBody &) = default ;
    CreateCustomEntityResponseBody& operator=(CreateCustomEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEntityId_ == nullptr
        && this->requestId_ == nullptr; };
    // customEntityId Field Functions 
    bool hasCustomEntityId() const { return this->customEntityId_ != nullptr;};
    void deleteCustomEntityId() { this->customEntityId_ = nullptr;};
    inline string getCustomEntityId() const { DARABONBA_PTR_GET_DEFAULT(customEntityId_, "") };
    inline CreateCustomEntityResponseBody& setCustomEntityId(string customEntityId) { DARABONBA_PTR_SET_VALUE(customEntityId_, customEntityId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> customEntityId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
