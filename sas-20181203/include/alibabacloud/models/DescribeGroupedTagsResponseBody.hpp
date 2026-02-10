// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class GroupedFileds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedFileds& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedFileds& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      };
      GroupedFileds() = default ;
      GroupedFileds(const GroupedFileds &) = default ;
      GroupedFileds(GroupedFileds &&) = default ;
      GroupedFileds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedFileds() = default ;
      GroupedFileds& operator=(const GroupedFileds &) = default ;
      GroupedFileds& operator=(GroupedFileds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr && this->tagId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline GroupedFileds& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GroupedFileds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline int32_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0) };
      inline GroupedFileds& setTagId(int32_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // The number of assets to which the tag is added.
      shared_ptr<string> count_ {};
      // The name of the tag.
      shared_ptr<string> name_ {};
      // The ID of the tag.
      shared_ptr<int32_t> tagId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->groupedFileds_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGroupedTagsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // groupedFileds Field Functions 
    bool hasGroupedFileds() const { return this->groupedFileds_ != nullptr;};
    void deleteGroupedFileds() { this->groupedFileds_ = nullptr;};
    inline const vector<DescribeGroupedTagsResponseBody::GroupedFileds> & getGroupedFileds() const { DARABONBA_PTR_GET_CONST(groupedFileds_, vector<DescribeGroupedTagsResponseBody::GroupedFileds>) };
    inline vector<DescribeGroupedTagsResponseBody::GroupedFileds> getGroupedFileds() { DARABONBA_PTR_GET(groupedFileds_, vector<DescribeGroupedTagsResponseBody::GroupedFileds>) };
    inline DescribeGroupedTagsResponseBody& setGroupedFileds(const vector<DescribeGroupedTagsResponseBody::GroupedFileds> & groupedFileds) { DARABONBA_PTR_SET_VALUE(groupedFileds_, groupedFileds) };
    inline DescribeGroupedTagsResponseBody& setGroupedFileds(vector<DescribeGroupedTagsResponseBody::GroupedFileds> && groupedFileds) { DARABONBA_PTR_SET_RVALUE(groupedFileds_, groupedFileds) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeGroupedTagsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGroupedTagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // This parameter is deprecated.
    shared_ptr<int32_t> count_ {};
    // An array that consists of the statistics of the asset tags.
    shared_ptr<vector<DescribeGroupedTagsResponseBody::GroupedFileds>> groupedFileds_ {};
    // The HTTP status code of the request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
