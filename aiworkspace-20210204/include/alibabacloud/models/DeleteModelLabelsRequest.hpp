// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteModelLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteModelLabelsRequest() = default ;
    DeleteModelLabelsRequest(const DeleteModelLabelsRequest &) = default ;
    DeleteModelLabelsRequest(DeleteModelLabelsRequest &&) = default ;
    DeleteModelLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelLabelsRequest() = default ;
    DeleteModelLabelsRequest& operator=(const DeleteModelLabelsRequest &) = default ;
    DeleteModelLabelsRequest& operator=(DeleteModelLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelKeys_ != nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string labelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline DeleteModelLabelsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


  protected:
    // The label key to be deleted. To delete multiple label keys, separate them with commas (,).
    std::shared_ptr<string> labelKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
