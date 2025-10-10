// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYACLCONFIGACLRELATIONS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYACLCONFIGACLRELATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyAclConfigAclRelations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyAclConfigAclRelations& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyAclConfigAclRelations& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetListenerAttributeResponseBodyAclConfigAclRelations() = default ;
    GetListenerAttributeResponseBodyAclConfigAclRelations(const GetListenerAttributeResponseBodyAclConfigAclRelations &) = default ;
    GetListenerAttributeResponseBodyAclConfigAclRelations(GetListenerAttributeResponseBodyAclConfigAclRelations &&) = default ;
    GetListenerAttributeResponseBodyAclConfigAclRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyAclConfigAclRelations() = default ;
    GetListenerAttributeResponseBodyAclConfigAclRelations& operator=(const GetListenerAttributeResponseBodyAclConfigAclRelations &) = default ;
    GetListenerAttributeResponseBodyAclConfigAclRelations& operator=(GetListenerAttributeResponseBodyAclConfigAclRelations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->status_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline GetListenerAttributeResponseBodyAclConfigAclRelations& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetListenerAttributeResponseBodyAclConfigAclRelations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the ACL that is associated with the listener.
    std::shared_ptr<string> aclId_ = nullptr;
    // Indicates whether the ACL is associated with the listener. Valid values:
    // 
    // *   **Associating**
    // *   **Associated**
    // *   **Dissociating**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
