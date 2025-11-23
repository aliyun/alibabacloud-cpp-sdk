// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTableRouteConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTableRouteConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LogicTableRouteConfigList, logicTableRouteConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTableRouteConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LogicTableRouteConfigList, logicTableRouteConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLogicTableRouteConfigResponseBody() = default ;
    ListLogicTableRouteConfigResponseBody(const ListLogicTableRouteConfigResponseBody &) = default ;
    ListLogicTableRouteConfigResponseBody(ListLogicTableRouteConfigResponseBody &&) = default ;
    ListLogicTableRouteConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTableRouteConfigResponseBody() = default ;
    ListLogicTableRouteConfigResponseBody& operator=(const ListLogicTableRouteConfigResponseBody &) = default ;
    ListLogicTableRouteConfigResponseBody& operator=(ListLogicTableRouteConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->logicTableRouteConfigList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLogicTableRouteConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLogicTableRouteConfigResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logicTableRouteConfigList Field Functions 
    bool hasLogicTableRouteConfigList() const { return this->logicTableRouteConfigList_ != nullptr;};
    void deleteLogicTableRouteConfigList() { this->logicTableRouteConfigList_ = nullptr;};
    inline const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList & logicTableRouteConfigList() const { DARABONBA_PTR_GET_CONST(logicTableRouteConfigList_, ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList) };
    inline ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList logicTableRouteConfigList() { DARABONBA_PTR_GET(logicTableRouteConfigList_, ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList) };
    inline ListLogicTableRouteConfigResponseBody& setLogicTableRouteConfigList(const ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList & logicTableRouteConfigList) { DARABONBA_PTR_SET_VALUE(logicTableRouteConfigList_, logicTableRouteConfigList) };
    inline ListLogicTableRouteConfigResponseBody& setLogicTableRouteConfigList(ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList && logicTableRouteConfigList) { DARABONBA_PTR_SET_RVALUE(logicTableRouteConfigList_, logicTableRouteConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogicTableRouteConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLogicTableRouteConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The routing algorithms.
    std::shared_ptr<ListLogicTableRouteConfigResponseBodyLogicTableRouteConfigList> logicTableRouteConfigList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
