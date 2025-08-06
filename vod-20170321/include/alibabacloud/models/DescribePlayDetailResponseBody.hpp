// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayDetailResponseBodyBaseInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaseInfos, baseInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseInfos, baseInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlayDetailResponseBody() = default ;
    DescribePlayDetailResponseBody(const DescribePlayDetailResponseBody &) = default ;
    DescribePlayDetailResponseBody(DescribePlayDetailResponseBody &&) = default ;
    DescribePlayDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayDetailResponseBody() = default ;
    DescribePlayDetailResponseBody& operator=(const DescribePlayDetailResponseBody &) = default ;
    DescribePlayDetailResponseBody& operator=(DescribePlayDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // baseInfos Field Functions 
    bool hasBaseInfos() const { return this->baseInfos_ != nullptr;};
    void deleteBaseInfos() { this->baseInfos_ = nullptr;};
    inline const vector<DescribePlayDetailResponseBodyBaseInfos> & baseInfos() const { DARABONBA_PTR_GET_CONST(baseInfos_, vector<DescribePlayDetailResponseBodyBaseInfos>) };
    inline vector<DescribePlayDetailResponseBodyBaseInfos> baseInfos() { DARABONBA_PTR_GET(baseInfos_, vector<DescribePlayDetailResponseBodyBaseInfos>) };
    inline DescribePlayDetailResponseBody& setBaseInfos(const vector<DescribePlayDetailResponseBodyBaseInfos> & baseInfos) { DARABONBA_PTR_SET_VALUE(baseInfos_, baseInfos) };
    inline DescribePlayDetailResponseBody& setBaseInfos(vector<DescribePlayDetailResponseBodyBaseInfos> && baseInfos) { DARABONBA_PTR_SET_RVALUE(baseInfos_, baseInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribePlayDetailResponseBodyBaseInfos>> baseInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
