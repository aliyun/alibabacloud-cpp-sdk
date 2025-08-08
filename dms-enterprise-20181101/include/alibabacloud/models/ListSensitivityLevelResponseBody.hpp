// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVITYLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVITYLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitivityLevelResponseBodySensitivityLevelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitivityLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitivityLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitivityLevelList, sensitivityLevelList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitivityLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitivityLevelList, sensitivityLevelList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSensitivityLevelResponseBody() = default ;
    ListSensitivityLevelResponseBody(const ListSensitivityLevelResponseBody &) = default ;
    ListSensitivityLevelResponseBody(ListSensitivityLevelResponseBody &&) = default ;
    ListSensitivityLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitivityLevelResponseBody() = default ;
    ListSensitivityLevelResponseBody& operator=(const ListSensitivityLevelResponseBody &) = default ;
    ListSensitivityLevelResponseBody& operator=(ListSensitivityLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->sensitivityLevelList_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSensitivityLevelResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSensitivityLevelResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSensitivityLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitivityLevelList Field Functions 
    bool hasSensitivityLevelList() const { return this->sensitivityLevelList_ != nullptr;};
    void deleteSensitivityLevelList() { this->sensitivityLevelList_ = nullptr;};
    inline const vector<ListSensitivityLevelResponseBodySensitivityLevelList> & sensitivityLevelList() const { DARABONBA_PTR_GET_CONST(sensitivityLevelList_, vector<ListSensitivityLevelResponseBodySensitivityLevelList>) };
    inline vector<ListSensitivityLevelResponseBodySensitivityLevelList> sensitivityLevelList() { DARABONBA_PTR_GET(sensitivityLevelList_, vector<ListSensitivityLevelResponseBodySensitivityLevelList>) };
    inline ListSensitivityLevelResponseBody& setSensitivityLevelList(const vector<ListSensitivityLevelResponseBodySensitivityLevelList> & sensitivityLevelList) { DARABONBA_PTR_SET_VALUE(sensitivityLevelList_, sensitivityLevelList) };
    inline ListSensitivityLevelResponseBody& setSensitivityLevelList(vector<ListSensitivityLevelResponseBodySensitivityLevelList> && sensitivityLevelList) { DARABONBA_PTR_SET_RVALUE(sensitivityLevelList_, sensitivityLevelList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSensitivityLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sensitivity levels.
    std::shared_ptr<vector<ListSensitivityLevelResponseBodySensitivityLevelList>> sensitivityLevelList_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
