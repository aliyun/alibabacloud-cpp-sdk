// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEQUALIFICATIONBYORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEQUALIFICATIONBYORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class GetHotlineQualificationByOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineQualificationByOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineQualificationByOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetHotlineQualificationByOrderResponseBodyData() = default ;
    GetHotlineQualificationByOrderResponseBodyData(const GetHotlineQualificationByOrderResponseBodyData &) = default ;
    GetHotlineQualificationByOrderResponseBodyData(GetHotlineQualificationByOrderResponseBodyData &&) = default ;
    GetHotlineQualificationByOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineQualificationByOrderResponseBodyData() = default ;
    GetHotlineQualificationByOrderResponseBodyData& operator=(const GetHotlineQualificationByOrderResponseBodyData &) = default ;
    GetHotlineQualificationByOrderResponseBodyData& operator=(GetHotlineQualificationByOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->qualificationId_ == nullptr && return this->status_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetHotlineQualificationByOrderResponseBodyData& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline string qualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
    inline GetHotlineQualificationByOrderResponseBodyData& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetHotlineQualificationByOrderResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the qualification application ticket.
    std::shared_ptr<string> orderId_ = nullptr;
    // The qualification ID.
    std::shared_ptr<string> qualificationId_ = nullptr;
    // The qualification state. Valid values:
    // 
    // *   **NORMAL**
    // *   **OTHER**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
