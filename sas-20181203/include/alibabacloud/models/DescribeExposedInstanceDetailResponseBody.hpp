// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExposedInstanceDetailResponseBodyExposedChains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExposedChains, exposedChains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExposedChains, exposedChains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExposedInstanceDetailResponseBody() = default ;
    DescribeExposedInstanceDetailResponseBody(const DescribeExposedInstanceDetailResponseBody &) = default ;
    DescribeExposedInstanceDetailResponseBody(DescribeExposedInstanceDetailResponseBody &&) = default ;
    DescribeExposedInstanceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceDetailResponseBody() = default ;
    DescribeExposedInstanceDetailResponseBody& operator=(const DescribeExposedInstanceDetailResponseBody &) = default ;
    DescribeExposedInstanceDetailResponseBody& operator=(DescribeExposedInstanceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exposedChains_ != nullptr
        && this->requestId_ != nullptr; };
    // exposedChains Field Functions 
    bool hasExposedChains() const { return this->exposedChains_ != nullptr;};
    void deleteExposedChains() { this->exposedChains_ = nullptr;};
    inline const vector<DescribeExposedInstanceDetailResponseBodyExposedChains> & exposedChains() const { DARABONBA_PTR_GET_CONST(exposedChains_, vector<DescribeExposedInstanceDetailResponseBodyExposedChains>) };
    inline vector<DescribeExposedInstanceDetailResponseBodyExposedChains> exposedChains() { DARABONBA_PTR_GET(exposedChains_, vector<DescribeExposedInstanceDetailResponseBodyExposedChains>) };
    inline DescribeExposedInstanceDetailResponseBody& setExposedChains(const vector<DescribeExposedInstanceDetailResponseBodyExposedChains> & exposedChains) { DARABONBA_PTR_SET_VALUE(exposedChains_, exposedChains) };
    inline DescribeExposedInstanceDetailResponseBody& setExposedChains(vector<DescribeExposedInstanceDetailResponseBodyExposedChains> && exposedChains) { DARABONBA_PTR_SET_RVALUE(exposedChains_, exposedChains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedInstanceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of exposure details of the server or database.
    std::shared_ptr<vector<DescribeExposedInstanceDetailResponseBodyExposedChains>> exposedChains_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
