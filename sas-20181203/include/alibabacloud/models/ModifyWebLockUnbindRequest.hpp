// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKUNBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKUNBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebLockUnbindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockUnbindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockUnbindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyWebLockUnbindRequest() = default ;
    ModifyWebLockUnbindRequest(const ModifyWebLockUnbindRequest &) = default ;
    ModifyWebLockUnbindRequest(ModifyWebLockUnbindRequest &&) = default ;
    ModifyWebLockUnbindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockUnbindRequest() = default ;
    ModifyWebLockUnbindRequest& operator=(const ModifyWebLockUnbindRequest &) = default ;
    ModifyWebLockUnbindRequest& operator=(ModifyWebLockUnbindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uuid_ != nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyWebLockUnbindRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The UUID of the server for which you want to disable web tamper proofing.
    // 
    // > You can call the [DescribeWebLockBindList](~~DescribeWebLockBindList~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
