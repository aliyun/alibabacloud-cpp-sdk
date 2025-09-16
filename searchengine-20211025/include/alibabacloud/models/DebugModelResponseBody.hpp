// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEBUGMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DebugModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DebugModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DebugModelResponseBody() = default ;
    DebugModelResponseBody(const DebugModelResponseBody &) = default ;
    DebugModelResponseBody(DebugModelResponseBody &&) = default ;
    DebugModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugModelResponseBody() = default ;
    DebugModelResponseBody& operator=(const DebugModelResponseBody &) = default ;
    DebugModelResponseBody& operator=(DebugModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DebugModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
