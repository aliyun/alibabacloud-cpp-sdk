// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterAccessWhiteList, DBClusterAccessWhiteList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterAccessWhiteList, DBClusterAccessWhiteList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterAccessWhiteListResponseBody() = default ;
    DescribeDBClusterAccessWhiteListResponseBody(const DescribeDBClusterAccessWhiteListResponseBody &) = default ;
    DescribeDBClusterAccessWhiteListResponseBody(DescribeDBClusterAccessWhiteListResponseBody &&) = default ;
    DescribeDBClusterAccessWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhiteListResponseBody() = default ;
    DescribeDBClusterAccessWhiteListResponseBody& operator=(const DescribeDBClusterAccessWhiteListResponseBody &) = default ;
    DescribeDBClusterAccessWhiteListResponseBody& operator=(DescribeDBClusterAccessWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterAccessWhiteList_ == nullptr
        && return this->requestId_ == nullptr; };
    // DBClusterAccessWhiteList Field Functions 
    bool hasDBClusterAccessWhiteList() const { return this->DBClusterAccessWhiteList_ != nullptr;};
    void deleteDBClusterAccessWhiteList() { this->DBClusterAccessWhiteList_ = nullptr;};
    inline const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList & DBClusterAccessWhiteList() const { DARABONBA_PTR_GET_CONST(DBClusterAccessWhiteList_, DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList) };
    inline DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList DBClusterAccessWhiteList() { DARABONBA_PTR_GET(DBClusterAccessWhiteList_, DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList) };
    inline DescribeDBClusterAccessWhiteListResponseBody& setDBClusterAccessWhiteList(const DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList & DBClusterAccessWhiteList) { DARABONBA_PTR_SET_VALUE(DBClusterAccessWhiteList_, DBClusterAccessWhiteList) };
    inline DescribeDBClusterAccessWhiteListResponseBody& setDBClusterAccessWhiteList(DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList && DBClusterAccessWhiteList) { DARABONBA_PTR_SET_RVALUE(DBClusterAccessWhiteList_, DBClusterAccessWhiteList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterAccessWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the IP address whitelist.
    std::shared_ptr<DescribeDBClusterAccessWhiteListResponseBodyDBClusterAccessWhiteList> DBClusterAccessWhiteList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
