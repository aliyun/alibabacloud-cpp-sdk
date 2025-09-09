// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupDbsResponseBodyDbNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbNames, dbNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbNames, dbNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupDbsResponseBody() = default ;
    DescribeBackupDbsResponseBody(const DescribeBackupDbsResponseBody &) = default ;
    DescribeBackupDbsResponseBody(DescribeBackupDbsResponseBody &&) = default ;
    DescribeBackupDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupDbsResponseBody() = default ;
    DescribeBackupDbsResponseBody& operator=(const DescribeBackupDbsResponseBody &) = default ;
    DescribeBackupDbsResponseBody& operator=(DescribeBackupDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbNames_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dbNames Field Functions 
    bool hasDbNames() const { return this->dbNames_ != nullptr;};
    void deleteDbNames() { this->dbNames_ = nullptr;};
    inline const DescribeBackupDbsResponseBodyDbNames & dbNames() const { DARABONBA_PTR_GET_CONST(dbNames_, DescribeBackupDbsResponseBodyDbNames) };
    inline DescribeBackupDbsResponseBodyDbNames dbNames() { DARABONBA_PTR_GET(dbNames_, DescribeBackupDbsResponseBodyDbNames) };
    inline DescribeBackupDbsResponseBody& setDbNames(const DescribeBackupDbsResponseBodyDbNames & dbNames) { DARABONBA_PTR_SET_VALUE(dbNames_, dbNames) };
    inline DescribeBackupDbsResponseBody& setDbNames(DescribeBackupDbsResponseBodyDbNames && dbNames) { DARABONBA_PTR_SET_RVALUE(dbNames_, dbNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupDbsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about a database.
    std::shared_ptr<DescribeBackupDbsResponseBodyDbNames> dbNames_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of request.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
