// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABORTCHANGEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABORTCHANGEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AbortChangeOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbortChangeOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(Rollback, rollback_);
    };
    friend void from_json(const Darabonba::Json& j, AbortChangeOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(Rollback, rollback_);
    };
    AbortChangeOrderRequest() = default ;
    AbortChangeOrderRequest(const AbortChangeOrderRequest &) = default ;
    AbortChangeOrderRequest(AbortChangeOrderRequest &&) = default ;
    AbortChangeOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbortChangeOrderRequest() = default ;
    AbortChangeOrderRequest& operator=(const AbortChangeOrderRequest &) = default ;
    AbortChangeOrderRequest& operator=(AbortChangeOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderId_ != nullptr
        && this->rollback_ != nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline AbortChangeOrderRequest& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // rollback Field Functions 
    bool hasRollback() const { return this->rollback_ != nullptr;};
    void deleteRollback() { this->rollback_ = nullptr;};
    inline bool rollback() const { DARABONBA_PTR_GET_DEFAULT(rollback_, false) };
    inline AbortChangeOrderRequest& setRollback(bool rollback) { DARABONBA_PTR_SET_VALUE(rollback_, rollback) };


  protected:
    // The ID of the change order.
    // 
    // This parameter is required.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    std::shared_ptr<bool> rollback_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
