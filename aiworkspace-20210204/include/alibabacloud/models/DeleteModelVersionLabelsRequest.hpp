// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELVERSIONLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELVERSIONLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteModelVersionLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelVersionLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelVersionLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteModelVersionLabelsRequest() = default ;
    DeleteModelVersionLabelsRequest(const DeleteModelVersionLabelsRequest &) = default ;
    DeleteModelVersionLabelsRequest(DeleteModelVersionLabelsRequest &&) = default ;
    DeleteModelVersionLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelVersionLabelsRequest() = default ;
    DeleteModelVersionLabelsRequest& operator=(const DeleteModelVersionLabelsRequest &) = default ;
    DeleteModelVersionLabelsRequest& operator=(DeleteModelVersionLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelKeys_ == nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string labelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline DeleteModelVersionLabelsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


  protected:
    // The key of the tag to be deleted. Separate multiple tag keys with commas (,).
    std::shared_ptr<string> labelKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
