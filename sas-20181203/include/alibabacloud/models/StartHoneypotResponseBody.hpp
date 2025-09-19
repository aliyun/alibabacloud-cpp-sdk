// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTHONEYPOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTHONEYPOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartHoneypotResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartHoneypotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartHoneypotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartHoneypotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartHoneypotResponseBody() = default ;
    StartHoneypotResponseBody(const StartHoneypotResponseBody &) = default ;
    StartHoneypotResponseBody(StartHoneypotResponseBody &&) = default ;
    StartHoneypotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartHoneypotResponseBody() = default ;
    StartHoneypotResponseBody& operator=(const StartHoneypotResponseBody &) = default ;
    StartHoneypotResponseBody& operator=(StartHoneypotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartHoneypotResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, StartHoneypotResponseBodyData) };
    inline StartHoneypotResponseBodyData data() { DARABONBA_PTR_GET(data_, StartHoneypotResponseBodyData) };
    inline StartHoneypotResponseBody& setData(const StartHoneypotResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartHoneypotResponseBody& setData(StartHoneypotResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartHoneypotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the honeypot.
    std::shared_ptr<StartHoneypotResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
