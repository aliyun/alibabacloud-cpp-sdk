// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FieldContentValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRealtimeDeliveryFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FieldContent, fieldContent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldContent, fieldContent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRealtimeDeliveryFieldResponseBody() = default ;
    GetRealtimeDeliveryFieldResponseBody(const GetRealtimeDeliveryFieldResponseBody &) = default ;
    GetRealtimeDeliveryFieldResponseBody(GetRealtimeDeliveryFieldResponseBody &&) = default ;
    GetRealtimeDeliveryFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeDeliveryFieldResponseBody() = default ;
    GetRealtimeDeliveryFieldResponseBody& operator=(const GetRealtimeDeliveryFieldResponseBody &) = default ;
    GetRealtimeDeliveryFieldResponseBody& operator=(GetRealtimeDeliveryFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldContent_ != nullptr
        && this->requestId_ != nullptr; };
    // fieldContent Field Functions 
    bool hasFieldContent() const { return this->fieldContent_ != nullptr;};
    void deleteFieldContent() { this->fieldContent_ = nullptr;};
    inline const map<string, FieldContentValue> & fieldContent() const { DARABONBA_PTR_GET_CONST(fieldContent_, map<string, FieldContentValue>) };
    inline map<string, FieldContentValue> fieldContent() { DARABONBA_PTR_GET(fieldContent_, map<string, FieldContentValue>) };
    inline GetRealtimeDeliveryFieldResponseBody& setFieldContent(const map<string, FieldContentValue> & fieldContent) { DARABONBA_PTR_SET_VALUE(fieldContent_, fieldContent) };
    inline GetRealtimeDeliveryFieldResponseBody& setFieldContent(map<string, FieldContentValue> && fieldContent) { DARABONBA_PTR_SET_RVALUE(fieldContent_, fieldContent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealtimeDeliveryFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The fields returned.
    std::shared_ptr<map<string, FieldContentValue>> fieldContent_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
