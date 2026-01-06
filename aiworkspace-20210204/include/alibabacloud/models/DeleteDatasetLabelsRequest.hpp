// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASETLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASETLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteDatasetLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatasetLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatasetLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteDatasetLabelsRequest() = default ;
    DeleteDatasetLabelsRequest(const DeleteDatasetLabelsRequest &) = default ;
    DeleteDatasetLabelsRequest(DeleteDatasetLabelsRequest &&) = default ;
    DeleteDatasetLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatasetLabelsRequest() = default ;
    DeleteDatasetLabelsRequest& operator=(const DeleteDatasetLabelsRequest &) = default ;
    DeleteDatasetLabelsRequest& operator=(DeleteDatasetLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelKeys_ == nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string getLabelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline DeleteDatasetLabelsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


  protected:
    // The tag key. You can call [GetDataset](https://help.aliyun.com/document_detail/457218.html) to obtain the tag key. Multiple tag keys are separated by commas (,).
    shared_ptr<string> labelKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
