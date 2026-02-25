// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERCUSTOMVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERCUSTOMVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class RegisterCustomViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterCustomViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomViewId, customViewId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterCustomViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomViewId, customViewId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterCustomViewResponseBody() = default ;
    RegisterCustomViewResponseBody(const RegisterCustomViewResponseBody &) = default ;
    RegisterCustomViewResponseBody(RegisterCustomViewResponseBody &&) = default ;
    RegisterCustomViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterCustomViewResponseBody() = default ;
    RegisterCustomViewResponseBody& operator=(const RegisterCustomViewResponseBody &) = default ;
    RegisterCustomViewResponseBody& operator=(RegisterCustomViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customViewId_ == nullptr
        && this->requestId_ == nullptr; };
    // customViewId Field Functions 
    bool hasCustomViewId() const { return this->customViewId_ != nullptr;};
    void deleteCustomViewId() { this->customViewId_ = nullptr;};
    inline string getCustomViewId() const { DARABONBA_PTR_GET_DEFAULT(customViewId_, "") };
    inline RegisterCustomViewResponseBody& setCustomViewId(string customViewId) { DARABONBA_PTR_SET_VALUE(customViewId_, customViewId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterCustomViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> customViewId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
