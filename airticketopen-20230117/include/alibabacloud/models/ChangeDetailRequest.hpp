// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
    };
    ChangeDetailRequest() = default ;
    ChangeDetailRequest(const ChangeDetailRequest &) = default ;
    ChangeDetailRequest(ChangeDetailRequest &&) = default ;
    ChangeDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailRequest() = default ;
    ChangeDetailRequest& operator=(const ChangeDetailRequest &) = default ;
    ChangeDetailRequest& operator=(ChangeDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderNum_ == nullptr; };
    // changeOrderNum Field Functions 
    bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
    void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
    inline int64_t changeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
    inline ChangeDetailRequest& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> changeOrderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
