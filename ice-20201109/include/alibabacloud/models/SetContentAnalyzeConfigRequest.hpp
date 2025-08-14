// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCONTENTANALYZECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCONTENTANALYZECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SetContentAnalyzeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetContentAnalyzeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auto, auto_);
      DARABONBA_PTR_TO_JSON(SaveType, saveType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SetContentAnalyzeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auto, auto_);
      DARABONBA_PTR_FROM_JSON(SaveType, saveType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SetContentAnalyzeConfigRequest() = default ;
    SetContentAnalyzeConfigRequest(const SetContentAnalyzeConfigRequest &) = default ;
    SetContentAnalyzeConfigRequest(SetContentAnalyzeConfigRequest &&) = default ;
    SetContentAnalyzeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetContentAnalyzeConfigRequest() = default ;
    SetContentAnalyzeConfigRequest& operator=(const SetContentAnalyzeConfigRequest &) = default ;
    SetContentAnalyzeConfigRequest& operator=(SetContentAnalyzeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auto_ != nullptr
        && this->saveType_ != nullptr && this->templateId_ != nullptr; };
    // auto Field Functions 
    bool hasAuto() const { return this->auto_ != nullptr;};
    void deleteAuto() { this->auto_ = nullptr;};
    inline bool _auto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
    inline SetContentAnalyzeConfigRequest& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


    // saveType Field Functions 
    bool hasSaveType() const { return this->saveType_ != nullptr;};
    void deleteSaveType() { this->saveType_ = nullptr;};
    inline string saveType() const { DARABONBA_PTR_GET_DEFAULT(saveType_, "") };
    inline SetContentAnalyzeConfigRequest& setSaveType(string saveType) { DARABONBA_PTR_SET_VALUE(saveType_, saveType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SetContentAnalyzeConfigRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<bool> auto_ = nullptr;
    std::shared_ptr<string> saveType_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
