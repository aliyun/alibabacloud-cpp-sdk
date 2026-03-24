// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYBROADCASTSCENEFROMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYBROADCASTSCENEFROMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CopyBroadcastSceneFromTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyBroadcastSceneFromTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyBroadcastSceneFromTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    CopyBroadcastSceneFromTemplateRequest() = default ;
    CopyBroadcastSceneFromTemplateRequest(const CopyBroadcastSceneFromTemplateRequest &) = default ;
    CopyBroadcastSceneFromTemplateRequest(CopyBroadcastSceneFromTemplateRequest &&) = default ;
    CopyBroadcastSceneFromTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyBroadcastSceneFromTemplateRequest() = default ;
    CopyBroadcastSceneFromTemplateRequest& operator=(const CopyBroadcastSceneFromTemplateRequest &) = default ;
    CopyBroadcastSceneFromTemplateRequest& operator=(CopyBroadcastSceneFromTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->ratio_ == nullptr && this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CopyBroadcastSceneFromTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline CopyBroadcastSceneFromTemplateRequest& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CopyBroadcastSceneFromTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> ratio_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
