// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEROLEREQUESTROLES_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEROLEREQUESTROLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CheckServiceRoleRequestRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceRoleRequestRoles& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceRoleRequestRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CheckServiceRoleRequestRoles() = default ;
    CheckServiceRoleRequestRoles(const CheckServiceRoleRequestRoles &) = default ;
    CheckServiceRoleRequestRoles(CheckServiceRoleRequestRoles &&) = default ;
    CheckServiceRoleRequestRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceRoleRequestRoles() = default ;
    CheckServiceRoleRequestRoles& operator=(const CheckServiceRoleRequestRoles &) = default ;
    CheckServiceRoleRequestRoles& operator=(CheckServiceRoleRequestRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CheckServiceRoleRequestRoles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The server role name. For more information about the service roles and their permissions in ACK, see [ACK roles](https://help.aliyun.com/document_detail/86483.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
