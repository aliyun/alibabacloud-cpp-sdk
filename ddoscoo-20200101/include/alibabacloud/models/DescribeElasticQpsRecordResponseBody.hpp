// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICQPSRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticQpsRecordResponseBodyElasticQpsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeElasticQpsRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticQpsRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticQpsList, elasticQpsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticQpsRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticQpsList, elasticQpsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticQpsRecordResponseBody() = default ;
    DescribeElasticQpsRecordResponseBody(const DescribeElasticQpsRecordResponseBody &) = default ;
    DescribeElasticQpsRecordResponseBody(DescribeElasticQpsRecordResponseBody &&) = default ;
    DescribeElasticQpsRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticQpsRecordResponseBody() = default ;
    DescribeElasticQpsRecordResponseBody& operator=(const DescribeElasticQpsRecordResponseBody &) = default ;
    DescribeElasticQpsRecordResponseBody& operator=(DescribeElasticQpsRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticQpsList_ != nullptr
        && this->requestId_ != nullptr; };
    // elasticQpsList Field Functions 
    bool hasElasticQpsList() const { return this->elasticQpsList_ != nullptr;};
    void deleteElasticQpsList() { this->elasticQpsList_ = nullptr;};
    inline const vector<DescribeElasticQpsRecordResponseBodyElasticQpsList> & elasticQpsList() const { DARABONBA_PTR_GET_CONST(elasticQpsList_, vector<DescribeElasticQpsRecordResponseBodyElasticQpsList>) };
    inline vector<DescribeElasticQpsRecordResponseBodyElasticQpsList> elasticQpsList() { DARABONBA_PTR_GET(elasticQpsList_, vector<DescribeElasticQpsRecordResponseBodyElasticQpsList>) };
    inline DescribeElasticQpsRecordResponseBody& setElasticQpsList(const vector<DescribeElasticQpsRecordResponseBodyElasticQpsList> & elasticQpsList) { DARABONBA_PTR_SET_VALUE(elasticQpsList_, elasticQpsList) };
    inline DescribeElasticQpsRecordResponseBody& setElasticQpsList(vector<DescribeElasticQpsRecordResponseBodyElasticQpsList> && elasticQpsList) { DARABONBA_PTR_SET_RVALUE(elasticQpsList_, elasticQpsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticQpsRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The QPS information about the instance.
    std::shared_ptr<vector<DescribeElasticQpsRecordResponseBodyElasticQpsList>> elasticQpsList_ = nullptr;
    // The request ID, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
