// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBMINIENGINEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBMiniEngineVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBRevisionVersionList, DBRevisionVersionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBMiniEngineVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBRevisionVersionList, DBRevisionVersionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    DescribeDBMiniEngineVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBMiniEngineVersionsResponseBody() = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(const DescribeDBMiniEngineVersionsResponseBody &) = default ;
    DescribeDBMiniEngineVersionsResponseBody& operator=(DescribeDBMiniEngineVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBRevisionVersionList_ == nullptr
        && return this->requestId_ == nullptr; };
    // DBRevisionVersionList Field Functions 
    bool hasDBRevisionVersionList() const { return this->DBRevisionVersionList_ != nullptr;};
    void deleteDBRevisionVersionList() { this->DBRevisionVersionList_ = nullptr;};
    inline const vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList> & DBRevisionVersionList() const { DARABONBA_PTR_GET_CONST(DBRevisionVersionList_, vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList>) };
    inline vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList> DBRevisionVersionList() { DARABONBA_PTR_GET(DBRevisionVersionList_, vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList>) };
    inline DescribeDBMiniEngineVersionsResponseBody& setDBRevisionVersionList(const vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList> & DBRevisionVersionList) { DARABONBA_PTR_SET_VALUE(DBRevisionVersionList_, DBRevisionVersionList) };
    inline DescribeDBMiniEngineVersionsResponseBody& setDBRevisionVersionList(vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList> && DBRevisionVersionList) { DARABONBA_PTR_SET_RVALUE(DBRevisionVersionList_, DBRevisionVersionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBMiniEngineVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDBMiniEngineVersionsResponseBodyDBRevisionVersionList>> DBRevisionVersionList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
