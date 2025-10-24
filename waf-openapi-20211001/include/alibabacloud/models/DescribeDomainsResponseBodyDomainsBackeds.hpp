// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSBACKEDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSBACKEDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsBackedsHttp.hpp>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsBackedsHttps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsBackeds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsBackeds& obj) { 
      DARABONBA_PTR_TO_JSON(Http, http_);
      DARABONBA_PTR_TO_JSON(Https, https_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsBackeds& obj) { 
      DARABONBA_PTR_FROM_JSON(Http, http_);
      DARABONBA_PTR_FROM_JSON(Https, https_);
    };
    DescribeDomainsResponseBodyDomainsBackeds() = default ;
    DescribeDomainsResponseBodyDomainsBackeds(const DescribeDomainsResponseBodyDomainsBackeds &) = default ;
    DescribeDomainsResponseBodyDomainsBackeds(DescribeDomainsResponseBodyDomainsBackeds &&) = default ;
    DescribeDomainsResponseBodyDomainsBackeds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsBackeds() = default ;
    DescribeDomainsResponseBodyDomainsBackeds& operator=(const DescribeDomainsResponseBodyDomainsBackeds &) = default ;
    DescribeDomainsResponseBodyDomainsBackeds& operator=(DescribeDomainsResponseBodyDomainsBackeds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->http_ == nullptr
        && return this->https_ == nullptr; };
    // http Field Functions 
    bool hasHttp() const { return this->http_ != nullptr;};
    void deleteHttp() { this->http_ = nullptr;};
    inline const vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp> & http() const { DARABONBA_PTR_GET_CONST(http_, vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp>) };
    inline vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp> http() { DARABONBA_PTR_GET(http_, vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp>) };
    inline DescribeDomainsResponseBodyDomainsBackeds& setHttp(const vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp> & http) { DARABONBA_PTR_SET_VALUE(http_, http) };
    inline DescribeDomainsResponseBodyDomainsBackeds& setHttp(vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp> && http) { DARABONBA_PTR_SET_RVALUE(http_, http) };


    // https Field Functions 
    bool hasHttps() const { return this->https_ != nullptr;};
    void deleteHttps() { this->https_ = nullptr;};
    inline const vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps> & https() const { DARABONBA_PTR_GET_CONST(https_, vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps>) };
    inline vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps> https() { DARABONBA_PTR_GET(https_, vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps>) };
    inline DescribeDomainsResponseBodyDomainsBackeds& setHttps(const vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps> & https) { DARABONBA_PTR_SET_VALUE(https_, https) };
    inline DescribeDomainsResponseBodyDomainsBackeds& setHttps(vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps> && https) { DARABONBA_PTR_SET_RVALUE(https_, https) };


  protected:
    // The HTTP addresses of the origin server.
    std::shared_ptr<vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttp>> http_ = nullptr;
    // The HTTPS addresses of the origin server.
    std::shared_ptr<vector<Models::DescribeDomainsResponseBodyDomainsBackedsHttps>> https_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
