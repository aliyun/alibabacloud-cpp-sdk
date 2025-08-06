// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRAININGJOBLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRAININGJOBLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class DeleteTrainingJobLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTrainingJobLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTrainingJobLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    DeleteTrainingJobLabelsRequest() = default ;
    DeleteTrainingJobLabelsRequest(const DeleteTrainingJobLabelsRequest &) = default ;
    DeleteTrainingJobLabelsRequest(DeleteTrainingJobLabelsRequest &&) = default ;
    DeleteTrainingJobLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTrainingJobLabelsRequest() = default ;
    DeleteTrainingJobLabelsRequest& operator=(const DeleteTrainingJobLabelsRequest &) = default ;
    DeleteTrainingJobLabelsRequest& operator=(DeleteTrainingJobLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keys_ != nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline string keys() const { DARABONBA_PTR_GET_DEFAULT(keys_, "") };
    inline DeleteTrainingJobLabelsRequest& setKeys(string keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
