// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLELAYER7CCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLELAYER7CCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class EnableLayer7CCResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableLayer7CCResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableLayer7CCResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableLayer7CCResponseBody() = default ;
    EnableLayer7CCResponseBody(const EnableLayer7CCResponseBody &) = default ;
    EnableLayer7CCResponseBody(EnableLayer7CCResponseBody &&) = default ;
    EnableLayer7CCResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableLayer7CCResponseBody() = default ;
    EnableLayer7CCResponseBody& operator=(const EnableLayer7CCResponseBody &) = default ;
    EnableLayer7CCResponseBody& operator=(EnableLayer7CCResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableLayer7CCResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
