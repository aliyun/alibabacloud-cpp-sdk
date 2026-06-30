// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalGuardWsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardWsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardWsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MultiModalGuardWsResponseBody() = default ;
    MultiModalGuardWsResponseBody(const MultiModalGuardWsResponseBody &) = default ;
    MultiModalGuardWsResponseBody(MultiModalGuardWsResponseBody &&) = default ;
    MultiModalGuardWsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardWsResponseBody() = default ;
    MultiModalGuardWsResponseBody& operator=(const MultiModalGuardWsResponseBody &) = default ;
    MultiModalGuardWsResponseBody& operator=(MultiModalGuardWsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultiModalGuardWsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
