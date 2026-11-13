// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBFILTERTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBFILTERTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateWebFilterTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebFilterTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebFilterTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    UpdateWebFilterTemplateRequest() = default ;
    UpdateWebFilterTemplateRequest(const UpdateWebFilterTemplateRequest &) = default ;
    UpdateWebFilterTemplateRequest(UpdateWebFilterTemplateRequest &&) = default ;
    UpdateWebFilterTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebFilterTemplateRequest() = default ;
    UpdateWebFilterTemplateRequest& operator=(const UpdateWebFilterTemplateRequest &) = default ;
    UpdateWebFilterTemplateRequest& operator=(UpdateWebFilterTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr && this->webFilterTemplateId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWebFilterTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWebFilterTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateWebFilterTemplateRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // webFilterTemplateId Field Functions 
    bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
    void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
    inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
    inline UpdateWebFilterTemplateRequest& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


  protected:
    // The description of the web filtering template. The description can be up to 128 characters in length. If this parameter is not specified, the original value is retained. If an empty string is specified, the description is cleared.
    shared_ptr<string> description_ {};
    // The name of the web filtering template. The name must be 1 to 64 characters in length, and can contain Chinese characters, letters, digits, hyphens (-), underscores (_), and periods (.). It cannot contain spaces. If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> name_ {};
    // The status of the web filtering template. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    // If this parameter is not specified or is left empty, the original value is retained.
    shared_ptr<string> status_ {};
    // The ID of the web filtering template to be modified. The template must exist within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> webFilterTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
