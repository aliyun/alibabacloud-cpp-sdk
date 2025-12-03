// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSPARKRELATEHBASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSPARKRELATEHBASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySparkRelateHBaseResponseBodyClusterList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QuerySparkRelateHBaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySparkRelateHBaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySparkRelateHBaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuerySparkRelateHBaseResponseBody() = default ;
    QuerySparkRelateHBaseResponseBody(const QuerySparkRelateHBaseResponseBody &) = default ;
    QuerySparkRelateHBaseResponseBody(QuerySparkRelateHBaseResponseBody &&) = default ;
    QuerySparkRelateHBaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySparkRelateHBaseResponseBody() = default ;
    QuerySparkRelateHBaseResponseBody& operator=(const QuerySparkRelateHBaseResponseBody &) = default ;
    QuerySparkRelateHBaseResponseBody& operator=(QuerySparkRelateHBaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterList_ == nullptr
        && return this->requestId_ == nullptr; };
    // clusterList Field Functions 
    bool hasClusterList() const { return this->clusterList_ != nullptr;};
    void deleteClusterList() { this->clusterList_ = nullptr;};
    inline const QuerySparkRelateHBaseResponseBodyClusterList & clusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, QuerySparkRelateHBaseResponseBodyClusterList) };
    inline QuerySparkRelateHBaseResponseBodyClusterList clusterList() { DARABONBA_PTR_GET(clusterList_, QuerySparkRelateHBaseResponseBodyClusterList) };
    inline QuerySparkRelateHBaseResponseBody& setClusterList(const QuerySparkRelateHBaseResponseBodyClusterList & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
    inline QuerySparkRelateHBaseResponseBody& setClusterList(QuerySparkRelateHBaseResponseBodyClusterList && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySparkRelateHBaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QuerySparkRelateHBaseResponseBodyClusterList> clusterList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
