// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIntlFixedPriceDomainOrderResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CreateIntlFixedPriceDomainOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntlFixedPriceDomainOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntlFixedPriceDomainOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIntlFixedPriceDomainOrderResponseBody() = default ;
    CreateIntlFixedPriceDomainOrderResponseBody(const CreateIntlFixedPriceDomainOrderResponseBody &) = default ;
    CreateIntlFixedPriceDomainOrderResponseBody(CreateIntlFixedPriceDomainOrderResponseBody &&) = default ;
    CreateIntlFixedPriceDomainOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntlFixedPriceDomainOrderResponseBody() = default ;
    CreateIntlFixedPriceDomainOrderResponseBody& operator=(const CreateIntlFixedPriceDomainOrderResponseBody &) = default ;
    CreateIntlFixedPriceDomainOrderResponseBody& operator=(CreateIntlFixedPriceDomainOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->module_ == nullptr
        && return this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateIntlFixedPriceDomainOrderResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, CreateIntlFixedPriceDomainOrderResponseBodyModule) };
    inline CreateIntlFixedPriceDomainOrderResponseBodyModule module() { DARABONBA_PTR_GET(module_, CreateIntlFixedPriceDomainOrderResponseBodyModule) };
    inline CreateIntlFixedPriceDomainOrderResponseBody& setModule(const CreateIntlFixedPriceDomainOrderResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateIntlFixedPriceDomainOrderResponseBody& setModule(CreateIntlFixedPriceDomainOrderResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntlFixedPriceDomainOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateIntlFixedPriceDomainOrderResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
