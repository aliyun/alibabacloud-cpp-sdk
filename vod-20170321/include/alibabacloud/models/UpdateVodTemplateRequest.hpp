// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVODTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVODTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateVodTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVodTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(VodTemplateId, vodTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVodTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(VodTemplateId, vodTemplateId_);
    };
    UpdateVodTemplateRequest() = default ;
    UpdateVodTemplateRequest(const UpdateVodTemplateRequest &) = default ;
    UpdateVodTemplateRequest(UpdateVodTemplateRequest &&) = default ;
    UpdateVodTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVodTemplateRequest() = default ;
    UpdateVodTemplateRequest& operator=(const UpdateVodTemplateRequest &) = default ;
    UpdateVodTemplateRequest& operator=(UpdateVodTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->templateConfig_ == nullptr && this->vodTemplateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateVodTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline UpdateVodTemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // vodTemplateId Field Functions 
    bool hasVodTemplateId() const { return this->vodTemplateId_ != nullptr;};
    void deleteVodTemplateId() { this->vodTemplateId_ = nullptr;};
    inline string getVodTemplateId() const { DARABONBA_PTR_GET_DEFAULT(vodTemplateId_, "") };
    inline UpdateVodTemplateRequest& setVodTemplateId(string vodTemplateId) { DARABONBA_PTR_SET_VALUE(vodTemplateId_, vodTemplateId) };


  protected:
    // The name of the template.
    // 
    // *   The name can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    shared_ptr<string> name_ {};
    // The configurations of the snapshot template. The value is a JSON-formatted string. For more information about the data structure, see the "SnapshotTemplateConfig" section of the [Media processing parameters](https://help.aliyun.com/document_detail/98618.html) topic.
    shared_ptr<string> templateConfig_ {};
    // The ID of the snapshot template.
    // 
    // This parameter is required.
    shared_ptr<string> vodTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
