// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTANDARDGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTANDARDGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStandardGroupsResponseBodyStandardGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListStandardGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStandardGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandardGroupList, standardGroupList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListStandardGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandardGroupList, standardGroupList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListStandardGroupsResponseBody() = default ;
    ListStandardGroupsResponseBody(const ListStandardGroupsResponseBody &) = default ;
    ListStandardGroupsResponseBody(ListStandardGroupsResponseBody &&) = default ;
    ListStandardGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStandardGroupsResponseBody() = default ;
    ListStandardGroupsResponseBody& operator=(const ListStandardGroupsResponseBody &) = default ;
    ListStandardGroupsResponseBody& operator=(ListStandardGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->standardGroupList_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListStandardGroupsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListStandardGroupsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStandardGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standardGroupList Field Functions 
    bool hasStandardGroupList() const { return this->standardGroupList_ != nullptr;};
    void deleteStandardGroupList() { this->standardGroupList_ = nullptr;};
    inline const vector<ListStandardGroupsResponseBodyStandardGroupList> & standardGroupList() const { DARABONBA_PTR_GET_CONST(standardGroupList_, vector<ListStandardGroupsResponseBodyStandardGroupList>) };
    inline vector<ListStandardGroupsResponseBodyStandardGroupList> standardGroupList() { DARABONBA_PTR_GET(standardGroupList_, vector<ListStandardGroupsResponseBodyStandardGroupList>) };
    inline ListStandardGroupsResponseBody& setStandardGroupList(const vector<ListStandardGroupsResponseBodyStandardGroupList> & standardGroupList) { DARABONBA_PTR_SET_VALUE(standardGroupList_, standardGroupList) };
    inline ListStandardGroupsResponseBody& setStandardGroupList(vector<ListStandardGroupsResponseBodyStandardGroupList> && standardGroupList) { DARABONBA_PTR_SET_RVALUE(standardGroupList_, standardGroupList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListStandardGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security rule sets returned.
    std::shared_ptr<vector<ListStandardGroupsResponseBodyStandardGroupList>> standardGroupList_ = nullptr;
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
