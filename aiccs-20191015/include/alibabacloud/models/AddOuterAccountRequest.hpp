// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDOUTERACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDOUTERACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddOuterAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOuterAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Avatar, avatar_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(OuterAccountId, outerAccountId_);
      DARABONBA_PTR_TO_JSON(OuterAccountName, outerAccountName_);
      DARABONBA_PTR_TO_JSON(OuterAccountType, outerAccountType_);
      DARABONBA_PTR_TO_JSON(OuterDepartmentId, outerDepartmentId_);
      DARABONBA_PTR_TO_JSON(OuterDepartmentType, outerDepartmentType_);
      DARABONBA_PTR_TO_JSON(OuterGroupIds, outerGroupIds_);
      DARABONBA_PTR_TO_JSON(OuterGroupType, outerGroupType_);
      DARABONBA_PTR_TO_JSON(RealName, realName_);
    };
    friend void from_json(const Darabonba::Json& j, AddOuterAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(OuterAccountId, outerAccountId_);
      DARABONBA_PTR_FROM_JSON(OuterAccountName, outerAccountName_);
      DARABONBA_PTR_FROM_JSON(OuterAccountType, outerAccountType_);
      DARABONBA_PTR_FROM_JSON(OuterDepartmentId, outerDepartmentId_);
      DARABONBA_PTR_FROM_JSON(OuterDepartmentType, outerDepartmentType_);
      DARABONBA_PTR_FROM_JSON(OuterGroupIds, outerGroupIds_);
      DARABONBA_PTR_FROM_JSON(OuterGroupType, outerGroupType_);
      DARABONBA_PTR_FROM_JSON(RealName, realName_);
    };
    AddOuterAccountRequest() = default ;
    AddOuterAccountRequest(const AddOuterAccountRequest &) = default ;
    AddOuterAccountRequest(AddOuterAccountRequest &&) = default ;
    AddOuterAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOuterAccountRequest() = default ;
    AddOuterAccountRequest& operator=(const AddOuterAccountRequest &) = default ;
    AddOuterAccountRequest& operator=(AddOuterAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatar_ != nullptr
        && this->ext_ != nullptr && this->outerAccountId_ != nullptr && this->outerAccountName_ != nullptr && this->outerAccountType_ != nullptr && this->outerDepartmentId_ != nullptr
        && this->outerDepartmentType_ != nullptr && this->outerGroupIds_ != nullptr && this->outerGroupType_ != nullptr && this->realName_ != nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string avatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline AddOuterAccountRequest& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline AddOuterAccountRequest& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // outerAccountId Field Functions 
    bool hasOuterAccountId() const { return this->outerAccountId_ != nullptr;};
    void deleteOuterAccountId() { this->outerAccountId_ = nullptr;};
    inline string outerAccountId() const { DARABONBA_PTR_GET_DEFAULT(outerAccountId_, "") };
    inline AddOuterAccountRequest& setOuterAccountId(string outerAccountId) { DARABONBA_PTR_SET_VALUE(outerAccountId_, outerAccountId) };


    // outerAccountName Field Functions 
    bool hasOuterAccountName() const { return this->outerAccountName_ != nullptr;};
    void deleteOuterAccountName() { this->outerAccountName_ = nullptr;};
    inline string outerAccountName() const { DARABONBA_PTR_GET_DEFAULT(outerAccountName_, "") };
    inline AddOuterAccountRequest& setOuterAccountName(string outerAccountName) { DARABONBA_PTR_SET_VALUE(outerAccountName_, outerAccountName) };


    // outerAccountType Field Functions 
    bool hasOuterAccountType() const { return this->outerAccountType_ != nullptr;};
    void deleteOuterAccountType() { this->outerAccountType_ = nullptr;};
    inline string outerAccountType() const { DARABONBA_PTR_GET_DEFAULT(outerAccountType_, "") };
    inline AddOuterAccountRequest& setOuterAccountType(string outerAccountType) { DARABONBA_PTR_SET_VALUE(outerAccountType_, outerAccountType) };


    // outerDepartmentId Field Functions 
    bool hasOuterDepartmentId() const { return this->outerDepartmentId_ != nullptr;};
    void deleteOuterDepartmentId() { this->outerDepartmentId_ = nullptr;};
    inline string outerDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(outerDepartmentId_, "") };
    inline AddOuterAccountRequest& setOuterDepartmentId(string outerDepartmentId) { DARABONBA_PTR_SET_VALUE(outerDepartmentId_, outerDepartmentId) };


    // outerDepartmentType Field Functions 
    bool hasOuterDepartmentType() const { return this->outerDepartmentType_ != nullptr;};
    void deleteOuterDepartmentType() { this->outerDepartmentType_ = nullptr;};
    inline string outerDepartmentType() const { DARABONBA_PTR_GET_DEFAULT(outerDepartmentType_, "") };
    inline AddOuterAccountRequest& setOuterDepartmentType(string outerDepartmentType) { DARABONBA_PTR_SET_VALUE(outerDepartmentType_, outerDepartmentType) };


    // outerGroupIds Field Functions 
    bool hasOuterGroupIds() const { return this->outerGroupIds_ != nullptr;};
    void deleteOuterGroupIds() { this->outerGroupIds_ = nullptr;};
    inline string outerGroupIds() const { DARABONBA_PTR_GET_DEFAULT(outerGroupIds_, "") };
    inline AddOuterAccountRequest& setOuterGroupIds(string outerGroupIds) { DARABONBA_PTR_SET_VALUE(outerGroupIds_, outerGroupIds) };


    // outerGroupType Field Functions 
    bool hasOuterGroupType() const { return this->outerGroupType_ != nullptr;};
    void deleteOuterGroupType() { this->outerGroupType_ = nullptr;};
    inline string outerGroupType() const { DARABONBA_PTR_GET_DEFAULT(outerGroupType_, "") };
    inline AddOuterAccountRequest& setOuterGroupType(string outerGroupType) { DARABONBA_PTR_SET_VALUE(outerGroupType_, outerGroupType) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline AddOuterAccountRequest& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


  protected:
    std::shared_ptr<string> avatar_ = nullptr;
    std::shared_ptr<string> ext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerAccountId_ = nullptr;
    std::shared_ptr<string> outerAccountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerAccountType_ = nullptr;
    std::shared_ptr<string> outerDepartmentId_ = nullptr;
    std::shared_ptr<string> outerDepartmentType_ = nullptr;
    std::shared_ptr<string> outerGroupIds_ = nullptr;
    std::shared_ptr<string> outerGroupType_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
