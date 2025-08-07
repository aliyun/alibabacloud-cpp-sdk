// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLINKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLINKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBLinksResponseBodyDBLinkInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLinksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLinksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBLinkInfos, DBLinkInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLinksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBLinkInfos, DBLinkInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBLinksResponseBody() = default ;
    DescribeDBLinksResponseBody(const DescribeDBLinksResponseBody &) = default ;
    DescribeDBLinksResponseBody(DescribeDBLinksResponseBody &&) = default ;
    DescribeDBLinksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLinksResponseBody() = default ;
    DescribeDBLinksResponseBody& operator=(const DescribeDBLinksResponseBody &) = default ;
    DescribeDBLinksResponseBody& operator=(DescribeDBLinksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceName_ != nullptr
        && this->DBLinkInfos_ != nullptr && this->requestId_ != nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBLinksResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBLinkInfos Field Functions 
    bool hasDBLinkInfos() const { return this->DBLinkInfos_ != nullptr;};
    void deleteDBLinkInfos() { this->DBLinkInfos_ = nullptr;};
    inline const vector<DescribeDBLinksResponseBodyDBLinkInfos> & DBLinkInfos() const { DARABONBA_PTR_GET_CONST(DBLinkInfos_, vector<DescribeDBLinksResponseBodyDBLinkInfos>) };
    inline vector<DescribeDBLinksResponseBodyDBLinkInfos> DBLinkInfos() { DARABONBA_PTR_GET(DBLinkInfos_, vector<DescribeDBLinksResponseBodyDBLinkInfos>) };
    inline DescribeDBLinksResponseBody& setDBLinkInfos(const vector<DescribeDBLinksResponseBodyDBLinkInfos> & DBLinkInfos) { DARABONBA_PTR_SET_VALUE(DBLinkInfos_, DBLinkInfos) };
    inline DescribeDBLinksResponseBody& setDBLinkInfos(vector<DescribeDBLinksResponseBodyDBLinkInfos> && DBLinkInfos) { DARABONBA_PTR_SET_RVALUE(DBLinkInfos_, DBLinkInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBLinksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // Details about the database links.
    std::shared_ptr<vector<DescribeDBLinksResponseBodyDBLinkInfos>> DBLinkInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
