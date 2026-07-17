// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDYIKEPRODUCTIONMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDYIKEPRODUCTIONMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class AddYikeProductionMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddYikeProductionMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
      DARABONBA_PTR_TO_JSON(YikeUserIds, yikeUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, AddYikeProductionMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
      DARABONBA_PTR_FROM_JSON(YikeUserIds, yikeUserIds_);
    };
    AddYikeProductionMembersRequest() = default ;
    AddYikeProductionMembersRequest(const AddYikeProductionMembersRequest &) = default ;
    AddYikeProductionMembersRequest(AddYikeProductionMembersRequest &&) = default ;
    AddYikeProductionMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddYikeProductionMembersRequest() = default ;
    AddYikeProductionMembersRequest& operator=(const AddYikeProductionMembersRequest &) = default ;
    AddYikeProductionMembersRequest& operator=(AddYikeProductionMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productionId_ == nullptr
        && this->yikeUserIds_ == nullptr; };
    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline AddYikeProductionMembersRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


    // yikeUserIds Field Functions 
    bool hasYikeUserIds() const { return this->yikeUserIds_ != nullptr;};
    void deleteYikeUserIds() { this->yikeUserIds_ = nullptr;};
    inline string getYikeUserIds() const { DARABONBA_PTR_GET_DEFAULT(yikeUserIds_, "") };
    inline AddYikeProductionMembersRequest& setYikeUserIds(string yikeUserIds) { DARABONBA_PTR_SET_VALUE(yikeUserIds_, yikeUserIds) };


  protected:
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<string> productionId_ {};
    // The RAM user IDs.
    // 
    // This parameter is required.
    shared_ptr<string> yikeUserIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
