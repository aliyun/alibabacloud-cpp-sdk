// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAdbMySqlTableMetaResponseBodyTableMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlTableMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlTableMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableMeta, tableMeta_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlTableMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableMeta, tableMeta_);
    };
    DescribeAdbMySqlTableMetaResponseBody() = default ;
    DescribeAdbMySqlTableMetaResponseBody(const DescribeAdbMySqlTableMetaResponseBody &) = default ;
    DescribeAdbMySqlTableMetaResponseBody(DescribeAdbMySqlTableMetaResponseBody &&) = default ;
    DescribeAdbMySqlTableMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlTableMetaResponseBody() = default ;
    DescribeAdbMySqlTableMetaResponseBody& operator=(const DescribeAdbMySqlTableMetaResponseBody &) = default ;
    DescribeAdbMySqlTableMetaResponseBody& operator=(DescribeAdbMySqlTableMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tableMeta_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlTableMetaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlTableMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlTableMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableMeta Field Functions 
    bool hasTableMeta() const { return this->tableMeta_ != nullptr;};
    void deleteTableMeta() { this->tableMeta_ = nullptr;};
    inline const DescribeAdbMySqlTableMetaResponseBodyTableMeta & tableMeta() const { DARABONBA_PTR_GET_CONST(tableMeta_, DescribeAdbMySqlTableMetaResponseBodyTableMeta) };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta tableMeta() { DARABONBA_PTR_GET(tableMeta_, DescribeAdbMySqlTableMetaResponseBodyTableMeta) };
    inline DescribeAdbMySqlTableMetaResponseBody& setTableMeta(const DescribeAdbMySqlTableMetaResponseBodyTableMeta & tableMeta) { DARABONBA_PTR_SET_VALUE(tableMeta_, tableMeta) };
    inline DescribeAdbMySqlTableMetaResponseBody& setTableMeta(DescribeAdbMySqlTableMetaResponseBodyTableMeta && tableMeta) { DARABONBA_PTR_SET_RVALUE(tableMeta_, tableMeta) };


  protected:
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // The queried table metadata.
    std::shared_ptr<DescribeAdbMySqlTableMetaResponseBodyTableMeta> tableMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
