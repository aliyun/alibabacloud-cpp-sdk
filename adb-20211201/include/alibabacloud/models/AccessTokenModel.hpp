// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCESSTOKENMODEL_HPP_
#define ALIBABACLOUD_MODELS_ACCESSTOKENMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class AccessTokenModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccessTokenModel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(ExpiredAt, expiredAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AccessTokenModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(ExpiredAt, expiredAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AccessTokenModel() = default ;
    AccessTokenModel(const AccessTokenModel &) = default ;
    AccessTokenModel(AccessTokenModel &&) = default ;
    AccessTokenModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccessTokenModel() = default ;
    AccessTokenModel& operator=(const AccessTokenModel &) = default ;
    AccessTokenModel& operator=(AccessTokenModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->comment_ == nullptr && this->createdAt_ == nullptr && this->expiredAt_ == nullptr && this->status_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline AccessTokenModel& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline AccessTokenModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline AccessTokenModel& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // expiredAt Field Functions 
    bool hasExpiredAt() const { return this->expiredAt_ != nullptr;};
    void deleteExpiredAt() { this->expiredAt_ = nullptr;};
    inline string getExpiredAt() const { DARABONBA_PTR_GET_DEFAULT(expiredAt_, "") };
    inline AccessTokenModel& setExpiredAt(string expiredAt) { DARABONBA_PTR_SET_VALUE(expiredAt_, expiredAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AccessTokenModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> accessToken_ {};
    shared_ptr<string> comment_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> expiredAt_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
