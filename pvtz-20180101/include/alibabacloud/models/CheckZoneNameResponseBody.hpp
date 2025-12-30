// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKZONENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKZONENAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class CheckZoneNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckZoneNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Check, check_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckZoneNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Check, check_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckZoneNameResponseBody() = default ;
    CheckZoneNameResponseBody(const CheckZoneNameResponseBody &) = default ;
    CheckZoneNameResponseBody(CheckZoneNameResponseBody &&) = default ;
    CheckZoneNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckZoneNameResponseBody() = default ;
    CheckZoneNameResponseBody& operator=(const CheckZoneNameResponseBody &) = default ;
    CheckZoneNameResponseBody& operator=(CheckZoneNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->check_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // check Field Functions 
    bool hasCheck() const { return this->check_ != nullptr;};
    void deleteCheck() { this->check_ = nullptr;};
    inline bool getCheck() const { DARABONBA_PTR_GET_DEFAULT(check_, false) };
    inline CheckZoneNameResponseBody& setCheck(bool check) { DARABONBA_PTR_SET_VALUE(check_, check) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckZoneNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckZoneNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the zone name can be added. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> check_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
