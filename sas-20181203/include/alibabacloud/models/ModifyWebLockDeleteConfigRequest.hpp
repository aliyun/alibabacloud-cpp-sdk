// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKDELETECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKDELETECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebLockDeleteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockDeleteConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockDeleteConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyWebLockDeleteConfigRequest() = default ;
    ModifyWebLockDeleteConfigRequest(const ModifyWebLockDeleteConfigRequest &) = default ;
    ModifyWebLockDeleteConfigRequest(ModifyWebLockDeleteConfigRequest &&) = default ;
    ModifyWebLockDeleteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockDeleteConfigRequest() = default ;
    ModifyWebLockDeleteConfigRequest& operator=(const ModifyWebLockDeleteConfigRequest &) = default ;
    ModifyWebLockDeleteConfigRequest& operator=(ModifyWebLockDeleteConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->lang_ == nullptr && return this->sourceIp_ == nullptr && return this->uuid_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ModifyWebLockDeleteConfigRequest& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyWebLockDeleteConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyWebLockDeleteConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyWebLockDeleteConfigRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the protected directory that you want to delete.
    // 
    // > You can call the [DescribeWebLockConfigList](~~DescribeWebLockConfigList~~) operation to query the IDs of protected directories.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The UUID of the server for which you want to delete the protected directory.
    // 
    // > You can call the [DescribeWebLockConfigList](~~DescribeWebLockConfigList~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
