// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTACTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTACTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class DeleteContacterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContacterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContacterId, contacterId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContacterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContacterId, contacterId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteContacterRequest() = default ;
    DeleteContacterRequest(const DeleteContacterRequest &) = default ;
    DeleteContacterRequest(DeleteContacterRequest &&) = default ;
    DeleteContacterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContacterRequest() = default ;
    DeleteContacterRequest& operator=(const DeleteContacterRequest &) = default ;
    DeleteContacterRequest& operator=(DeleteContacterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contacterId_ == nullptr
        && this->userId_ == nullptr; };
    // contacterId Field Functions 
    bool hasContacterId() const { return this->contacterId_ != nullptr;};
    void deleteContacterId() { this->contacterId_ = nullptr;};
    inline int64_t getContacterId() const { DARABONBA_PTR_GET_DEFAULT(contacterId_, 0L) };
    inline DeleteContacterRequest& setContacterId(int64_t contacterId) { DARABONBA_PTR_SET_VALUE(contacterId_, contacterId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DeleteContacterRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> contacterId_ {};
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
