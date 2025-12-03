// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICECONFIGMOCKHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICECONFIGMOCKHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyServiceConfigMockHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyServiceConfigMockHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(MockHeader, mockHeader_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyServiceConfigMockHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(MockHeader, mockHeader_);
    };
    DescribeApiHistoryResponseBodyServiceConfigMockHeaders() = default ;
    DescribeApiHistoryResponseBodyServiceConfigMockHeaders(const DescribeApiHistoryResponseBodyServiceConfigMockHeaders &) = default ;
    DescribeApiHistoryResponseBodyServiceConfigMockHeaders(DescribeApiHistoryResponseBodyServiceConfigMockHeaders &&) = default ;
    DescribeApiHistoryResponseBodyServiceConfigMockHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyServiceConfigMockHeaders() = default ;
    DescribeApiHistoryResponseBodyServiceConfigMockHeaders& operator=(const DescribeApiHistoryResponseBodyServiceConfigMockHeaders &) = default ;
    DescribeApiHistoryResponseBodyServiceConfigMockHeaders& operator=(DescribeApiHistoryResponseBodyServiceConfigMockHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mockHeader_ == nullptr; };
    // mockHeader Field Functions 
    bool hasMockHeader() const { return this->mockHeader_ != nullptr;};
    void deleteMockHeader() { this->mockHeader_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader> & mockHeader() const { DARABONBA_PTR_GET_CONST(mockHeader_, vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader>) };
    inline vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader> mockHeader() { DARABONBA_PTR_GET(mockHeader_, vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader>) };
    inline DescribeApiHistoryResponseBodyServiceConfigMockHeaders& setMockHeader(const vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader> & mockHeader) { DARABONBA_PTR_SET_VALUE(mockHeader_, mockHeader) };
    inline DescribeApiHistoryResponseBodyServiceConfigMockHeaders& setMockHeader(vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader> && mockHeader) { DARABONBA_PTR_SET_RVALUE(mockHeader_, mockHeader) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyServiceConfigMockHeadersMockHeader>> mockHeader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
