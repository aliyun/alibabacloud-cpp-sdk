// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataSourceResponseBodyMetaDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaDatas, metaDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaDatas, metaDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataSourceResponseBody() = default ;
    DescribeDataSourceResponseBody(const DescribeDataSourceResponseBody &) = default ;
    DescribeDataSourceResponseBody(DescribeDataSourceResponseBody &&) = default ;
    DescribeDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSourceResponseBody() = default ;
    DescribeDataSourceResponseBody& operator=(const DescribeDataSourceResponseBody &) = default ;
    DescribeDataSourceResponseBody& operator=(DescribeDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaDatas_ == nullptr
        && return this->requestId_ == nullptr; };
    // metaDatas Field Functions 
    bool hasMetaDatas() const { return this->metaDatas_ != nullptr;};
    void deleteMetaDatas() { this->metaDatas_ = nullptr;};
    inline const vector<DescribeDataSourceResponseBodyMetaDatas> & metaDatas() const { DARABONBA_PTR_GET_CONST(metaDatas_, vector<DescribeDataSourceResponseBodyMetaDatas>) };
    inline vector<DescribeDataSourceResponseBodyMetaDatas> metaDatas() { DARABONBA_PTR_GET(metaDatas_, vector<DescribeDataSourceResponseBodyMetaDatas>) };
    inline DescribeDataSourceResponseBody& setMetaDatas(const vector<DescribeDataSourceResponseBodyMetaDatas> & metaDatas) { DARABONBA_PTR_SET_VALUE(metaDatas_, metaDatas) };
    inline DescribeDataSourceResponseBody& setMetaDatas(vector<DescribeDataSourceResponseBodyMetaDatas> && metaDatas) { DARABONBA_PTR_SET_RVALUE(metaDatas_, metaDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the data sources.
    std::shared_ptr<vector<DescribeDataSourceResponseBodyMetaDatas>> metaDatas_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
