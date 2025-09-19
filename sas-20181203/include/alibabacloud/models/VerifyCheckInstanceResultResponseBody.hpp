// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyCheckInstanceResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckInstanceResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyCheckInstanceResultResponseBody() = default ;
    VerifyCheckInstanceResultResponseBody(const VerifyCheckInstanceResultResponseBody &) = default ;
    VerifyCheckInstanceResultResponseBody(VerifyCheckInstanceResultResponseBody &&) = default ;
    VerifyCheckInstanceResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckInstanceResultResponseBody() = default ;
    VerifyCheckInstanceResultResponseBody& operator=(const VerifyCheckInstanceResultResponseBody &) = default ;
    VerifyCheckInstanceResultResponseBody& operator=(VerifyCheckInstanceResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyCheckInstanceResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, VerifyCheckInstanceResultResponseBodyData) };
    inline VerifyCheckInstanceResultResponseBodyData data() { DARABONBA_PTR_GET(data_, VerifyCheckInstanceResultResponseBodyData) };
    inline VerifyCheckInstanceResultResponseBody& setData(const VerifyCheckInstanceResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyCheckInstanceResultResponseBody& setData(VerifyCheckInstanceResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCheckInstanceResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<VerifyCheckInstanceResultResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
