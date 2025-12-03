// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateResourceMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
    };
    UpdateResourceMemberRequest() = default ;
    UpdateResourceMemberRequest(const UpdateResourceMemberRequest &) = default ;
    UpdateResourceMemberRequest(UpdateResourceMemberRequest &&) = default ;
    UpdateResourceMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceMemberRequest() = default ;
    UpdateResourceMemberRequest& operator=(const UpdateResourceMemberRequest &) = default ;
    UpdateResourceMemberRequest& operator=(UpdateResourceMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleName_ == nullptr; };
    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateResourceMemberRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
