// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ColumnMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeTableResponseBody() = default ;
    DescribeTableResponseBody(const DescribeTableResponseBody &) = default ;
    DescribeTableResponseBody(DescribeTableResponseBody &&) = default ;
    DescribeTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableResponseBody() = default ;
    DescribeTableResponseBody& operator=(const DescribeTableResponseBody &) = default ;
    DescribeTableResponseBody& operator=(DescribeTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ColumnList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      };
      ColumnList() = default ;
      ColumnList(const ColumnList &) = default ;
      ColumnList(ColumnList &&) = default ;
      ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnList() = default ;
      ColumnList& operator=(const ColumnList &) = default ;
      ColumnList& operator=(ColumnList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columnList_ == nullptr; };
      // columnList Field Functions 
      bool hasColumnList() const { return this->columnList_ != nullptr;};
      void deleteColumnList() { this->columnList_ = nullptr;};
      inline const vector<ColumnMetadata> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<ColumnMetadata>) };
      inline vector<ColumnMetadata> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<ColumnMetadata>) };
      inline ColumnList& setColumnList(const vector<ColumnMetadata> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
      inline ColumnList& setColumnList(vector<ColumnMetadata> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    protected:
      shared_ptr<vector<ColumnMetadata>> columnList_ {};
    };

    virtual bool empty() const override { return this->columnList_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const DescribeTableResponseBody::ColumnList & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, DescribeTableResponseBody::ColumnList) };
    inline DescribeTableResponseBody::ColumnList getColumnList() { DARABONBA_PTR_GET(columnList_, DescribeTableResponseBody::ColumnList) };
    inline DescribeTableResponseBody& setColumnList(const DescribeTableResponseBody::ColumnList & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline DescribeTableResponseBody& setColumnList(DescribeTableResponseBody::ColumnList && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTableResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTableResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The columns of the table.
    shared_ptr<DescribeTableResponseBody::ColumnList> columnList_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the operation. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
