// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEANDROIDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEANDROIDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class AuthorizeAndroidInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeAndroidInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserId, authorizeUserId_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserId, unAuthorizeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeAndroidInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserId, authorizeUserId_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserId, unAuthorizeUserId_);
    };
    AuthorizeAndroidInstanceRequest() = default ;
    AuthorizeAndroidInstanceRequest(const AuthorizeAndroidInstanceRequest &) = default ;
    AuthorizeAndroidInstanceRequest(AuthorizeAndroidInstanceRequest &&) = default ;
    AuthorizeAndroidInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeAndroidInstanceRequest() = default ;
    AuthorizeAndroidInstanceRequest& operator=(const AuthorizeAndroidInstanceRequest &) = default ;
    AuthorizeAndroidInstanceRequest& operator=(AuthorizeAndroidInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->authorizeUserId_ == nullptr && this->unAuthorizeUserId_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline AuthorizeAndroidInstanceRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline AuthorizeAndroidInstanceRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // authorizeUserId Field Functions 
    bool hasAuthorizeUserId() const { return this->authorizeUserId_ != nullptr;};
    void deleteAuthorizeUserId() { this->authorizeUserId_ = nullptr;};
    inline string getAuthorizeUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizeUserId_, "") };
    inline AuthorizeAndroidInstanceRequest& setAuthorizeUserId(string authorizeUserId) { DARABONBA_PTR_SET_VALUE(authorizeUserId_, authorizeUserId) };


    // unAuthorizeUserId Field Functions 
    bool hasUnAuthorizeUserId() const { return this->unAuthorizeUserId_ != nullptr;};
    void deleteUnAuthorizeUserId() { this->unAuthorizeUserId_ = nullptr;};
    inline string getUnAuthorizeUserId() const { DARABONBA_PTR_GET_DEFAULT(unAuthorizeUserId_, "") };
    inline AuthorizeAndroidInstanceRequest& setUnAuthorizeUserId(string unAuthorizeUserId) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserId_, unAuthorizeUserId) };


  protected:
    // List of instance IDs.
    shared_ptr<vector<string>> androidInstanceIds_ {};
    // User ID to be assigned.
    shared_ptr<string> authorizeUserId_ {};
    // User ID to be unassigned.
    shared_ptr<string> unAuthorizeUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
