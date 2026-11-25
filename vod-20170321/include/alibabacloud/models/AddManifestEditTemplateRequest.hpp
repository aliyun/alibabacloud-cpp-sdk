// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMANIFESTEDITTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMANIFESTEDITTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddManifestEditTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddManifestEditTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, AddManifestEditTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    AddManifestEditTemplateRequest() = default ;
    AddManifestEditTemplateRequest(const AddManifestEditTemplateRequest &) = default ;
    AddManifestEditTemplateRequest(AddManifestEditTemplateRequest &&) = default ;
    AddManifestEditTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddManifestEditTemplateRequest() = default ;
    AddManifestEditTemplateRequest& operator=(const AddManifestEditTemplateRequest &) = default ;
    AddManifestEditTemplateRequest& operator=(AddManifestEditTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->templates_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddManifestEditTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline string getTemplates() const { DARABONBA_PTR_GET_DEFAULT(templates_, "") };
    inline AddManifestEditTemplateRequest& setTemplates(string templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };


  protected:
    // The name of the template. Spaces are allowed.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The video encoding configuration, such as `{"Codec":"H.264","Bitrate":"5000000"}`.
    shared_ptr<string> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
