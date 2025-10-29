// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegistryModuleResponseBodyRegistryModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(registryModule, registryModule_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(registryModule, registryModule_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRegistryModuleResponseBody() = default ;
    GetRegistryModuleResponseBody(const GetRegistryModuleResponseBody &) = default ;
    GetRegistryModuleResponseBody(GetRegistryModuleResponseBody &&) = default ;
    GetRegistryModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleResponseBody() = default ;
    GetRegistryModuleResponseBody& operator=(const GetRegistryModuleResponseBody &) = default ;
    GetRegistryModuleResponseBody& operator=(GetRegistryModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->registryModule_ == nullptr
        && return this->requestId_ == nullptr; };
    // registryModule Field Functions 
    bool hasRegistryModule() const { return this->registryModule_ != nullptr;};
    void deleteRegistryModule() { this->registryModule_ = nullptr;};
    inline const GetRegistryModuleResponseBodyRegistryModule & registryModule() const { DARABONBA_PTR_GET_CONST(registryModule_, GetRegistryModuleResponseBodyRegistryModule) };
    inline GetRegistryModuleResponseBodyRegistryModule registryModule() { DARABONBA_PTR_GET(registryModule_, GetRegistryModuleResponseBodyRegistryModule) };
    inline GetRegistryModuleResponseBody& setRegistryModule(const GetRegistryModuleResponseBodyRegistryModule & registryModule) { DARABONBA_PTR_SET_VALUE(registryModule_, registryModule) };
    inline GetRegistryModuleResponseBody& setRegistryModule(GetRegistryModuleResponseBodyRegistryModule && registryModule) { DARABONBA_PTR_SET_RVALUE(registryModule_, registryModule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetRegistryModuleResponseBodyRegistryModule> registryModule_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
