// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEALORDERDETAILQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MEALORDERDETAILQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MealOrderDetailQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MealOrderDetailQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, MealOrderDetailQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    MealOrderDetailQueryRequest() = default ;
    MealOrderDetailQueryRequest(const MealOrderDetailQueryRequest &) = default ;
    MealOrderDetailQueryRequest(MealOrderDetailQueryRequest &&) = default ;
    MealOrderDetailQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MealOrderDetailQueryRequest() = default ;
    MealOrderDetailQueryRequest& operator=(const MealOrderDetailQueryRequest &) = default ;
    MealOrderDetailQueryRequest& operator=(MealOrderDetailQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline MealOrderDetailQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
