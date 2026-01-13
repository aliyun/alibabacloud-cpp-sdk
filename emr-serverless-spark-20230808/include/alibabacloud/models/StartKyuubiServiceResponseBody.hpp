// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTKYUUBISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTKYUUBISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StartKyuubiServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartKyuubiServiceResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartKyuubiServiceResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    StartKyuubiServiceResponseBody() = default ;
    StartKyuubiServiceResponseBody(const StartKyuubiServiceResponseBody &) = default ;
    StartKyuubiServiceResponseBody(StartKyuubiServiceResponseBody &&) = default ;
    StartKyuubiServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartKyuubiServiceResponseBody() = default ;
    StartKyuubiServiceResponseBody& operator=(const StartKyuubiServiceResponseBody &) = default ;
    StartKyuubiServiceResponseBody& operator=(StartKyuubiServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline StartKyuubiServiceResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline StartKyuubiServiceResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartKyuubiServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
