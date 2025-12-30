// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class UpdateCustomLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LineId, lineId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LineId, lineId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateCustomLineResponseBody() = default ;
    UpdateCustomLineResponseBody(const UpdateCustomLineResponseBody &) = default ;
    UpdateCustomLineResponseBody(UpdateCustomLineResponseBody &&) = default ;
    UpdateCustomLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomLineResponseBody() = default ;
    UpdateCustomLineResponseBody& operator=(const UpdateCustomLineResponseBody &) = default ;
    UpdateCustomLineResponseBody& operator=(UpdateCustomLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lineId_ == nullptr
        && this->requestId_ == nullptr; };
    // lineId Field Functions 
    bool hasLineId() const { return this->lineId_ != nullptr;};
    void deleteLineId() { this->lineId_ = nullptr;};
    inline string getLineId() const { DARABONBA_PTR_GET_DEFAULT(lineId_, "") };
    inline UpdateCustomLineResponseBody& setLineId(string lineId) { DARABONBA_PTR_SET_VALUE(lineId_, lineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCustomLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique ID of the custom line.
    shared_ptr<string> lineId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
