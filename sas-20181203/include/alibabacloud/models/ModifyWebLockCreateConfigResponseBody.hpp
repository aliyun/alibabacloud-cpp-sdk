// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKCREATECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKCREATECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebLockCreateConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockCreateConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockCreateConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyWebLockCreateConfigResponseBody() = default ;
    ModifyWebLockCreateConfigResponseBody(const ModifyWebLockCreateConfigResponseBody &) = default ;
    ModifyWebLockCreateConfigResponseBody(ModifyWebLockCreateConfigResponseBody &&) = default ;
    ModifyWebLockCreateConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockCreateConfigResponseBody() = default ;
    ModifyWebLockCreateConfigResponseBody& operator=(const ModifyWebLockCreateConfigResponseBody &) = default ;
    ModifyWebLockCreateConfigResponseBody& operator=(ModifyWebLockCreateConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->requestId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ModifyWebLockCreateConfigResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyWebLockCreateConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration ID of the protected directory.
    shared_ptr<string> configId_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
