// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMFAAUTHENTICATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETMFAAUTHENTICATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetMFAAuthenticationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMFAAuthenticationStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(MFAAuthenticationStatus, MFAAuthenticationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SetMFAAuthenticationStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(MFAAuthenticationStatus, MFAAuthenticationStatus_);
    };
    SetMFAAuthenticationStatusRequest() = default ;
    SetMFAAuthenticationStatusRequest(const SetMFAAuthenticationStatusRequest &) = default ;
    SetMFAAuthenticationStatusRequest(SetMFAAuthenticationStatusRequest &&) = default ;
    SetMFAAuthenticationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMFAAuthenticationStatusRequest() = default ;
    SetMFAAuthenticationStatusRequest& operator=(const SetMFAAuthenticationStatusRequest &) = default ;
    SetMFAAuthenticationStatusRequest& operator=(SetMFAAuthenticationStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->MFAAuthenticationStatus_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetMFAAuthenticationStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // MFAAuthenticationStatus Field Functions 
    bool hasMFAAuthenticationStatus() const { return this->MFAAuthenticationStatus_ != nullptr;};
    void deleteMFAAuthenticationStatus() { this->MFAAuthenticationStatus_ = nullptr;};
    inline string getMFAAuthenticationStatus() const { DARABONBA_PTR_GET_DEFAULT(MFAAuthenticationStatus_, "") };
    inline SetMFAAuthenticationStatusRequest& setMFAAuthenticationStatus(string MFAAuthenticationStatus) { DARABONBA_PTR_SET_VALUE(MFAAuthenticationStatus_, MFAAuthenticationStatus) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The status of MFA. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    shared_ptr<string> MFAAuthenticationStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
