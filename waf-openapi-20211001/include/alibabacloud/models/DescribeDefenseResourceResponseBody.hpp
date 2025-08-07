// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDefenseResourceResponseBodyResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeDefenseResourceResponseBody() = default ;
    DescribeDefenseResourceResponseBody(const DescribeDefenseResourceResponseBody &) = default ;
    DescribeDefenseResourceResponseBody(DescribeDefenseResourceResponseBody &&) = default ;
    DescribeDefenseResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceResponseBody() = default ;
    DescribeDefenseResourceResponseBody& operator=(const DescribeDefenseResourceResponseBody &) = default ;
    DescribeDefenseResourceResponseBody& operator=(DescribeDefenseResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resource_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const DescribeDefenseResourceResponseBodyResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, DescribeDefenseResourceResponseBodyResource) };
    inline DescribeDefenseResourceResponseBodyResource resource() { DARABONBA_PTR_GET(resource_, DescribeDefenseResourceResponseBodyResource) };
    inline DescribeDefenseResourceResponseBody& setResource(const DescribeDefenseResourceResponseBodyResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeDefenseResourceResponseBody& setResource(DescribeDefenseResourceResponseBodyResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The protected object.
    std::shared_ptr<DescribeDefenseResourceResponseBodyResource> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
