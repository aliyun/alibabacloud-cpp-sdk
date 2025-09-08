// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOSEDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class CloseDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloseDeliveryResponseBody() = default ;
    CloseDeliveryResponseBody(const CloseDeliveryResponseBody &) = default ;
    CloseDeliveryResponseBody(CloseDeliveryResponseBody &&) = default ;
    CloseDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseDeliveryResponseBody() = default ;
    CloseDeliveryResponseBody& operator=(const CloseDeliveryResponseBody &) = default ;
    CloseDeliveryResponseBody& operator=(CloseDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool data() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline CloseDeliveryResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloseDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the threat analysis feature was disabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
