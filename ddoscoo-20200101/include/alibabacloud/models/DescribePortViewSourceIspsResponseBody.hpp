// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEISPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEISPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortViewSourceIspsResponseBodyIsps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortViewSourceIspsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceIspsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Isps, isps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceIspsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Isps, isps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortViewSourceIspsResponseBody() = default ;
    DescribePortViewSourceIspsResponseBody(const DescribePortViewSourceIspsResponseBody &) = default ;
    DescribePortViewSourceIspsResponseBody(DescribePortViewSourceIspsResponseBody &&) = default ;
    DescribePortViewSourceIspsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceIspsResponseBody() = default ;
    DescribePortViewSourceIspsResponseBody& operator=(const DescribePortViewSourceIspsResponseBody &) = default ;
    DescribePortViewSourceIspsResponseBody& operator=(DescribePortViewSourceIspsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isps_ == nullptr
        && return this->requestId_ == nullptr; };
    // isps Field Functions 
    bool hasIsps() const { return this->isps_ != nullptr;};
    void deleteIsps() { this->isps_ = nullptr;};
    inline const vector<DescribePortViewSourceIspsResponseBodyIsps> & isps() const { DARABONBA_PTR_GET_CONST(isps_, vector<DescribePortViewSourceIspsResponseBodyIsps>) };
    inline vector<DescribePortViewSourceIspsResponseBodyIsps> isps() { DARABONBA_PTR_GET(isps_, vector<DescribePortViewSourceIspsResponseBodyIsps>) };
    inline DescribePortViewSourceIspsResponseBody& setIsps(const vector<DescribePortViewSourceIspsResponseBodyIsps> & isps) { DARABONBA_PTR_SET_VALUE(isps_, isps) };
    inline DescribePortViewSourceIspsResponseBody& setIsps(vector<DescribePortViewSourceIspsResponseBodyIsps> && isps) { DARABONBA_PTR_SET_RVALUE(isps_, isps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortViewSourceIspsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details of the ISP.
    std::shared_ptr<vector<DescribePortViewSourceIspsResponseBodyIsps>> isps_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
