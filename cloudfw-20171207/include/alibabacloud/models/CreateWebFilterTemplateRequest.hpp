// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBFILTERTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBFILTERTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateWebFilterTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebFilterTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebFilterTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateWebFilterTemplateRequest() = default ;
    CreateWebFilterTemplateRequest(const CreateWebFilterTemplateRequest &) = default ;
    CreateWebFilterTemplateRequest(CreateWebFilterTemplateRequest &&) = default ;
    CreateWebFilterTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebFilterTemplateRequest() = default ;
    CreateWebFilterTemplateRequest& operator=(const CreateWebFilterTemplateRequest &) = default ;
    CreateWebFilterTemplateRequest& operator=(CreateWebFilterTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWebFilterTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWebFilterTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateWebFilterTemplateRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the web filtering template. The description can be up to 128 characters in length and can be empty.
    shared_ptr<string> description_ {};
    // The name of the web filtering template. The name must be 1 to 64 characters in length and can contain Chinese characters, letters, digits, hyphens (-), underscores (_), and periods (.). The name cannot contain spaces or be empty.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The status of the web filtering template. Valid values:
    // - **Enable**: Enabled.
    // - **Disable**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
