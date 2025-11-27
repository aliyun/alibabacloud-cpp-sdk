// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTTEXTANOMALYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTTEXTANOMALYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectTextAnomalyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectTextAnomalyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, DetectTextAnomalyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    DetectTextAnomalyRequest() = default ;
    DetectTextAnomalyRequest(const DetectTextAnomalyRequest &) = default ;
    DetectTextAnomalyRequest(DetectTextAnomalyRequest &&) = default ;
    DetectTextAnomalyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectTextAnomalyRequest() = default ;
    DetectTextAnomalyRequest& operator=(const DetectTextAnomalyRequest &) = default ;
    DetectTextAnomalyRequest& operator=(DetectTextAnomalyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->projectName_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DetectTextAnomalyRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DetectTextAnomalyRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The text to be detected. It can contain up to 10,000 characters (including punctuation marks). Only Chinese text can be detected.
    // 
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
