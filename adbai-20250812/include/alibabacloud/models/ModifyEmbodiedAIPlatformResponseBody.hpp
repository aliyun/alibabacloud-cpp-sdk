// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEMBODIEDAIPLATFORMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEMBODIEDAIPLATFORMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class ModifyEmbodiedAIPlatformResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEmbodiedAIPlatformResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEmbodiedAIPlatformResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyEmbodiedAIPlatformResponseBody() = default ;
    ModifyEmbodiedAIPlatformResponseBody(const ModifyEmbodiedAIPlatformResponseBody &) = default ;
    ModifyEmbodiedAIPlatformResponseBody(ModifyEmbodiedAIPlatformResponseBody &&) = default ;
    ModifyEmbodiedAIPlatformResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEmbodiedAIPlatformResponseBody() = default ;
    ModifyEmbodiedAIPlatformResponseBody& operator=(const ModifyEmbodiedAIPlatformResponseBody &) = default ;
    ModifyEmbodiedAIPlatformResponseBody& operator=(ModifyEmbodiedAIPlatformResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyEmbodiedAIPlatformResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
