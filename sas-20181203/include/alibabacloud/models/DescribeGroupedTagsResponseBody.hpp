// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupedTagsResponseBodyGroupedFileds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(GroupedFileds, groupedFileds_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(GroupedFileds, groupedFileds_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGroupedTagsResponseBody() = default ;
    DescribeGroupedTagsResponseBody(const DescribeGroupedTagsResponseBody &) = default ;
    DescribeGroupedTagsResponseBody(DescribeGroupedTagsResponseBody &&) = default ;
    DescribeGroupedTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedTagsResponseBody() = default ;
    DescribeGroupedTagsResponseBody& operator=(const DescribeGroupedTagsResponseBody &) = default ;
    DescribeGroupedTagsResponseBody& operator=(DescribeGroupedTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->groupedFileds_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGroupedTagsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groupedFileds Field Functions 
    bool hasGroupedFileds() const { return this->groupedFileds_ != nullptr;};
    void deleteGroupedFileds() { this->groupedFileds_ = nullptr;};
    inline const vector<DescribeGroupedTagsResponseBodyGroupedFileds> & groupedFileds() const { DARABONBA_PTR_GET_CONST(groupedFileds_, vector<DescribeGroupedTagsResponseBodyGroupedFileds>) };
    inline vector<DescribeGroupedTagsResponseBodyGroupedFileds> groupedFileds() { DARABONBA_PTR_GET(groupedFileds_, vector<DescribeGroupedTagsResponseBodyGroupedFileds>) };
    inline DescribeGroupedTagsResponseBody& setGroupedFileds(const vector<DescribeGroupedTagsResponseBodyGroupedFileds> & groupedFileds) { DARABONBA_PTR_SET_VALUE(groupedFileds_, groupedFileds) };
    inline DescribeGroupedTagsResponseBody& setGroupedFileds(vector<DescribeGroupedTagsResponseBodyGroupedFileds> && groupedFileds) { DARABONBA_PTR_SET_RVALUE(groupedFileds_, groupedFileds) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeGroupedTagsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGroupedTagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<int32_t> count_ = nullptr;
    // An array that consists of the statistics of the asset tags.
    std::shared_ptr<vector<DescribeGroupedTagsResponseBodyGroupedFileds>> groupedFileds_ = nullptr;
    // The HTTP status code of the request.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
