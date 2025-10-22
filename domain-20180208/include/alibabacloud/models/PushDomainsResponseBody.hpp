// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushDomainsResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PushDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PushDomainsResponseBody() = default ;
    PushDomainsResponseBody(const PushDomainsResponseBody &) = default ;
    PushDomainsResponseBody(PushDomainsResponseBody &&) = default ;
    PushDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDomainsResponseBody() = default ;
    PushDomainsResponseBody& operator=(const PushDomainsResponseBody &) = default ;
    PushDomainsResponseBody& operator=(PushDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->module_ == nullptr
        && return this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const PushDomainsResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, PushDomainsResponseBodyModule) };
    inline PushDomainsResponseBodyModule module() { DARABONBA_PTR_GET(module_, PushDomainsResponseBodyModule) };
    inline PushDomainsResponseBody& setModule(const PushDomainsResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline PushDomainsResponseBody& setModule(PushDomainsResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<PushDomainsResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
