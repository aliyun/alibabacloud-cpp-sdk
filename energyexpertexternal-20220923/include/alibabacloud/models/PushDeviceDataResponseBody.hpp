// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class PushDeviceDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PushDeviceDataResponseBody() = default ;
    PushDeviceDataResponseBody(const PushDeviceDataResponseBody &) = default ;
    PushDeviceDataResponseBody(PushDeviceDataResponseBody &&) = default ;
    PushDeviceDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceDataResponseBody() = default ;
    PushDeviceDataResponseBody& operator=(const PushDeviceDataResponseBody &) = default ;
    PushDeviceDataResponseBody& operator=(PushDeviceDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline PushDeviceDataResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushDeviceDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Whether the data is pushed successfully. Success is returned.
    std::shared_ptr<string> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
