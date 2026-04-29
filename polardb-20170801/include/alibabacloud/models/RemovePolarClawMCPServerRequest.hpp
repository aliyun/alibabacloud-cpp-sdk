// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPOLARCLAWMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPOLARCLAWMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RemovePolarClawMCPServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePolarClawMCPServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePolarClawMCPServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
    };
    RemovePolarClawMCPServerRequest() = default ;
    RemovePolarClawMCPServerRequest(const RemovePolarClawMCPServerRequest &) = default ;
    RemovePolarClawMCPServerRequest(RemovePolarClawMCPServerRequest &&) = default ;
    RemovePolarClawMCPServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePolarClawMCPServerRequest() = default ;
    RemovePolarClawMCPServerRequest& operator=(const RemovePolarClawMCPServerRequest &) = default ;
    RemovePolarClawMCPServerRequest& operator=(RemovePolarClawMCPServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->serverName_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemovePolarClawMCPServerRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline RemovePolarClawMCPServerRequest& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> serverName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
