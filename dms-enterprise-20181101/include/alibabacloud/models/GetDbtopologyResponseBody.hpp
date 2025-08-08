// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDBTopologyResponseBodyDBTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDBTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDBTopologyResponseBody() = default ;
    GetDBTopologyResponseBody(const GetDBTopologyResponseBody &) = default ;
    GetDBTopologyResponseBody(GetDBTopologyResponseBody &&) = default ;
    GetDBTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBTopologyResponseBody() = default ;
    GetDBTopologyResponseBody& operator=(const GetDBTopologyResponseBody &) = default ;
    GetDBTopologyResponseBody& operator=(GetDBTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBTopology_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // DBTopology Field Functions 
    bool hasDBTopology() const { return this->DBTopology_ != nullptr;};
    void deleteDBTopology() { this->DBTopology_ = nullptr;};
    inline const GetDBTopologyResponseBodyDBTopology & DBTopology() const { DARABONBA_PTR_GET_CONST(DBTopology_, GetDBTopologyResponseBodyDBTopology) };
    inline GetDBTopologyResponseBodyDBTopology DBTopology() { DARABONBA_PTR_GET(DBTopology_, GetDBTopologyResponseBodyDBTopology) };
    inline GetDBTopologyResponseBody& setDBTopology(const GetDBTopologyResponseBodyDBTopology & DBTopology) { DARABONBA_PTR_SET_VALUE(DBTopology_, DBTopology) };
    inline GetDBTopologyResponseBody& setDBTopology(GetDBTopologyResponseBodyDBTopology && DBTopology) { DARABONBA_PTR_SET_RVALUE(DBTopology_, DBTopology) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDBTopologyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDBTopologyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDBTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDBTopologyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The topology of the data table.
    std::shared_ptr<GetDBTopologyResponseBodyDBTopology> DBTopology_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
