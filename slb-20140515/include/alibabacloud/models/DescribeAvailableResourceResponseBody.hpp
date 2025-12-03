// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableResources_ == nullptr
        && return this->requestId_ == nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const DescribeAvailableResourceResponseBodyAvailableResources & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, DescribeAvailableResourceResponseBodyAvailableResources) };
    inline DescribeAvailableResourceResponseBodyAvailableResources availableResources() { DARABONBA_PTR_GET(availableResources_, DescribeAvailableResourceResponseBodyAvailableResources) };
    inline DescribeAvailableResourceResponseBody& setAvailableResources(const DescribeAvailableResourceResponseBodyAvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeAvailableResourceResponseBody& setAvailableResources(DescribeAvailableResourceResponseBodyAvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The zones and the supported resources.
    std::shared_ptr<DescribeAvailableResourceResponseBodyAvailableResources> availableResources_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
