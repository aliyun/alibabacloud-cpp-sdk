// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFAULTHTTPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFAULTHTTPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDefaultHttpsResponseBodyDefaultHttps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefaultHttpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefaultHttpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultHttps, defaultHttps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefaultHttpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultHttps, defaultHttps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDefaultHttpsResponseBody() = default ;
    DescribeDefaultHttpsResponseBody(const DescribeDefaultHttpsResponseBody &) = default ;
    DescribeDefaultHttpsResponseBody(DescribeDefaultHttpsResponseBody &&) = default ;
    DescribeDefaultHttpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefaultHttpsResponseBody() = default ;
    DescribeDefaultHttpsResponseBody& operator=(const DescribeDefaultHttpsResponseBody &) = default ;
    DescribeDefaultHttpsResponseBody& operator=(DescribeDefaultHttpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultHttps_ == nullptr
        && return this->requestId_ == nullptr; };
    // defaultHttps Field Functions 
    bool hasDefaultHttps() const { return this->defaultHttps_ != nullptr;};
    void deleteDefaultHttps() { this->defaultHttps_ = nullptr;};
    inline const DescribeDefaultHttpsResponseBodyDefaultHttps & defaultHttps() const { DARABONBA_PTR_GET_CONST(defaultHttps_, DescribeDefaultHttpsResponseBodyDefaultHttps) };
    inline DescribeDefaultHttpsResponseBodyDefaultHttps defaultHttps() { DARABONBA_PTR_GET(defaultHttps_, DescribeDefaultHttpsResponseBodyDefaultHttps) };
    inline DescribeDefaultHttpsResponseBody& setDefaultHttps(const DescribeDefaultHttpsResponseBodyDefaultHttps & defaultHttps) { DARABONBA_PTR_SET_VALUE(defaultHttps_, defaultHttps) };
    inline DescribeDefaultHttpsResponseBody& setDefaultHttps(DescribeDefaultHttpsResponseBodyDefaultHttps && defaultHttps) { DARABONBA_PTR_SET_RVALUE(defaultHttps_, defaultHttps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefaultHttpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The default SSL and TLS settings.
    std::shared_ptr<DescribeDefaultHttpsResponseBodyDefaultHttps> defaultHttps_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
