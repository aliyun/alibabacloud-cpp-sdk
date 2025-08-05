// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBVERSIONINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBVersionInfosResponseBodyVersionDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBVersionInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBVersionInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VersionDetails, versionDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBVersionInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VersionDetails, versionDetails_);
    };
    DescribeDBVersionInfosResponseBody() = default ;
    DescribeDBVersionInfosResponseBody(const DescribeDBVersionInfosResponseBody &) = default ;
    DescribeDBVersionInfosResponseBody(DescribeDBVersionInfosResponseBody &&) = default ;
    DescribeDBVersionInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBVersionInfosResponseBody() = default ;
    DescribeDBVersionInfosResponseBody& operator=(const DescribeDBVersionInfosResponseBody &) = default ;
    DescribeDBVersionInfosResponseBody& operator=(DescribeDBVersionInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->versionDetails_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBVersionInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versionDetails Field Functions 
    bool hasVersionDetails() const { return this->versionDetails_ != nullptr;};
    void deleteVersionDetails() { this->versionDetails_ = nullptr;};
    inline const DescribeDBVersionInfosResponseBodyVersionDetails & versionDetails() const { DARABONBA_PTR_GET_CONST(versionDetails_, DescribeDBVersionInfosResponseBodyVersionDetails) };
    inline DescribeDBVersionInfosResponseBodyVersionDetails versionDetails() { DARABONBA_PTR_GET(versionDetails_, DescribeDBVersionInfosResponseBodyVersionDetails) };
    inline DescribeDBVersionInfosResponseBody& setVersionDetails(const DescribeDBVersionInfosResponseBodyVersionDetails & versionDetails) { DARABONBA_PTR_SET_VALUE(versionDetails_, versionDetails) };
    inline DescribeDBVersionInfosResponseBody& setVersionDetails(DescribeDBVersionInfosResponseBodyVersionDetails && versionDetails) { DARABONBA_PTR_SET_RVALUE(versionDetails_, versionDetails) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried minor versions.
    std::shared_ptr<DescribeDBVersionInfosResponseBodyVersionDetails> versionDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
