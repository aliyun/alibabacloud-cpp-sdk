// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUDITLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUDITLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAuditLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAuditLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpdateSucceed, updateSucceed_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAuditLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpdateSucceed, updateSucceed_);
    };
    ModifyAuditLogConfigResponseBody() = default ;
    ModifyAuditLogConfigResponseBody(const ModifyAuditLogConfigResponseBody &) = default ;
    ModifyAuditLogConfigResponseBody(ModifyAuditLogConfigResponseBody &&) = default ;
    ModifyAuditLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAuditLogConfigResponseBody() = default ;
    ModifyAuditLogConfigResponseBody& operator=(const ModifyAuditLogConfigResponseBody &) = default ;
    ModifyAuditLogConfigResponseBody& operator=(ModifyAuditLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->updateSucceed_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAuditLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // updateSucceed Field Functions 
    bool hasUpdateSucceed() const { return this->updateSucceed_ != nullptr;};
    void deleteUpdateSucceed() { this->updateSucceed_ = nullptr;};
    inline bool getUpdateSucceed() const { DARABONBA_PTR_GET_DEFAULT(updateSucceed_, false) };
    inline ModifyAuditLogConfigResponseBody& setUpdateSucceed(bool updateSucceed) { DARABONBA_PTR_SET_VALUE(updateSucceed_, updateSucceed) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the status of SQL audit is updated. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> updateSucceed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
