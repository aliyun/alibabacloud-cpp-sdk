// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTRYMODULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegistryModuleVersionResponseBodyModuleVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetRegistryModuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegistryModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegistryModuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(moduleVersion, moduleVersion_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRegistryModuleVersionResponseBody() = default ;
    GetRegistryModuleVersionResponseBody(const GetRegistryModuleVersionResponseBody &) = default ;
    GetRegistryModuleVersionResponseBody(GetRegistryModuleVersionResponseBody &&) = default ;
    GetRegistryModuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegistryModuleVersionResponseBody() = default ;
    GetRegistryModuleVersionResponseBody& operator=(const GetRegistryModuleVersionResponseBody &) = default ;
    GetRegistryModuleVersionResponseBody& operator=(GetRegistryModuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleVersion_ != nullptr
        && this->requestId_ != nullptr; };
    // moduleVersion Field Functions 
    bool hasModuleVersion() const { return this->moduleVersion_ != nullptr;};
    void deleteModuleVersion() { this->moduleVersion_ = nullptr;};
    inline const GetRegistryModuleVersionResponseBodyModuleVersion & moduleVersion() const { DARABONBA_PTR_GET_CONST(moduleVersion_, GetRegistryModuleVersionResponseBodyModuleVersion) };
    inline GetRegistryModuleVersionResponseBodyModuleVersion moduleVersion() { DARABONBA_PTR_GET(moduleVersion_, GetRegistryModuleVersionResponseBodyModuleVersion) };
    inline GetRegistryModuleVersionResponseBody& setModuleVersion(const GetRegistryModuleVersionResponseBodyModuleVersion & moduleVersion) { DARABONBA_PTR_SET_VALUE(moduleVersion_, moduleVersion) };
    inline GetRegistryModuleVersionResponseBody& setModuleVersion(GetRegistryModuleVersionResponseBodyModuleVersion && moduleVersion) { DARABONBA_PTR_SET_RVALUE(moduleVersion_, moduleVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegistryModuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetRegistryModuleVersionResponseBodyModuleVersion> moduleVersion_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
