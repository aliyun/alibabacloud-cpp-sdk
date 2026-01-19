// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERESOURCEINVENTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATERESOURCEINVENTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateResourceInventoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateResourceInventoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateResourceInventoryResponseBody() = default ;
    GenerateResourceInventoryResponseBody(const GenerateResourceInventoryResponseBody &) = default ;
    GenerateResourceInventoryResponseBody(GenerateResourceInventoryResponseBody &&) = default ;
    GenerateResourceInventoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateResourceInventoryResponseBody() = default ;
    GenerateResourceInventoryResponseBody& operator=(const GenerateResourceInventoryResponseBody &) = default ;
    GenerateResourceInventoryResponseBody& operator=(GenerateResourceInventoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateResourceInventoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
