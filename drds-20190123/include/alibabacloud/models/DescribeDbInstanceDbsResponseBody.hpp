// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDbInstanceDbsResponseBodyDatabases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDbInstanceDbsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstanceDbsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstanceDbsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDbInstanceDbsResponseBody() = default ;
    DescribeDbInstanceDbsResponseBody(const DescribeDbInstanceDbsResponseBody &) = default ;
    DescribeDbInstanceDbsResponseBody(DescribeDbInstanceDbsResponseBody &&) = default ;
    DescribeDbInstanceDbsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstanceDbsResponseBody() = default ;
    DescribeDbInstanceDbsResponseBody& operator=(const DescribeDbInstanceDbsResponseBody &) = default ;
    DescribeDbInstanceDbsResponseBody& operator=(DescribeDbInstanceDbsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databases_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const DescribeDbInstanceDbsResponseBodyDatabases & databases() const { DARABONBA_PTR_GET_CONST(databases_, DescribeDbInstanceDbsResponseBodyDatabases) };
    inline DescribeDbInstanceDbsResponseBodyDatabases databases() { DARABONBA_PTR_GET(databases_, DescribeDbInstanceDbsResponseBodyDatabases) };
    inline DescribeDbInstanceDbsResponseBody& setDatabases(const DescribeDbInstanceDbsResponseBodyDatabases & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline DescribeDbInstanceDbsResponseBody& setDatabases(DescribeDbInstanceDbsResponseBodyDatabases && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDbInstanceDbsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDbInstanceDbsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeDbInstanceDbsResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Indicates the information about the storage-layer databases.
    std::shared_ptr<DescribeDbInstanceDbsResponseBodyDatabases> databases_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // Indicates the total number of storage-layer databases.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
