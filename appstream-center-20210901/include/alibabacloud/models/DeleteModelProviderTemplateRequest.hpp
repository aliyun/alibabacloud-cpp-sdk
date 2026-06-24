// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELPROVIDERTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELPROVIDERTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteModelProviderTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelProviderTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelProviderTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
    };
    DeleteModelProviderTemplateRequest() = default ;
    DeleteModelProviderTemplateRequest(const DeleteModelProviderTemplateRequest &) = default ;
    DeleteModelProviderTemplateRequest(DeleteModelProviderTemplateRequest &&) = default ;
    DeleteModelProviderTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelProviderTemplateRequest() = default ;
    DeleteModelProviderTemplateRequest& operator=(const DeleteModelProviderTemplateRequest &) = default ;
    DeleteModelProviderTemplateRequest& operator=(DeleteModelProviderTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->providerTemplateId_ == nullptr; };
    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline DeleteModelProviderTemplateRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


  protected:
    // The ID of the model provider template.
    // 
    // This parameter is required.
    shared_ptr<string> providerTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
