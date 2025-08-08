// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableTopologyResponseBodyTableTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableTopology, tableTopology_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableTopology, tableTopology_);
    };
    GetTableTopologyResponseBody() = default ;
    GetTableTopologyResponseBody(const GetTableTopologyResponseBody &) = default ;
    GetTableTopologyResponseBody(GetTableTopologyResponseBody &&) = default ;
    GetTableTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableTopologyResponseBody() = default ;
    GetTableTopologyResponseBody& operator=(const GetTableTopologyResponseBody &) = default ;
    GetTableTopologyResponseBody& operator=(GetTableTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tableTopology_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTableTopologyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTableTopologyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableTopologyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableTopology Field Functions 
    bool hasTableTopology() const { return this->tableTopology_ != nullptr;};
    void deleteTableTopology() { this->tableTopology_ = nullptr;};
    inline const GetTableTopologyResponseBodyTableTopology & tableTopology() const { DARABONBA_PTR_GET_CONST(tableTopology_, GetTableTopologyResponseBodyTableTopology) };
    inline GetTableTopologyResponseBodyTableTopology tableTopology() { DARABONBA_PTR_GET(tableTopology_, GetTableTopologyResponseBodyTableTopology) };
    inline GetTableTopologyResponseBody& setTableTopology(const GetTableTopologyResponseBodyTableTopology & tableTopology) { DARABONBA_PTR_SET_VALUE(tableTopology_, tableTopology) };
    inline GetTableTopologyResponseBody& setTableTopology(GetTableTopologyResponseBodyTableTopology && tableTopology) { DARABONBA_PTR_SET_RVALUE(tableTopology_, tableTopology) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The topology information.
    std::shared_ptr<GetTableTopologyResponseBodyTableTopology> tableTopology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
