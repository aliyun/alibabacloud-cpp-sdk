// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCROSSACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCROSSACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class AddCrossAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCrossAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCrossAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
    };
    AddCrossAccountRequest() = default ;
    AddCrossAccountRequest(const AddCrossAccountRequest &) = default ;
    AddCrossAccountRequest(AddCrossAccountRequest &&) = default ;
    AddCrossAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCrossAccountRequest() = default ;
    AddCrossAccountRequest& operator=(const AddCrossAccountRequest &) = default ;
    AddCrossAccountRequest& operator=(AddCrossAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline AddCrossAccountRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline AddCrossAccountRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline AddCrossAccountRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline AddCrossAccountRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


  protected:
    // The alias. The maximum length is 32 characters. This parameter is not required for cross-account backups that are configured based on a resource directory.
    shared_ptr<string> alias_ {};
    // The name of the RAM role for the account to back up. This parameter is used when you configure a cross-account backup by assuming a RAM role.
    shared_ptr<string> crossAccountRoleName_ {};
    // The type of cross-account backup. Valid values:
    // 
    // - **CROSS_ACCOUNT**: Configures a cross-account backup by assuming a RAM role.
    // 
    // - **CROSS_ACCOUNT_BY_RD**: Configures a cross-account backup based on a resource directory.
    shared_ptr<string> crossAccountType_ {};
    // The UID of the account to back up.
    shared_ptr<int64_t> crossAccountUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
