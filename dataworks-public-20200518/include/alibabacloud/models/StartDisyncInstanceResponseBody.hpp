// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDISYNCINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTDISYNCINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartDISyncInstanceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class StartDISyncInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDISyncInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StartDISyncInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StartDISyncInstanceResponseBody() = default ;
    StartDISyncInstanceResponseBody(const StartDISyncInstanceResponseBody &) = default ;
    StartDISyncInstanceResponseBody(StartDISyncInstanceResponseBody &&) = default ;
    StartDISyncInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDISyncInstanceResponseBody() = default ;
    StartDISyncInstanceResponseBody& operator=(const StartDISyncInstanceResponseBody &) = default ;
    StartDISyncInstanceResponseBody& operator=(StartDISyncInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartDISyncInstanceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, StartDISyncInstanceResponseBodyData) };
    inline StartDISyncInstanceResponseBodyData data() { DARABONBA_PTR_GET(data_, StartDISyncInstanceResponseBodyData) };
    inline StartDISyncInstanceResponseBody& setData(const StartDISyncInstanceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartDISyncInstanceResponseBody& setData(StartDISyncInstanceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartDISyncInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartDISyncInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result returned for the start.
    std::shared_ptr<StartDISyncInstanceResponseBodyData> data_ = nullptr;
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
