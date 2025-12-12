// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTATUSSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSTATUSSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterStatusSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterStatusSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusSet, statusSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterStatusSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusSet, statusSet_);
    };
    DescribeDBClusterStatusSetResponseBody() = default ;
    DescribeDBClusterStatusSetResponseBody(const DescribeDBClusterStatusSetResponseBody &) = default ;
    DescribeDBClusterStatusSetResponseBody(DescribeDBClusterStatusSetResponseBody &&) = default ;
    DescribeDBClusterStatusSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterStatusSetResponseBody() = default ;
    DescribeDBClusterStatusSetResponseBody& operator=(const DescribeDBClusterStatusSetResponseBody &) = default ;
    DescribeDBClusterStatusSetResponseBody& operator=(DescribeDBClusterStatusSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->statusSet_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterStatusSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusSet Field Functions 
    bool hasStatusSet() const { return this->statusSet_ != nullptr;};
    void deleteStatusSet() { this->statusSet_ = nullptr;};
    inline const vector<string> & statusSet() const { DARABONBA_PTR_GET_CONST(statusSet_, vector<string>) };
    inline vector<string> statusSet() { DARABONBA_PTR_GET(statusSet_, vector<string>) };
    inline DescribeDBClusterStatusSetResponseBody& setStatusSet(const vector<string> & statusSet) { DARABONBA_PTR_SET_VALUE(statusSet_, statusSet) };
    inline DescribeDBClusterStatusSetResponseBody& setStatusSet(vector<string> && statusSet) { DARABONBA_PTR_SET_RVALUE(statusSet_, statusSet) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> statusSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
