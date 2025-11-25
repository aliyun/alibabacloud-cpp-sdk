// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortViewSourceProvincesResponseBodySourceProvinces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortViewSourceProvincesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceProvinces, sourceProvinces_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceProvinces, sourceProvinces_);
    };
    DescribePortViewSourceProvincesResponseBody() = default ;
    DescribePortViewSourceProvincesResponseBody(const DescribePortViewSourceProvincesResponseBody &) = default ;
    DescribePortViewSourceProvincesResponseBody(DescribePortViewSourceProvincesResponseBody &&) = default ;
    DescribePortViewSourceProvincesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceProvincesResponseBody() = default ;
    DescribePortViewSourceProvincesResponseBody& operator=(const DescribePortViewSourceProvincesResponseBody &) = default ;
    DescribePortViewSourceProvincesResponseBody& operator=(DescribePortViewSourceProvincesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sourceProvinces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortViewSourceProvincesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceProvinces Field Functions 
    bool hasSourceProvinces() const { return this->sourceProvinces_ != nullptr;};
    void deleteSourceProvinces() { this->sourceProvinces_ = nullptr;};
    inline const vector<DescribePortViewSourceProvincesResponseBodySourceProvinces> & sourceProvinces() const { DARABONBA_PTR_GET_CONST(sourceProvinces_, vector<DescribePortViewSourceProvincesResponseBodySourceProvinces>) };
    inline vector<DescribePortViewSourceProvincesResponseBodySourceProvinces> sourceProvinces() { DARABONBA_PTR_GET(sourceProvinces_, vector<DescribePortViewSourceProvincesResponseBodySourceProvinces>) };
    inline DescribePortViewSourceProvincesResponseBody& setSourceProvinces(const vector<DescribePortViewSourceProvincesResponseBodySourceProvinces> & sourceProvinces) { DARABONBA_PTR_SET_VALUE(sourceProvinces_, sourceProvinces) };
    inline DescribePortViewSourceProvincesResponseBody& setSourceProvinces(vector<DescribePortViewSourceProvincesResponseBodySourceProvinces> && sourceProvinces) { DARABONBA_PTR_SET_RVALUE(sourceProvinces_, sourceProvinces) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the administrative region in China from which the requests are sent.
    std::shared_ptr<vector<DescribePortViewSourceProvincesResponseBodySourceProvinces>> sourceProvinces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
