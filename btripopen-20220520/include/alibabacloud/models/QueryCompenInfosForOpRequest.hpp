// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMPENINFOSFOROPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMPENINFOSFOROPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryCompenInfosForOpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCompenInfosForOpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(compen_id, compenId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCompenInfosForOpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(compen_id, compenId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    QueryCompenInfosForOpRequest() = default ;
    QueryCompenInfosForOpRequest(const QueryCompenInfosForOpRequest &) = default ;
    QueryCompenInfosForOpRequest(QueryCompenInfosForOpRequest &&) = default ;
    QueryCompenInfosForOpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCompenInfosForOpRequest() = default ;
    QueryCompenInfosForOpRequest& operator=(const QueryCompenInfosForOpRequest &) = default ;
    QueryCompenInfosForOpRequest& operator=(QueryCompenInfosForOpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->compenId_ == nullptr && this->orderId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline QueryCompenInfosForOpRequest& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // compenId Field Functions 
    bool hasCompenId() const { return this->compenId_ != nullptr;};
    void deleteCompenId() { this->compenId_ = nullptr;};
    inline string getCompenId() const { DARABONBA_PTR_GET_DEFAULT(compenId_, "") };
    inline QueryCompenInfosForOpRequest& setCompenId(string compenId) { DARABONBA_PTR_SET_VALUE(compenId_, compenId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryCompenInfosForOpRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> category_ {};
    shared_ptr<string> compenId_ {};
    // This parameter is required.
    shared_ptr<string> orderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
