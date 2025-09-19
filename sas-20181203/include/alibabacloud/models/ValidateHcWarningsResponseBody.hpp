// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEHCWARNINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEHCWARNINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ValidateHcWarningsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateHcWarningsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateHcWarningsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ValidateHcWarningsResponseBody() = default ;
    ValidateHcWarningsResponseBody(const ValidateHcWarningsResponseBody &) = default ;
    ValidateHcWarningsResponseBody(ValidateHcWarningsResponseBody &&) = default ;
    ValidateHcWarningsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateHcWarningsResponseBody() = default ;
    ValidateHcWarningsResponseBody& operator=(const ValidateHcWarningsResponseBody &) = default ;
    ValidateHcWarningsResponseBody& operator=(ValidateHcWarningsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateHcWarningsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
