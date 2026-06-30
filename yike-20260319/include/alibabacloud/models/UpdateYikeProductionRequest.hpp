// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEYIKEPRODUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEYIKEPRODUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class UpdateYikeProductionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateYikeProductionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateYikeProductionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateYikeProductionRequest() = default ;
    UpdateYikeProductionRequest(const UpdateYikeProductionRequest &) = default ;
    UpdateYikeProductionRequest(UpdateYikeProductionRequest &&) = default ;
    UpdateYikeProductionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateYikeProductionRequest() = default ;
    UpdateYikeProductionRequest& operator=(const UpdateYikeProductionRequest &) = default ;
    UpdateYikeProductionRequest& operator=(UpdateYikeProductionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productionId_ == nullptr
        && this->title_ == nullptr; };
    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline UpdateYikeProductionRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateYikeProductionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<string> productionId_ {};
    // The project title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
