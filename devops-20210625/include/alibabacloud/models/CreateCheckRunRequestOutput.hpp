// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKRUNREQUESTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKRUNREQUESTOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCheckRunRequestOutputImages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCheckRunRequestOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckRunRequestOutput& obj) { 
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckRunRequestOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateCheckRunRequestOutput() = default ;
    CreateCheckRunRequestOutput(const CreateCheckRunRequestOutput &) = default ;
    CreateCheckRunRequestOutput(CreateCheckRunRequestOutput &&) = default ;
    CreateCheckRunRequestOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckRunRequestOutput() = default ;
    CreateCheckRunRequestOutput& operator=(const CreateCheckRunRequestOutput &) = default ;
    CreateCheckRunRequestOutput& operator=(CreateCheckRunRequestOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && return this->summary_ == nullptr && return this->text_ == nullptr && return this->title_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::CreateCheckRunRequestOutputImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::CreateCheckRunRequestOutputImages>) };
    inline vector<Models::CreateCheckRunRequestOutputImages> images() { DARABONBA_PTR_GET(images_, vector<Models::CreateCheckRunRequestOutputImages>) };
    inline CreateCheckRunRequestOutput& setImages(const vector<Models::CreateCheckRunRequestOutputImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline CreateCheckRunRequestOutput& setImages(vector<Models::CreateCheckRunRequestOutputImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateCheckRunRequestOutput& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline CreateCheckRunRequestOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateCheckRunRequestOutput& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::CreateCheckRunRequestOutputImages>> images_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
