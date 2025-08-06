// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELIMAGEPIPELINEEXECUTIONREQUESTTEMPLATETAG_HPP_
#define ALIBABACLOUD_MODELS_CANCELIMAGEPIPELINEEXECUTIONREQUESTTEMPLATETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CancelImagePipelineExecutionRequestTemplateTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelImagePipelineExecutionRequestTemplateTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CancelImagePipelineExecutionRequestTemplateTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CancelImagePipelineExecutionRequestTemplateTag() = default ;
    CancelImagePipelineExecutionRequestTemplateTag(const CancelImagePipelineExecutionRequestTemplateTag &) = default ;
    CancelImagePipelineExecutionRequestTemplateTag(CancelImagePipelineExecutionRequestTemplateTag &&) = default ;
    CancelImagePipelineExecutionRequestTemplateTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelImagePipelineExecutionRequestTemplateTag() = default ;
    CancelImagePipelineExecutionRequestTemplateTag& operator=(const CancelImagePipelineExecutionRequestTemplateTag &) = default ;
    CancelImagePipelineExecutionRequestTemplateTag& operator=(CancelImagePipelineExecutionRequestTemplateTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CancelImagePipelineExecutionRequestTemplateTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CancelImagePipelineExecutionRequestTemplateTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<string> key_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
