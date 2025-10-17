// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveTerminalsResponseBodyTerminals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveTerminalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTerminalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Terminals, terminals_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTerminalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Terminals, terminals_);
    };
    RemoveTerminalsResponseBody() = default ;
    RemoveTerminalsResponseBody(const RemoveTerminalsResponseBody &) = default ;
    RemoveTerminalsResponseBody(RemoveTerminalsResponseBody &&) = default ;
    RemoveTerminalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTerminalsResponseBody() = default ;
    RemoveTerminalsResponseBody& operator=(const RemoveTerminalsResponseBody &) = default ;
    RemoveTerminalsResponseBody& operator=(RemoveTerminalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->terminals_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveTerminalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // terminals Field Functions 
    bool hasTerminals() const { return this->terminals_ != nullptr;};
    void deleteTerminals() { this->terminals_ = nullptr;};
    inline const RemoveTerminalsResponseBodyTerminals & terminals() const { DARABONBA_PTR_GET_CONST(terminals_, RemoveTerminalsResponseBodyTerminals) };
    inline RemoveTerminalsResponseBodyTerminals terminals() { DARABONBA_PTR_GET(terminals_, RemoveTerminalsResponseBodyTerminals) };
    inline RemoveTerminalsResponseBody& setTerminals(const RemoveTerminalsResponseBodyTerminals & terminals) { DARABONBA_PTR_SET_VALUE(terminals_, terminals) };
    inline RemoveTerminalsResponseBody& setTerminals(RemoveTerminalsResponseBodyTerminals && terminals) { DARABONBA_PTR_SET_RVALUE(terminals_, terminals) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<RemoveTerminalsResponseBodyTerminals> terminals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
