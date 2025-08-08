// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODYINSTANCESPERMISSIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDINSTANCESFORUSERRESPONSEBODYINSTANCESPERMISSIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PermType, permType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PermType, permType_);
    };
    ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail() = default ;
    ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail(const ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail &) = default ;
    ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail(ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail &&) = default ;
    ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail() = default ;
    ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& operator=(const ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail &) = default ;
    ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& operator=(ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dsType_ != nullptr
        && this->expireDate_ != nullptr && this->message_ != nullptr && this->permType_ != nullptr; };
    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // permType Field Functions 
    bool hasPermType() const { return this->permType_ != nullptr;};
    void deletePermType() { this->permType_ = nullptr;};
    inline string permType() const { DARABONBA_PTR_GET_DEFAULT(permType_, "") };
    inline ListAuthorizedInstancesForUserResponseBodyInstancesPermissionDetail& setPermType(string permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


  protected:
    std::shared_ptr<string> dsType_ = nullptr;
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> permType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
