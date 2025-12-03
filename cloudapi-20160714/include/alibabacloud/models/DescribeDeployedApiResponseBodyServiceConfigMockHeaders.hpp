// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICECONFIGMOCKHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYSERVICECONFIGMOCKHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyServiceConfigMockHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyServiceConfigMockHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(MockHeader, mockHeader_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyServiceConfigMockHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(MockHeader, mockHeader_);
    };
    DescribeDeployedApiResponseBodyServiceConfigMockHeaders() = default ;
    DescribeDeployedApiResponseBodyServiceConfigMockHeaders(const DescribeDeployedApiResponseBodyServiceConfigMockHeaders &) = default ;
    DescribeDeployedApiResponseBodyServiceConfigMockHeaders(DescribeDeployedApiResponseBodyServiceConfigMockHeaders &&) = default ;
    DescribeDeployedApiResponseBodyServiceConfigMockHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyServiceConfigMockHeaders() = default ;
    DescribeDeployedApiResponseBodyServiceConfigMockHeaders& operator=(const DescribeDeployedApiResponseBodyServiceConfigMockHeaders &) = default ;
    DescribeDeployedApiResponseBodyServiceConfigMockHeaders& operator=(DescribeDeployedApiResponseBodyServiceConfigMockHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mockHeader_ == nullptr; };
    // mockHeader Field Functions 
    bool hasMockHeader() const { return this->mockHeader_ != nullptr;};
    void deleteMockHeader() { this->mockHeader_ = nullptr;};
    inline const vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader> & mockHeader() const { DARABONBA_PTR_GET_CONST(mockHeader_, vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader>) };
    inline vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader> mockHeader() { DARABONBA_PTR_GET(mockHeader_, vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader>) };
    inline DescribeDeployedApiResponseBodyServiceConfigMockHeaders& setMockHeader(const vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader> & mockHeader) { DARABONBA_PTR_SET_VALUE(mockHeader_, mockHeader) };
    inline DescribeDeployedApiResponseBodyServiceConfigMockHeaders& setMockHeader(vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader> && mockHeader) { DARABONBA_PTR_SET_RVALUE(mockHeader_, mockHeader) };


  protected:
    std::shared_ptr<vector<Models::DescribeDeployedApiResponseBodyServiceConfigMockHeadersMockHeader>> mockHeader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
