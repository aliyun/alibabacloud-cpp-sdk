// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetMFAAuthenticationStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMFAAuthenticationStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMFAAuthenticationStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
    };
    GetMFAAuthenticationStatusRequest() = default ;
    GetMFAAuthenticationStatusRequest(const GetMFAAuthenticationStatusRequest &) = default ;
    GetMFAAuthenticationStatusRequest(GetMFAAuthenticationStatusRequest &&) = default ;
    GetMFAAuthenticationStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMFAAuthenticationStatusRequest() = default ;
    GetMFAAuthenticationStatusRequest& operator=(const GetMFAAuthenticationStatusRequest &) = default ;
    GetMFAAuthenticationStatusRequest& operator=(GetMFAAuthenticationStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetMFAAuthenticationStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
