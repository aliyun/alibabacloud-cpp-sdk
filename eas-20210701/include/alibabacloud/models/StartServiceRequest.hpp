// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class StartServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, StartServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
    };
    StartServiceRequest() = default ;
    StartServiceRequest(const StartServiceRequest &) = default ;
    StartServiceRequest(StartServiceRequest &&) = default ;
    StartServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartServiceRequest() = default ;
    StartServiceRequest& operator=(const StartServiceRequest &) = default ;
    StartServiceRequest& operator=(StartServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline StartServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // - true: performs a dry run without executing the actual operation. If the request fails the dry run, an error is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // - false: sends a normal request.
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
