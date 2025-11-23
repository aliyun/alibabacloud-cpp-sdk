// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDESENSITIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDesensitizationRuleResponseBodyDesensitizationRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDesensitizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDesensitizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DesensitizationRuleList, desensitizationRuleList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDesensitizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DesensitizationRuleList, desensitizationRuleList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDesensitizationRuleResponseBody() = default ;
    ListDesensitizationRuleResponseBody(const ListDesensitizationRuleResponseBody &) = default ;
    ListDesensitizationRuleResponseBody(ListDesensitizationRuleResponseBody &&) = default ;
    ListDesensitizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDesensitizationRuleResponseBody() = default ;
    ListDesensitizationRuleResponseBody& operator=(const ListDesensitizationRuleResponseBody &) = default ;
    ListDesensitizationRuleResponseBody& operator=(ListDesensitizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desensitizationRuleList_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // desensitizationRuleList Field Functions 
    bool hasDesensitizationRuleList() const { return this->desensitizationRuleList_ != nullptr;};
    void deleteDesensitizationRuleList() { this->desensitizationRuleList_ = nullptr;};
    inline const vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList> & desensitizationRuleList() const { DARABONBA_PTR_GET_CONST(desensitizationRuleList_, vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList>) };
    inline vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList> desensitizationRuleList() { DARABONBA_PTR_GET(desensitizationRuleList_, vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList>) };
    inline ListDesensitizationRuleResponseBody& setDesensitizationRuleList(const vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList> & desensitizationRuleList) { DARABONBA_PTR_SET_VALUE(desensitizationRuleList_, desensitizationRuleList) };
    inline ListDesensitizationRuleResponseBody& setDesensitizationRuleList(vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList> && desensitizationRuleList) { DARABONBA_PTR_SET_RVALUE(desensitizationRuleList_, desensitizationRuleList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDesensitizationRuleResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDesensitizationRuleResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDesensitizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDesensitizationRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDesensitizationRuleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of masking rules.
    std::shared_ptr<vector<ListDesensitizationRuleResponseBodyDesensitizationRuleList>> desensitizationRuleList_ = nullptr;
    // The error code returned if the request failed.
    // 
    // This parameter is required.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned. By default, this parameter is not returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
