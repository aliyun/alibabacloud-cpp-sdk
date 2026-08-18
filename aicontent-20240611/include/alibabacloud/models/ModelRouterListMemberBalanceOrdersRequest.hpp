// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERLISTMEMBERBALANCEORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERLISTMEMBERBALANCEORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterListMemberBalanceOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterListMemberBalanceOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(orderType, orderType_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterListMemberBalanceOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(orderType, orderType_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ModelRouterListMemberBalanceOrdersRequest() = default ;
    ModelRouterListMemberBalanceOrdersRequest(const ModelRouterListMemberBalanceOrdersRequest &) = default ;
    ModelRouterListMemberBalanceOrdersRequest(ModelRouterListMemberBalanceOrdersRequest &&) = default ;
    ModelRouterListMemberBalanceOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterListMemberBalanceOrdersRequest() = default ;
    ModelRouterListMemberBalanceOrdersRequest& operator=(const ModelRouterListMemberBalanceOrdersRequest &) = default ;
    ModelRouterListMemberBalanceOrdersRequest& operator=(ModelRouterListMemberBalanceOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceType_ == nullptr
        && this->direction_ == nullptr && this->orderType_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr; };
    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ModelRouterListMemberBalanceOrdersRequest& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModelRouterListMemberBalanceOrdersRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ModelRouterListMemberBalanceOrdersRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ModelRouterListMemberBalanceOrdersRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterListMemberBalanceOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The balance type filter. Valid values: permanent and monthly.
    shared_ptr<string> balanceType_ {};
    // The change direction filter. Valid values: in and out.
    shared_ptr<string> direction_ {};
    // The change type filter.
    shared_ptr<string> orderType_ {};
    // The page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
