// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRDSTOCLICKHOUSEDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRDSTOCLICKHOUSEDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class ModifyRDSToClickhouseDbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRDSToClickhouseDbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRDSToClickhouseDbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyRDSToClickhouseDbResponseBody() = default ;
    ModifyRDSToClickhouseDbResponseBody(const ModifyRDSToClickhouseDbResponseBody &) = default ;
    ModifyRDSToClickhouseDbResponseBody(ModifyRDSToClickhouseDbResponseBody &&) = default ;
    ModifyRDSToClickhouseDbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRDSToClickhouseDbResponseBody() = default ;
    ModifyRDSToClickhouseDbResponseBody& operator=(const ModifyRDSToClickhouseDbResponseBody &) = default ;
    ModifyRDSToClickhouseDbResponseBody& operator=(ModifyRDSToClickhouseDbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int64_t errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0L) };
    inline ModifyRDSToClickhouseDbResponseBody& setErrorCode(int64_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ModifyRDSToClickhouseDbResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRDSToClickhouseDbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline ModifyRDSToClickhouseDbResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    std::shared_ptr<int64_t> errorCode_ = nullptr;
    // *   If the value **1** is returned for the **Status** parameter, the system does not return the ErrorMsg parameter.
    // *   If the value **0** is returned for the **Status** parameter, the ErrorMsg parameter returns the cause for the modification failure.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the modification was successful. Valid values:
    // 
    // *   **1**: The modification was successful.
    // *   **0**: The modification failed.
    std::shared_ptr<int64_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
