// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBROADCASTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBROADCASTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetBroadcastTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBroadcastTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBroadcastTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    GetBroadcastTemplateRequest() = default ;
    GetBroadcastTemplateRequest(const GetBroadcastTemplateRequest &) = default ;
    GetBroadcastTemplateRequest(GetBroadcastTemplateRequest &&) = default ;
    GetBroadcastTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBroadcastTemplateRequest() = default ;
    GetBroadcastTemplateRequest& operator=(const GetBroadcastTemplateRequest &) = default ;
    GetBroadcastTemplateRequest& operator=(GetBroadcastTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetBroadcastTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
