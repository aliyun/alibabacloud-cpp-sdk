// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTEXTSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTEXTSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteContextStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContextStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deleteOutputDataset, deleteOutputDataset_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContextStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deleteOutputDataset, deleteOutputDataset_);
    };
    DeleteContextStoreRequest() = default ;
    DeleteContextStoreRequest(const DeleteContextStoreRequest &) = default ;
    DeleteContextStoreRequest(DeleteContextStoreRequest &&) = default ;
    DeleteContextStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContextStoreRequest() = default ;
    DeleteContextStoreRequest& operator=(const DeleteContextStoreRequest &) = default ;
    DeleteContextStoreRequest& operator=(DeleteContextStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteOutputDataset_ == nullptr; };
    // deleteOutputDataset Field Functions 
    bool hasDeleteOutputDataset() const { return this->deleteOutputDataset_ != nullptr;};
    void deleteDeleteOutputDataset() { this->deleteOutputDataset_ = nullptr;};
    inline bool getDeleteOutputDataset() const { DARABONBA_PTR_GET_DEFAULT(deleteOutputDataset_, false) };
    inline DeleteContextStoreRequest& setDeleteOutputDataset(bool deleteOutputDataset) { DARABONBA_PTR_SET_VALUE(deleteOutputDataset_, deleteOutputDataset) };


  protected:
    // Specifies whether to simultaneously delete the memory output dataset (memory type). Default value: false.
    shared_ptr<bool> deleteOutputDataset_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
