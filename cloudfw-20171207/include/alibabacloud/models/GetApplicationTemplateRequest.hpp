// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class GetApplicationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(BuiltInApplicationActionType, builtInApplicationActionType_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(BuiltInApplicationActionType, builtInApplicationActionType_);
    };
    GetApplicationTemplateRequest() = default ;
    GetApplicationTemplateRequest(const GetApplicationTemplateRequest &) = default ;
    GetApplicationTemplateRequest(GetApplicationTemplateRequest &&) = default ;
    GetApplicationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationTemplateRequest() = default ;
    GetApplicationTemplateRequest& operator=(const GetApplicationTemplateRequest &) = default ;
    GetApplicationTemplateRequest& operator=(GetApplicationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr
        && this->builtInApplicationActionType_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline GetApplicationTemplateRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // builtInApplicationActionType Field Functions 
    bool hasBuiltInApplicationActionType() const { return this->builtInApplicationActionType_ != nullptr;};
    void deleteBuiltInApplicationActionType() { this->builtInApplicationActionType_ = nullptr;};
    inline string getBuiltInApplicationActionType() const { DARABONBA_PTR_GET_DEFAULT(builtInApplicationActionType_, "") };
    inline GetApplicationTemplateRequest& setBuiltInApplicationActionType(string builtInApplicationActionType) { DARABONBA_PTR_SET_VALUE(builtInApplicationActionType_, builtInApplicationActionType) };


  protected:
    // The ID of the application template to query. The template must exist within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> applicationTemplateId_ {};
    // The return scope for built-in application actions. Valid values:
    // - **Custom**: Returns only applications for which users have customized actions. This is the default value.
    // - **All**: Returns all built-in applications.
    // The priority of action effectiveness is: user-customized > template default > application library default.
    shared_ptr<string> builtInApplicationActionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
