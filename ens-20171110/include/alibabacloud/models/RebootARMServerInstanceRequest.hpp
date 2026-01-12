// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTARMSERVERINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTARMSERVERINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RebootARMServerInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootARMServerInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootARMServerInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
    };
    RebootARMServerInstanceRequest() = default ;
    RebootARMServerInstanceRequest(const RebootARMServerInstanceRequest &) = default ;
    RebootARMServerInstanceRequest(RebootARMServerInstanceRequest &&) = default ;
    RebootARMServerInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootARMServerInstanceRequest() = default ;
    RebootARMServerInstanceRequest& operator=(const RebootARMServerInstanceRequest &) = default ;
    RebootARMServerInstanceRequest& operator=(RebootARMServerInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serverId_ == nullptr; };
    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RebootARMServerInstanceRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


  protected:
    // The ID of the server.
    shared_ptr<string> serverId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
