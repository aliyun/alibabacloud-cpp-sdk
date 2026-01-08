// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCETYPEAUTOENABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCETYPEAUTOENABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeResourceTypeAutoEnableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceTypeAutoEnableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeAutoEnable, resourceTypeAutoEnable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceTypeAutoEnableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeAutoEnable, resourceTypeAutoEnable_);
    };
    DescribeResourceTypeAutoEnableResponseBody() = default ;
    DescribeResourceTypeAutoEnableResponseBody(const DescribeResourceTypeAutoEnableResponseBody &) = default ;
    DescribeResourceTypeAutoEnableResponseBody(DescribeResourceTypeAutoEnableResponseBody &&) = default ;
    DescribeResourceTypeAutoEnableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceTypeAutoEnableResponseBody() = default ;
    DescribeResourceTypeAutoEnableResponseBody& operator=(const DescribeResourceTypeAutoEnableResponseBody &) = default ;
    DescribeResourceTypeAutoEnableResponseBody& operator=(DescribeResourceTypeAutoEnableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceTypeAutoEnable_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourceTypeAutoEnableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypeAutoEnable Field Functions 
    bool hasResourceTypeAutoEnable() const { return this->resourceTypeAutoEnable_ != nullptr;};
    void deleteResourceTypeAutoEnable() { this->resourceTypeAutoEnable_ = nullptr;};
    inline const map<string, bool> & getResourceTypeAutoEnable() const { DARABONBA_PTR_GET_CONST(resourceTypeAutoEnable_, map<string, bool>) };
    inline map<string, bool> getResourceTypeAutoEnable() { DARABONBA_PTR_GET(resourceTypeAutoEnable_, map<string, bool>) };
    inline DescribeResourceTypeAutoEnableResponseBody& setResourceTypeAutoEnable(const map<string, bool> & resourceTypeAutoEnable) { DARABONBA_PTR_SET_VALUE(resourceTypeAutoEnable_, resourceTypeAutoEnable) };
    inline DescribeResourceTypeAutoEnableResponseBody& setResourceTypeAutoEnable(map<string, bool> && resourceTypeAutoEnable) { DARABONBA_PTR_SET_RVALUE(resourceTypeAutoEnable_, resourceTypeAutoEnable) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<map<string, bool>> resourceTypeAutoEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
