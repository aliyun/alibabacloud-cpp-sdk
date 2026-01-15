// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEWEBTERMINALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEWEBTERMINALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CheckInstanceWebTerminalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceWebTerminalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceWebTerminalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckInstanceWebTerminalResponseBody() = default ;
    CheckInstanceWebTerminalResponseBody(const CheckInstanceWebTerminalResponseBody &) = default ;
    CheckInstanceWebTerminalResponseBody(CheckInstanceWebTerminalResponseBody &&) = default ;
    CheckInstanceWebTerminalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceWebTerminalResponseBody() = default ;
    CheckInstanceWebTerminalResponseBody& operator=(const CheckInstanceWebTerminalResponseBody &) = default ;
    CheckInstanceWebTerminalResponseBody& operator=(CheckInstanceWebTerminalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInstanceWebTerminalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
