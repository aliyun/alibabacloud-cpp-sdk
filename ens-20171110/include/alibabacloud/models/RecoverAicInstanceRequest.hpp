// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERAICINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERAICINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RecoverAICInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverAICInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverAICInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
    };
    RecoverAICInstanceRequest() = default ;
    RecoverAICInstanceRequest(const RecoverAICInstanceRequest &) = default ;
    RecoverAICInstanceRequest(RecoverAICInstanceRequest &&) = default ;
    RecoverAICInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverAICInstanceRequest() = default ;
    RecoverAICInstanceRequest& operator=(const RecoverAICInstanceRequest &) = default ;
    RecoverAICInstanceRequest& operator=(RecoverAICInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serverId_ == nullptr; };
    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RecoverAICInstanceRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


  protected:
    // The ID of the server.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
