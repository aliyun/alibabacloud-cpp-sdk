// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMVINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIMVInfosResponseBodyImvInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeIMVInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMVInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ImvInfos, imvInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMVInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ImvInfos, imvInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIMVInfosResponseBody() = default ;
    DescribeIMVInfosResponseBody(const DescribeIMVInfosResponseBody &) = default ;
    DescribeIMVInfosResponseBody(DescribeIMVInfosResponseBody &&) = default ;
    DescribeIMVInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMVInfosResponseBody() = default ;
    DescribeIMVInfosResponseBody& operator=(const DescribeIMVInfosResponseBody &) = default ;
    DescribeIMVInfosResponseBody& operator=(DescribeIMVInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->imvInfos_ == nullptr && return this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeIMVInfosResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // imvInfos Field Functions 
    bool hasImvInfos() const { return this->imvInfos_ != nullptr;};
    void deleteImvInfos() { this->imvInfos_ = nullptr;};
    inline const vector<DescribeIMVInfosResponseBodyImvInfos> & imvInfos() const { DARABONBA_PTR_GET_CONST(imvInfos_, vector<DescribeIMVInfosResponseBodyImvInfos>) };
    inline vector<DescribeIMVInfosResponseBodyImvInfos> imvInfos() { DARABONBA_PTR_GET(imvInfos_, vector<DescribeIMVInfosResponseBodyImvInfos>) };
    inline DescribeIMVInfosResponseBody& setImvInfos(const vector<DescribeIMVInfosResponseBodyImvInfos> & imvInfos) { DARABONBA_PTR_SET_VALUE(imvInfos_, imvInfos) };
    inline DescribeIMVInfosResponseBody& setImvInfos(vector<DescribeIMVInfosResponseBodyImvInfos> && imvInfos) { DARABONBA_PTR_SET_RVALUE(imvInfos_, imvInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIMVInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The queried materialized views.
    std::shared_ptr<vector<DescribeIMVInfosResponseBodyImvInfos>> imvInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
