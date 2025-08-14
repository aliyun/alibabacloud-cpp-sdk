// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVERECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVERECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLiveRecordTemplateRequestRecordFormat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateLiveRecordTemplateRequest() = default ;
    UpdateLiveRecordTemplateRequest(const UpdateLiveRecordTemplateRequest &) = default ;
    UpdateLiveRecordTemplateRequest(UpdateLiveRecordTemplateRequest &&) = default ;
    UpdateLiveRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveRecordTemplateRequest() = default ;
    UpdateLiveRecordTemplateRequest& operator=(const UpdateLiveRecordTemplateRequest &) = default ;
    UpdateLiveRecordTemplateRequest& operator=(UpdateLiveRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->recordFormat_ != nullptr && this->templateId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveRecordTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<UpdateLiveRecordTemplateRequestRecordFormat> & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<UpdateLiveRecordTemplateRequestRecordFormat>) };
    inline vector<UpdateLiveRecordTemplateRequestRecordFormat> recordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<UpdateLiveRecordTemplateRequestRecordFormat>) };
    inline UpdateLiveRecordTemplateRequest& setRecordFormat(const vector<UpdateLiveRecordTemplateRequestRecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline UpdateLiveRecordTemplateRequest& setRecordFormat(vector<UpdateLiveRecordTemplateRequestRecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateLiveRecordTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The list of recording formats.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateLiveRecordTemplateRequestRecordFormat>> recordFormat_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
