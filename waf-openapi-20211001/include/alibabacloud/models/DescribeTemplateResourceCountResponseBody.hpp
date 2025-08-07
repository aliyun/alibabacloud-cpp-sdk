// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESOURCECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTemplateResourceCountResponseBodyResourceCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeTemplateResourceCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateResourceCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateResourceCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
    };
    DescribeTemplateResourceCountResponseBody() = default ;
    DescribeTemplateResourceCountResponseBody(const DescribeTemplateResourceCountResponseBody &) = default ;
    DescribeTemplateResourceCountResponseBody(DescribeTemplateResourceCountResponseBody &&) = default ;
    DescribeTemplateResourceCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateResourceCountResponseBody() = default ;
    DescribeTemplateResourceCountResponseBody& operator=(const DescribeTemplateResourceCountResponseBody &) = default ;
    DescribeTemplateResourceCountResponseBody& operator=(DescribeTemplateResourceCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTemplateResourceCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline const vector<DescribeTemplateResourceCountResponseBodyResourceCount> & resourceCount() const { DARABONBA_PTR_GET_CONST(resourceCount_, vector<DescribeTemplateResourceCountResponseBodyResourceCount>) };
    inline vector<DescribeTemplateResourceCountResponseBodyResourceCount> resourceCount() { DARABONBA_PTR_GET(resourceCount_, vector<DescribeTemplateResourceCountResponseBodyResourceCount>) };
    inline DescribeTemplateResourceCountResponseBody& setResourceCount(const vector<DescribeTemplateResourceCountResponseBodyResourceCount> & resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };
    inline DescribeTemplateResourceCountResponseBody& setResourceCount(vector<DescribeTemplateResourceCountResponseBodyResourceCount> && resourceCount) { DARABONBA_PTR_SET_RVALUE(resourceCount_, resourceCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of protected objects or protected object groups for which the protection template takes effect.
    std::shared_ptr<vector<DescribeTemplateResourceCountResponseBodyResourceCount>> resourceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
