// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICELABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICELABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteServiceLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteServiceLabelRequest() = default ;
    DeleteServiceLabelRequest(const DeleteServiceLabelRequest &) = default ;
    DeleteServiceLabelRequest(DeleteServiceLabelRequest &&) = default ;
    DeleteServiceLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceLabelRequest() = default ;
    DeleteServiceLabelRequest& operator=(const DeleteServiceLabelRequest &) = default ;
    DeleteServiceLabelRequest& operator=(DeleteServiceLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keys_ == nullptr
        && return this->labelKeys_ == nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & keys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> keys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline DeleteServiceLabelRequest& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DeleteServiceLabelRequest& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline const vector<string> & labelKeys() const { DARABONBA_PTR_GET_CONST(labelKeys_, vector<string>) };
    inline vector<string> labelKeys() { DARABONBA_PTR_GET(labelKeys_, vector<string>) };
    inline DeleteServiceLabelRequest& setLabelKeys(const vector<string> & labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };
    inline DeleteServiceLabelRequest& setLabelKeys(vector<string> && labelKeys) { DARABONBA_PTR_SET_RVALUE(labelKeys_, labelKeys) };


  protected:
    // The service tags that you want to delete.
    std::shared_ptr<vector<string>> keys_ = nullptr;
    std::shared_ptr<vector<string>> labelKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
