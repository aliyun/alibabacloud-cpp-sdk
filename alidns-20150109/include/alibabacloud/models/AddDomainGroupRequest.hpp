// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOMAINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDOMAINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDomainGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDomainGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, AddDomainGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    AddDomainGroupRequest() = default ;
    AddDomainGroupRequest(const AddDomainGroupRequest &) = default ;
    AddDomainGroupRequest(AddDomainGroupRequest &&) = default ;
    AddDomainGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDomainGroupRequest() = default ;
    AddDomainGroupRequest& operator=(const AddDomainGroupRequest &) = default ;
    AddDomainGroupRequest& operator=(AddDomainGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->lang_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AddDomainGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDomainGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The name of the domain name group.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
