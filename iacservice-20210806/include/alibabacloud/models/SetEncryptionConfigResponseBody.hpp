// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETENCRYPTIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETENCRYPTIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class SetEncryptionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetEncryptionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetEncryptionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SetEncryptionConfigResponseBody() = default ;
    SetEncryptionConfigResponseBody(const SetEncryptionConfigResponseBody &) = default ;
    SetEncryptionConfigResponseBody(SetEncryptionConfigResponseBody &&) = default ;
    SetEncryptionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetEncryptionConfigResponseBody() = default ;
    SetEncryptionConfigResponseBody& operator=(const SetEncryptionConfigResponseBody &) = default ;
    SetEncryptionConfigResponseBody& operator=(SetEncryptionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetEncryptionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
