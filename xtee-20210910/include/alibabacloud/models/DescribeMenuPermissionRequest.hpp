// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMENUPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMENUPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeMenuPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMenuPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(permissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMenuPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(permissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeMenuPermissionRequest() = default ;
    DescribeMenuPermissionRequest(const DescribeMenuPermissionRequest &) = default ;
    DescribeMenuPermissionRequest(DescribeMenuPermissionRequest &&) = default ;
    DescribeMenuPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMenuPermissionRequest() = default ;
    DescribeMenuPermissionRequest& operator=(const DescribeMenuPermissionRequest &) = default ;
    DescribeMenuPermissionRequest& operator=(DescribeMenuPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->permissionType_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeMenuPermissionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline DescribeMenuPermissionRequest& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeMenuPermissionRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and responses, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Permission type
    shared_ptr<string> permissionType_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
