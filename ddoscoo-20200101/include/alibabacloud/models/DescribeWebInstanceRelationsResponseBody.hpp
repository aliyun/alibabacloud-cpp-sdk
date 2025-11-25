// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBINSTANCERELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebInstanceRelationsResponseBodyWebInstanceRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebInstanceRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebInstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebInstanceRelations, webInstanceRelations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebInstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebInstanceRelations, webInstanceRelations_);
    };
    DescribeWebInstanceRelationsResponseBody() = default ;
    DescribeWebInstanceRelationsResponseBody(const DescribeWebInstanceRelationsResponseBody &) = default ;
    DescribeWebInstanceRelationsResponseBody(DescribeWebInstanceRelationsResponseBody &&) = default ;
    DescribeWebInstanceRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebInstanceRelationsResponseBody() = default ;
    DescribeWebInstanceRelationsResponseBody& operator=(const DescribeWebInstanceRelationsResponseBody &) = default ;
    DescribeWebInstanceRelationsResponseBody& operator=(DescribeWebInstanceRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->webInstanceRelations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebInstanceRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webInstanceRelations Field Functions 
    bool hasWebInstanceRelations() const { return this->webInstanceRelations_ != nullptr;};
    void deleteWebInstanceRelations() { this->webInstanceRelations_ = nullptr;};
    inline const vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations> & webInstanceRelations() const { DARABONBA_PTR_GET_CONST(webInstanceRelations_, vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations>) };
    inline vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations> webInstanceRelations() { DARABONBA_PTR_GET(webInstanceRelations_, vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations>) };
    inline DescribeWebInstanceRelationsResponseBody& setWebInstanceRelations(const vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations> & webInstanceRelations) { DARABONBA_PTR_SET_VALUE(webInstanceRelations_, webInstanceRelations) };
    inline DescribeWebInstanceRelationsResponseBody& setWebInstanceRelations(vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations> && webInstanceRelations) { DARABONBA_PTR_SET_RVALUE(webInstanceRelations_, webInstanceRelations) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the instances to which a website service is added.
    std::shared_ptr<vector<DescribeWebInstanceRelationsResponseBodyWebInstanceRelations>> webInstanceRelations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
