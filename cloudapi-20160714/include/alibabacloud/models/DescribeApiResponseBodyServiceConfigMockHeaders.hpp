// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGMOCKHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGMOCKHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiResponseBodyServiceConfigMockHeadersMockHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceConfigMockHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceConfigMockHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(MockHeader, mockHeader_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceConfigMockHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(MockHeader, mockHeader_);
    };
    DescribeApiResponseBodyServiceConfigMockHeaders() = default ;
    DescribeApiResponseBodyServiceConfigMockHeaders(const DescribeApiResponseBodyServiceConfigMockHeaders &) = default ;
    DescribeApiResponseBodyServiceConfigMockHeaders(DescribeApiResponseBodyServiceConfigMockHeaders &&) = default ;
    DescribeApiResponseBodyServiceConfigMockHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceConfigMockHeaders() = default ;
    DescribeApiResponseBodyServiceConfigMockHeaders& operator=(const DescribeApiResponseBodyServiceConfigMockHeaders &) = default ;
    DescribeApiResponseBodyServiceConfigMockHeaders& operator=(DescribeApiResponseBodyServiceConfigMockHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mockHeader_ == nullptr; };
    // mockHeader Field Functions 
    bool hasMockHeader() const { return this->mockHeader_ != nullptr;};
    void deleteMockHeader() { this->mockHeader_ = nullptr;};
    inline const vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader> & mockHeader() const { DARABONBA_PTR_GET_CONST(mockHeader_, vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader>) };
    inline vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader> mockHeader() { DARABONBA_PTR_GET(mockHeader_, vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader>) };
    inline DescribeApiResponseBodyServiceConfigMockHeaders& setMockHeader(const vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader> & mockHeader) { DARABONBA_PTR_SET_VALUE(mockHeader_, mockHeader) };
    inline DescribeApiResponseBodyServiceConfigMockHeaders& setMockHeader(vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader> && mockHeader) { DARABONBA_PTR_SET_RVALUE(mockHeader_, mockHeader) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiResponseBodyServiceConfigMockHeadersMockHeader>> mockHeader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
