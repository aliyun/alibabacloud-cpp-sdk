// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODYAUTHORIZEDAPIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODYAUTHORIZEDAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedApisResponseBodyAuthorizedApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedApisResponseBodyAuthorizedApis& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApi, authorizedApi_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedApisResponseBodyAuthorizedApis& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApi, authorizedApi_);
    };
    DescribeAuthorizedApisResponseBodyAuthorizedApis() = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApis(const DescribeAuthorizedApisResponseBodyAuthorizedApis &) = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApis(DescribeAuthorizedApisResponseBodyAuthorizedApis &&) = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedApisResponseBodyAuthorizedApis() = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApis& operator=(const DescribeAuthorizedApisResponseBodyAuthorizedApis &) = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApis& operator=(DescribeAuthorizedApisResponseBodyAuthorizedApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedApi_ == nullptr; };
    // authorizedApi Field Functions 
    bool hasAuthorizedApi() const { return this->authorizedApi_ != nullptr;};
    void deleteAuthorizedApi() { this->authorizedApi_ = nullptr;};
    inline const vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi> & authorizedApi() const { DARABONBA_PTR_GET_CONST(authorizedApi_, vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi>) };
    inline vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi> authorizedApi() { DARABONBA_PTR_GET(authorizedApi_, vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi>) };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApis& setAuthorizedApi(const vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi> & authorizedApi) { DARABONBA_PTR_SET_VALUE(authorizedApi_, authorizedApi) };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApis& setAuthorizedApi(vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi> && authorizedApi) { DARABONBA_PTR_SET_RVALUE(authorizedApi_, authorizedApi) };


  protected:
    std::shared_ptr<vector<Models::DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi>> authorizedApi_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
