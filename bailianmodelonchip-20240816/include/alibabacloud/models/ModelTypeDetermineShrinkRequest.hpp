// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELTYPEDETERMINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELTYPEDETERMINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class ModelTypeDetermineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelTypeDetermineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(history, historyShrink_);
      DARABONBA_PTR_TO_JSON(inputText, inputText_);
    };
    friend void from_json(const Darabonba::Json& j, ModelTypeDetermineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(history, historyShrink_);
      DARABONBA_PTR_FROM_JSON(inputText, inputText_);
    };
    ModelTypeDetermineShrinkRequest() = default ;
    ModelTypeDetermineShrinkRequest(const ModelTypeDetermineShrinkRequest &) = default ;
    ModelTypeDetermineShrinkRequest(ModelTypeDetermineShrinkRequest &&) = default ;
    ModelTypeDetermineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelTypeDetermineShrinkRequest() = default ;
    ModelTypeDetermineShrinkRequest& operator=(const ModelTypeDetermineShrinkRequest &) = default ;
    ModelTypeDetermineShrinkRequest& operator=(ModelTypeDetermineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyShrink_ == nullptr
        && return this->inputText_ == nullptr; };
    // historyShrink Field Functions 
    bool hasHistoryShrink() const { return this->historyShrink_ != nullptr;};
    void deleteHistoryShrink() { this->historyShrink_ = nullptr;};
    inline string historyShrink() const { DARABONBA_PTR_GET_DEFAULT(historyShrink_, "") };
    inline ModelTypeDetermineShrinkRequest& setHistoryShrink(string historyShrink) { DARABONBA_PTR_SET_VALUE(historyShrink_, historyShrink) };


    // inputText Field Functions 
    bool hasInputText() const { return this->inputText_ != nullptr;};
    void deleteInputText() { this->inputText_ = nullptr;};
    inline string inputText() const { DARABONBA_PTR_GET_DEFAULT(inputText_, "") };
    inline ModelTypeDetermineShrinkRequest& setInputText(string inputText) { DARABONBA_PTR_SET_VALUE(inputText_, inputText) };


  protected:
    std::shared_ptr<string> historyShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
