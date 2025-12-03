// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHECKRUNRESPONSEBODYRESULTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECHECKRUNRESPONSEBODYRESULTOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCheckRunResponseBodyResultOutputImages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCheckRunResponseBodyResultOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCheckRunResponseBodyResultOutput& obj) { 
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCheckRunResponseBodyResultOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateCheckRunResponseBodyResultOutput() = default ;
    CreateCheckRunResponseBodyResultOutput(const CreateCheckRunResponseBodyResultOutput &) = default ;
    CreateCheckRunResponseBodyResultOutput(CreateCheckRunResponseBodyResultOutput &&) = default ;
    CreateCheckRunResponseBodyResultOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCheckRunResponseBodyResultOutput() = default ;
    CreateCheckRunResponseBodyResultOutput& operator=(const CreateCheckRunResponseBodyResultOutput &) = default ;
    CreateCheckRunResponseBodyResultOutput& operator=(CreateCheckRunResponseBodyResultOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->images_ == nullptr
        && return this->summary_ == nullptr && return this->text_ == nullptr && return this->title_ == nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::CreateCheckRunResponseBodyResultOutputImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::CreateCheckRunResponseBodyResultOutputImages>) };
    inline vector<Models::CreateCheckRunResponseBodyResultOutputImages> images() { DARABONBA_PTR_GET(images_, vector<Models::CreateCheckRunResponseBodyResultOutputImages>) };
    inline CreateCheckRunResponseBodyResultOutput& setImages(const vector<Models::CreateCheckRunResponseBodyResultOutputImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline CreateCheckRunResponseBodyResultOutput& setImages(vector<Models::CreateCheckRunResponseBodyResultOutputImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateCheckRunResponseBodyResultOutput& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline CreateCheckRunResponseBodyResultOutput& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateCheckRunResponseBodyResultOutput& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::CreateCheckRunResponseBodyResultOutputImages>> images_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
