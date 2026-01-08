// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACLCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACLCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateAclCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAclCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(CheckNames, checkNames_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAclCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(CheckNames, checkNames_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    CreateAclCheckRequest() = default ;
    CreateAclCheckRequest(const CreateAclCheckRequest &) = default ;
    CreateAclCheckRequest(CreateAclCheckRequest &&) = default ;
    CreateAclCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAclCheckRequest() = default ;
    CreateAclCheckRequest& operator=(const CreateAclCheckRequest &) = default ;
    CreateAclCheckRequest& operator=(CreateAclCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && this->checkNames_ == nullptr && this->lang_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline CreateAclCheckRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // checkNames Field Functions 
    bool hasCheckNames() const { return this->checkNames_ != nullptr;};
    void deleteCheckNames() { this->checkNames_ = nullptr;};
    inline const vector<string> & getCheckNames() const { DARABONBA_PTR_GET_CONST(checkNames_, vector<string>) };
    inline vector<string> getCheckNames() { DARABONBA_PTR_GET(checkNames_, vector<string>) };
    inline CreateAclCheckRequest& setCheckNames(const vector<string> & checkNames) { DARABONBA_PTR_SET_VALUE(checkNames_, checkNames) };
    inline CreateAclCheckRequest& setCheckNames(vector<string> && checkNames) { DARABONBA_PTR_SET_RVALUE(checkNames_, checkNames) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateAclCheckRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    shared_ptr<string> aclType_ {};
    shared_ptr<vector<string>> checkNames_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
