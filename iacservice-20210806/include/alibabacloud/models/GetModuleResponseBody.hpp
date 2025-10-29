// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetModuleResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetModuleResponseBody() = default ;
    GetModuleResponseBody(const GetModuleResponseBody &) = default ;
    GetModuleResponseBody(GetModuleResponseBody &&) = default ;
    GetModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleResponseBody() = default ;
    GetModuleResponseBody& operator=(const GetModuleResponseBody &) = default ;
    GetModuleResponseBody& operator=(GetModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->module_ == nullptr
        && return this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetModuleResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, GetModuleResponseBodyModule) };
    inline GetModuleResponseBodyModule module() { DARABONBA_PTR_GET(module_, GetModuleResponseBodyModule) };
    inline GetModuleResponseBody& setModule(const GetModuleResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetModuleResponseBody& setModule(GetModuleResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetModuleResponseBodyModule> module_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
