// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHABOLISHAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHABOLISHAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchAbolishApisRequestApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class BatchAbolishApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAbolishApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAbolishApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    BatchAbolishApisRequest() = default ;
    BatchAbolishApisRequest(const BatchAbolishApisRequest &) = default ;
    BatchAbolishApisRequest(BatchAbolishApisRequest &&) = default ;
    BatchAbolishApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAbolishApisRequest() = default ;
    BatchAbolishApisRequest& operator=(const BatchAbolishApisRequest &) = default ;
    BatchAbolishApisRequest& operator=(BatchAbolishApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->securityToken_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const vector<BatchAbolishApisRequestApi> & api() const { DARABONBA_PTR_GET_CONST(api_, vector<BatchAbolishApisRequestApi>) };
    inline vector<BatchAbolishApisRequestApi> api() { DARABONBA_PTR_GET(api_, vector<BatchAbolishApisRequestApi>) };
    inline BatchAbolishApisRequest& setApi(const vector<BatchAbolishApisRequestApi> & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline BatchAbolishApisRequest& setApi(vector<BatchAbolishApisRequestApi> && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BatchAbolishApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The APIs that you want to operate.
    // 
    // This parameter is required.
    std::shared_ptr<vector<BatchAbolishApisRequestApi>> api_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
