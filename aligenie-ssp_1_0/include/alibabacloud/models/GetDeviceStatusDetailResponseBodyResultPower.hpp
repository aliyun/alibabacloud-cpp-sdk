// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODYRESULTPOWER_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICESTATUSDETAILRESPONSEBODYRESULTPOWER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceStatusDetailResponseBodyResultPower : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceStatusDetailResponseBodyResultPower& obj) { 
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceStatusDetailResponseBodyResultPower& obj) { 
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDeviceStatusDetailResponseBodyResultPower() = default ;
    GetDeviceStatusDetailResponseBodyResultPower(const GetDeviceStatusDetailResponseBodyResultPower &) = default ;
    GetDeviceStatusDetailResponseBodyResultPower(GetDeviceStatusDetailResponseBodyResultPower &&) = default ;
    GetDeviceStatusDetailResponseBodyResultPower(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceStatusDetailResponseBodyResultPower() = default ;
    GetDeviceStatusDetailResponseBodyResultPower& operator=(const GetDeviceStatusDetailResponseBodyResultPower &) = default ;
    GetDeviceStatusDetailResponseBodyResultPower& operator=(GetDeviceStatusDetailResponseBodyResultPower &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quantity_ != nullptr
        && this->status_ != nullptr; };
    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline GetDeviceStatusDetailResponseBodyResultPower& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDeviceStatusDetailResponseBodyResultPower& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> quantity_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
