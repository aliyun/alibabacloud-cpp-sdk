// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
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
    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline GetApplicationTemplateRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


  protected:
    // 应用模板id
    // 
    // This parameter is required.
    shared_ptr<string> applicationTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
