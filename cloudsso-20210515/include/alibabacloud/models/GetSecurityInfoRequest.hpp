// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetSecurityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetSecurityInfoRequest() = default ;
    GetSecurityInfoRequest(const GetSecurityInfoRequest &) = default ;
    GetSecurityInfoRequest(GetSecurityInfoRequest &&) = default ;
    GetSecurityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityInfoRequest() = default ;
    GetSecurityInfoRequest& operator=(const GetSecurityInfoRequest &) = default ;
    GetSecurityInfoRequest& operator=(GetSecurityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->userId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetSecurityInfoRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetSecurityInfoRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
