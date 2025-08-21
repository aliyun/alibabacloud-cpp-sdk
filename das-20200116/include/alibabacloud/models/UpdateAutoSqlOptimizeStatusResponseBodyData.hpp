// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOSQLOPTIMIZESTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOSQLOPTIMIZESTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class UpdateAutoSqlOptimizeStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoSqlOptimizeStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoSqlOptimizeStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateAutoSqlOptimizeStatusResponseBodyData() = default ;
    UpdateAutoSqlOptimizeStatusResponseBodyData(const UpdateAutoSqlOptimizeStatusResponseBodyData &) = default ;
    UpdateAutoSqlOptimizeStatusResponseBodyData(UpdateAutoSqlOptimizeStatusResponseBodyData &&) = default ;
    UpdateAutoSqlOptimizeStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoSqlOptimizeStatusResponseBodyData() = default ;
    UpdateAutoSqlOptimizeStatusResponseBodyData& operator=(const UpdateAutoSqlOptimizeStatusResponseBodyData &) = default ;
    UpdateAutoSqlOptimizeStatusResponseBodyData& operator=(UpdateAutoSqlOptimizeStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMsg_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateAutoSqlOptimizeStatusResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline UpdateAutoSqlOptimizeStatusResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateAutoSqlOptimizeStatusResponseBodyData& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. Valid values:
    // 
    // *   **-1001**: indicates that the specified parameter is invalid.
    // *   **-91029**: indicates that a system error occurred.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Indicates whether the request initiated to configure the automatic SQL optimization feature was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
