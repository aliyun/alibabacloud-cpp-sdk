// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMMERCIALSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMMERCIALSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CheckCommercialStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCommercialStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCommercialStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCommercialStatusResponseBody() = default ;
    CheckCommercialStatusResponseBody(const CheckCommercialStatusResponseBody &) = default ;
    CheckCommercialStatusResponseBody(CheckCommercialStatusResponseBody &&) = default ;
    CheckCommercialStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCommercialStatusResponseBody() = default ;
    CheckCommercialStatusResponseBody& operator=(const CheckCommercialStatusResponseBody &) = default ;
    CheckCommercialStatusResponseBody& operator=(CheckCommercialStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline CheckCommercialStatusResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCommercialStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    std::shared_ptr<string> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
