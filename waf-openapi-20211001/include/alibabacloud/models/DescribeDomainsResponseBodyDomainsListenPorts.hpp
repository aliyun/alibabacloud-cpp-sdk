// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSLISTENPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSLISTENPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsListenPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsListenPorts& obj) { 
      DARABONBA_PTR_TO_JSON(Http, http_);
      DARABONBA_PTR_TO_JSON(Https, https_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsListenPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Http, http_);
      DARABONBA_PTR_FROM_JSON(Https, https_);
    };
    DescribeDomainsResponseBodyDomainsListenPorts() = default ;
    DescribeDomainsResponseBodyDomainsListenPorts(const DescribeDomainsResponseBodyDomainsListenPorts &) = default ;
    DescribeDomainsResponseBodyDomainsListenPorts(DescribeDomainsResponseBodyDomainsListenPorts &&) = default ;
    DescribeDomainsResponseBodyDomainsListenPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsListenPorts() = default ;
    DescribeDomainsResponseBodyDomainsListenPorts& operator=(const DescribeDomainsResponseBodyDomainsListenPorts &) = default ;
    DescribeDomainsResponseBodyDomainsListenPorts& operator=(DescribeDomainsResponseBodyDomainsListenPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->http_ != nullptr
        && this->https_ != nullptr; };
    // http Field Functions 
    bool hasHttp() const { return this->http_ != nullptr;};
    void deleteHttp() { this->http_ = nullptr;};
    inline const vector<int64_t> & http() const { DARABONBA_PTR_GET_CONST(http_, vector<int64_t>) };
    inline vector<int64_t> http() { DARABONBA_PTR_GET(http_, vector<int64_t>) };
    inline DescribeDomainsResponseBodyDomainsListenPorts& setHttp(const vector<int64_t> & http) { DARABONBA_PTR_SET_VALUE(http_, http) };
    inline DescribeDomainsResponseBodyDomainsListenPorts& setHttp(vector<int64_t> && http) { DARABONBA_PTR_SET_RVALUE(http_, http) };


    // https Field Functions 
    bool hasHttps() const { return this->https_ != nullptr;};
    void deleteHttps() { this->https_ = nullptr;};
    inline const vector<int64_t> & https() const { DARABONBA_PTR_GET_CONST(https_, vector<int64_t>) };
    inline vector<int64_t> https() { DARABONBA_PTR_GET(https_, vector<int64_t>) };
    inline DescribeDomainsResponseBodyDomainsListenPorts& setHttps(const vector<int64_t> & https) { DARABONBA_PTR_SET_VALUE(https_, https) };
    inline DescribeDomainsResponseBodyDomainsListenPorts& setHttps(vector<int64_t> && https) { DARABONBA_PTR_SET_RVALUE(https_, https) };


  protected:
    // The HTTP listener ports.
    std::shared_ptr<vector<int64_t>> http_ = nullptr;
    // The HTTPS listener ports.
    std::shared_ptr<vector<int64_t>> https_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
