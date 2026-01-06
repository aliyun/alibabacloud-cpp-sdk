// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASETVERSIONLABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASETVERSIONLABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteDatasetVersionLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatasetVersionLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keys, keys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatasetVersionLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
    };
    DeleteDatasetVersionLabelsRequest() = default ;
    DeleteDatasetVersionLabelsRequest(const DeleteDatasetVersionLabelsRequest &) = default ;
    DeleteDatasetVersionLabelsRequest(DeleteDatasetVersionLabelsRequest &&) = default ;
    DeleteDatasetVersionLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatasetVersionLabelsRequest() = default ;
    DeleteDatasetVersionLabelsRequest& operator=(const DeleteDatasetVersionLabelsRequest &) = default ;
    DeleteDatasetVersionLabelsRequest& operator=(DeleteDatasetVersionLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keys_ == nullptr; };
    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline string getKeys() const { DARABONBA_PTR_GET_DEFAULT(keys_, "") };
    inline DeleteDatasetVersionLabelsRequest& setKeys(string keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };


  protected:
    // The tag keys. Multiple tags are separated by commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> keys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
