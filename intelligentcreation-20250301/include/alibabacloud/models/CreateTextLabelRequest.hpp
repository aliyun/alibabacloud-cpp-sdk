// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEXTLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEXTLABELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20250301
{
namespace Models
{
  class CreateTextLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTextLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(LabelTemplateId, labelTemplateId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTextLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(LabelTemplateId, labelTemplateId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateTextLabelRequest() = default ;
    CreateTextLabelRequest(const CreateTextLabelRequest &) = default ;
    CreateTextLabelRequest(CreateTextLabelRequest &&) = default ;
    CreateTextLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTextLabelRequest() = default ;
    CreateTextLabelRequest& operator=(const CreateTextLabelRequest &) = default ;
    CreateTextLabelRequest& operator=(CreateTextLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->labelTemplateId_ == nullptr && this->projectId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CreateTextLabelRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // labelTemplateId Field Functions 
    bool hasLabelTemplateId() const { return this->labelTemplateId_ != nullptr;};
    void deleteLabelTemplateId() { this->labelTemplateId_ = nullptr;};
    inline string getLabelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(labelTemplateId_, "") };
    inline CreateTextLabelRequest& setLabelTemplateId(string labelTemplateId) { DARABONBA_PTR_SET_VALUE(labelTemplateId_, labelTemplateId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateTextLabelRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> data_ {};
    shared_ptr<string> labelTemplateId_ {};
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20250301
#endif
