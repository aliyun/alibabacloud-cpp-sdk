// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableDBTopologyResponseBodyDBTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDBTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDBTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTopology, DBTopology_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableDBTopologyResponseBody() = default ;
    GetTableDBTopologyResponseBody(const GetTableDBTopologyResponseBody &) = default ;
    GetTableDBTopologyResponseBody(GetTableDBTopologyResponseBody &&) = default ;
    GetTableDBTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDBTopologyResponseBody() = default ;
    GetTableDBTopologyResponseBody& operator=(const GetTableDBTopologyResponseBody &) = default ;
    GetTableDBTopologyResponseBody& operator=(GetTableDBTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBTopology_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // DBTopology Field Functions 
    bool hasDBTopology() const { return this->DBTopology_ != nullptr;};
    void deleteDBTopology() { this->DBTopology_ = nullptr;};
    inline const GetTableDBTopologyResponseBodyDBTopology & DBTopology() const { DARABONBA_PTR_GET_CONST(DBTopology_, GetTableDBTopologyResponseBodyDBTopology) };
    inline GetTableDBTopologyResponseBodyDBTopology DBTopology() { DARABONBA_PTR_GET(DBTopology_, GetTableDBTopologyResponseBodyDBTopology) };
    inline GetTableDBTopologyResponseBody& setDBTopology(const GetTableDBTopologyResponseBodyDBTopology & DBTopology) { DARABONBA_PTR_SET_VALUE(DBTopology_, DBTopology) };
    inline GetTableDBTopologyResponseBody& setDBTopology(GetTableDBTopologyResponseBodyDBTopology && DBTopology) { DARABONBA_PTR_SET_RVALUE(DBTopology_, DBTopology) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTableDBTopologyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTableDBTopologyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableDBTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableDBTopologyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The topology of the data table.
    std::shared_ptr<GetTableDBTopologyResponseBodyDBTopology> DBTopology_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
