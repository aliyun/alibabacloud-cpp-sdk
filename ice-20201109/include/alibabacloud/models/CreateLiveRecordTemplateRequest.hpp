// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateLiveRecordTemplateRequestRecordFormat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
    };
    CreateLiveRecordTemplateRequest() = default ;
    CreateLiveRecordTemplateRequest(const CreateLiveRecordTemplateRequest &) = default ;
    CreateLiveRecordTemplateRequest(CreateLiveRecordTemplateRequest &&) = default ;
    CreateLiveRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveRecordTemplateRequest() = default ;
    CreateLiveRecordTemplateRequest& operator=(const CreateLiveRecordTemplateRequest &) = default ;
    CreateLiveRecordTemplateRequest& operator=(CreateLiveRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->recordFormat_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLiveRecordTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const vector<CreateLiveRecordTemplateRequestRecordFormat> & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<CreateLiveRecordTemplateRequestRecordFormat>) };
    inline vector<CreateLiveRecordTemplateRequestRecordFormat> recordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<CreateLiveRecordTemplateRequestRecordFormat>) };
    inline CreateLiveRecordTemplateRequest& setRecordFormat(const vector<CreateLiveRecordTemplateRequestRecordFormat> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline CreateLiveRecordTemplateRequest& setRecordFormat(vector<CreateLiveRecordTemplateRequestRecordFormat> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


  protected:
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The list of recording formats.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateLiveRecordTemplateRequestRecordFormat>> recordFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
