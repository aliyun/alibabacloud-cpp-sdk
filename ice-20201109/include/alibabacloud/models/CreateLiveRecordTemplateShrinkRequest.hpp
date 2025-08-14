// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVERECORDTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveRecordTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveRecordTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormatShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveRecordTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormatShrink_);
    };
    CreateLiveRecordTemplateShrinkRequest() = default ;
    CreateLiveRecordTemplateShrinkRequest(const CreateLiveRecordTemplateShrinkRequest &) = default ;
    CreateLiveRecordTemplateShrinkRequest(CreateLiveRecordTemplateShrinkRequest &&) = default ;
    CreateLiveRecordTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveRecordTemplateShrinkRequest() = default ;
    CreateLiveRecordTemplateShrinkRequest& operator=(const CreateLiveRecordTemplateShrinkRequest &) = default ;
    CreateLiveRecordTemplateShrinkRequest& operator=(CreateLiveRecordTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->recordFormatShrink_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLiveRecordTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordFormatShrink Field Functions 
    bool hasRecordFormatShrink() const { return this->recordFormatShrink_ != nullptr;};
    void deleteRecordFormatShrink() { this->recordFormatShrink_ = nullptr;};
    inline string recordFormatShrink() const { DARABONBA_PTR_GET_DEFAULT(recordFormatShrink_, "") };
    inline CreateLiveRecordTemplateShrinkRequest& setRecordFormatShrink(string recordFormatShrink) { DARABONBA_PTR_SET_VALUE(recordFormatShrink_, recordFormatShrink) };


  protected:
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The list of recording formats.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordFormatShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
