// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPARAMTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNodeParamTagsResponseBodyParamReferredPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeNodeParamTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodeParamTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamReferredPaths, paramReferredPaths_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodeParamTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamReferredPaths, paramReferredPaths_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNodeParamTagsResponseBody() = default ;
    DescribeNodeParamTagsResponseBody(const DescribeNodeParamTagsResponseBody &) = default ;
    DescribeNodeParamTagsResponseBody(DescribeNodeParamTagsResponseBody &&) = default ;
    DescribeNodeParamTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodeParamTagsResponseBody() = default ;
    DescribeNodeParamTagsResponseBody& operator=(const DescribeNodeParamTagsResponseBody &) = default ;
    DescribeNodeParamTagsResponseBody& operator=(DescribeNodeParamTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramReferredPaths_ == nullptr
        && return this->requestId_ == nullptr; };
    // paramReferredPaths Field Functions 
    bool hasParamReferredPaths() const { return this->paramReferredPaths_ != nullptr;};
    void deleteParamReferredPaths() { this->paramReferredPaths_ = nullptr;};
    inline const vector<DescribeNodeParamTagsResponseBodyParamReferredPaths> & paramReferredPaths() const { DARABONBA_PTR_GET_CONST(paramReferredPaths_, vector<DescribeNodeParamTagsResponseBodyParamReferredPaths>) };
    inline vector<DescribeNodeParamTagsResponseBodyParamReferredPaths> paramReferredPaths() { DARABONBA_PTR_GET(paramReferredPaths_, vector<DescribeNodeParamTagsResponseBodyParamReferredPaths>) };
    inline DescribeNodeParamTagsResponseBody& setParamReferredPaths(const vector<DescribeNodeParamTagsResponseBodyParamReferredPaths> & paramReferredPaths) { DARABONBA_PTR_SET_VALUE(paramReferredPaths_, paramReferredPaths) };
    inline DescribeNodeParamTagsResponseBody& setParamReferredPaths(vector<DescribeNodeParamTagsResponseBodyParamReferredPaths> && paramReferredPaths) { DARABONBA_PTR_SET_RVALUE(paramReferredPaths_, paramReferredPaths) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodeParamTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the recommended path.
    std::shared_ptr<vector<DescribeNodeParamTagsResponseBodyParamReferredPaths>> paramReferredPaths_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
