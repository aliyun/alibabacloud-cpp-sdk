// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourcePortResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePortResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePorts, resourcePorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePortResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePorts, resourcePorts_);
    };
    DescribeResourcePortResponseBody() = default ;
    DescribeResourcePortResponseBody(const DescribeResourcePortResponseBody &) = default ;
    DescribeResourcePortResponseBody(DescribeResourcePortResponseBody &&) = default ;
    DescribeResourcePortResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePortResponseBody() = default ;
    DescribeResourcePortResponseBody& operator=(const DescribeResourcePortResponseBody &) = default ;
    DescribeResourcePortResponseBody& operator=(DescribeResourcePortResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourcePorts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourcePortResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePorts Field Functions 
    bool hasResourcePorts() const { return this->resourcePorts_ != nullptr;};
    void deleteResourcePorts() { this->resourcePorts_ = nullptr;};
    inline const vector<string> & getResourcePorts() const { DARABONBA_PTR_GET_CONST(resourcePorts_, vector<string>) };
    inline vector<string> getResourcePorts() { DARABONBA_PTR_GET(resourcePorts_, vector<string>) };
    inline DescribeResourcePortResponseBody& setResourcePorts(const vector<string> & resourcePorts) { DARABONBA_PTR_SET_VALUE(resourcePorts_, resourcePorts) };
    inline DescribeResourcePortResponseBody& setResourcePorts(vector<string> && resourcePorts) { DARABONBA_PTR_SET_RVALUE(resourcePorts_, resourcePorts) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array of HTTP and HTTPS listener ports that are added to the WAF instance.
    shared_ptr<vector<string>> resourcePorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
