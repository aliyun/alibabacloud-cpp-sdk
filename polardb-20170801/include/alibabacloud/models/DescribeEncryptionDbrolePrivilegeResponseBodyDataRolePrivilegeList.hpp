// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBROLEPRIVILEGERESPONSEBODYDATAROLEPRIVILEGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONDBROLEPRIVILEGERESPONSEBODYDATAROLEPRIVILEGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& obj) { 
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(Negation, negation_);
      DARABONBA_PTR_TO_JSON(NotEncryption, notEncryption_);
      DARABONBA_PTR_TO_JSON(RolePrivilegeName, rolePrivilegeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(Negation, negation_);
      DARABONBA_PTR_FROM_JSON(NotEncryption, notEncryption_);
      DARABONBA_PTR_FROM_JSON(RolePrivilegeName, rolePrivilegeName_);
    };
    DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList() = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList(const DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList &) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList(DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList &&) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList() = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& operator=(const DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList &) = default ;
    DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& operator=(DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryption_ != nullptr
        && this->negation_ != nullptr && this->notEncryption_ != nullptr && this->rolePrivilegeName_ != nullptr; };
    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline string encryption() const { DARABONBA_PTR_GET_DEFAULT(encryption_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& setEncryption(string encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };


    // negation Field Functions 
    bool hasNegation() const { return this->negation_ != nullptr;};
    void deleteNegation() { this->negation_ = nullptr;};
    inline string negation() const { DARABONBA_PTR_GET_DEFAULT(negation_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& setNegation(string negation) { DARABONBA_PTR_SET_VALUE(negation_, negation) };


    // notEncryption Field Functions 
    bool hasNotEncryption() const { return this->notEncryption_ != nullptr;};
    void deleteNotEncryption() { this->notEncryption_ = nullptr;};
    inline string notEncryption() const { DARABONBA_PTR_GET_DEFAULT(notEncryption_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& setNotEncryption(string notEncryption) { DARABONBA_PTR_SET_VALUE(notEncryption_, notEncryption) };


    // rolePrivilegeName Field Functions 
    bool hasRolePrivilegeName() const { return this->rolePrivilegeName_ != nullptr;};
    void deleteRolePrivilegeName() { this->rolePrivilegeName_ = nullptr;};
    inline string rolePrivilegeName() const { DARABONBA_PTR_GET_DEFAULT(rolePrivilegeName_, "") };
    inline DescribeEncryptionDBRolePrivilegeResponseBodyDataRolePrivilegeList& setRolePrivilegeName(string rolePrivilegeName) { DARABONBA_PTR_SET_VALUE(rolePrivilegeName_, rolePrivilegeName) };


  protected:
    std::shared_ptr<string> encryption_ = nullptr;
    std::shared_ptr<string> negation_ = nullptr;
    std::shared_ptr<string> notEncryption_ = nullptr;
    std::shared_ptr<string> rolePrivilegeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
