// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACUSERCERTSTATUSREQUESTIDLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACUSERCERTSTATUSREQUESTIDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateNacUserCertStatusRequestIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacUserCertStatusRequestIdList& obj) { 
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacUserCertStatusRequestIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateNacUserCertStatusRequestIdList() = default ;
    UpdateNacUserCertStatusRequestIdList(const UpdateNacUserCertStatusRequestIdList &) = default ;
    UpdateNacUserCertStatusRequestIdList(UpdateNacUserCertStatusRequestIdList &&) = default ;
    UpdateNacUserCertStatusRequestIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacUserCertStatusRequestIdList() = default ;
    UpdateNacUserCertStatusRequestIdList& operator=(const UpdateNacUserCertStatusRequestIdList &) = default ;
    UpdateNacUserCertStatusRequestIdList& operator=(UpdateNacUserCertStatusRequestIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->devTag_ != nullptr
        && this->userId_ != nullptr; };
    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline UpdateNacUserCertStatusRequestIdList& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateNacUserCertStatusRequestIdList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> devTag_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
