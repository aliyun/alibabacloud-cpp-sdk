// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSSERVICEINSPECTIONINSPECTIONCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSSERVICEINSPECTIONINSPECTIONCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersServiceInspectionInspectionContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersServiceInspectionInspectionContents& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersServiceInspectionInspectionContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateTaskRequestParametersServiceInspectionInspectionContents() = default ;
    CreateTaskRequestParametersServiceInspectionInspectionContents(const CreateTaskRequestParametersServiceInspectionInspectionContents &) = default ;
    CreateTaskRequestParametersServiceInspectionInspectionContents(CreateTaskRequestParametersServiceInspectionInspectionContents &&) = default ;
    CreateTaskRequestParametersServiceInspectionInspectionContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersServiceInspectionInspectionContents() = default ;
    CreateTaskRequestParametersServiceInspectionInspectionContents& operator=(const CreateTaskRequestParametersServiceInspectionInspectionContents &) = default ;
    CreateTaskRequestParametersServiceInspectionInspectionContents& operator=(CreateTaskRequestParametersServiceInspectionInspectionContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->title_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateTaskRequestParametersServiceInspectionInspectionContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTaskRequestParametersServiceInspectionInspectionContents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
