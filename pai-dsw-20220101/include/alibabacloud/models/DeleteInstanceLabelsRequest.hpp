// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class DeleteInstanceLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteInstanceLabelsRequest() = default ;
    DeleteInstanceLabelsRequest(const DeleteInstanceLabelsRequest &) = default ;
    DeleteInstanceLabelsRequest(DeleteInstanceLabelsRequest &&) = default ;
    DeleteInstanceLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceLabelsRequest() = default ;
    DeleteInstanceLabelsRequest& operator=(const DeleteInstanceLabelsRequest &) = default ;
    DeleteInstanceLabelsRequest& operator=(DeleteInstanceLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelKeys_ != nullptr; };
    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline string labelKeys() const { DARABONBA_PTR_GET_DEFAULT(labelKeys_, "") };
    inline DeleteInstanceLabelsRequest& setLabelKeys(string labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };


  protected:
    // The keys of the tags that you want to delete. Separate multiple tags with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> labelKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
