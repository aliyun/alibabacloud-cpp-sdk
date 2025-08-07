// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECASSETTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECASSETTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisecAssetTrendResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecAssetTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAssetTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAssetTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecAssetTrendResponseBody() = default ;
    DescribeApisecAssetTrendResponseBody(const DescribeApisecAssetTrendResponseBody &) = default ;
    DescribeApisecAssetTrendResponseBody(DescribeApisecAssetTrendResponseBody &&) = default ;
    DescribeApisecAssetTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAssetTrendResponseBody() = default ;
    DescribeApisecAssetTrendResponseBody& operator=(const DescribeApisecAssetTrendResponseBody &) = default ;
    DescribeApisecAssetTrendResponseBody& operator=(DescribeApisecAssetTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecAssetTrendResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecAssetTrendResponseBodyData>) };
    inline vector<DescribeApisecAssetTrendResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeApisecAssetTrendResponseBodyData>) };
    inline DescribeApisecAssetTrendResponseBody& setData(const vector<DescribeApisecAssetTrendResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecAssetTrendResponseBody& setData(vector<DescribeApisecAssetTrendResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecAssetTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<DescribeApisecAssetTrendResponseBodyData>> data_ = nullptr;
    // Id of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
