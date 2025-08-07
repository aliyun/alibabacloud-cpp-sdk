// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterGroupResponseBodyParameterGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroup, parameterGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroup, parameterGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupResponseBody() = default ;
    DescribeParameterGroupResponseBody(const DescribeParameterGroupResponseBody &) = default ;
    DescribeParameterGroupResponseBody(DescribeParameterGroupResponseBody &&) = default ;
    DescribeParameterGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBody() = default ;
    DescribeParameterGroupResponseBody& operator=(const DescribeParameterGroupResponseBody &) = default ;
    DescribeParameterGroupResponseBody& operator=(DescribeParameterGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterGroup_ != nullptr
        && this->requestId_ != nullptr; };
    // parameterGroup Field Functions 
    bool hasParameterGroup() const { return this->parameterGroup_ != nullptr;};
    void deleteParameterGroup() { this->parameterGroup_ = nullptr;};
    inline const vector<DescribeParameterGroupResponseBodyParameterGroup> & parameterGroup() const { DARABONBA_PTR_GET_CONST(parameterGroup_, vector<DescribeParameterGroupResponseBodyParameterGroup>) };
    inline vector<DescribeParameterGroupResponseBodyParameterGroup> parameterGroup() { DARABONBA_PTR_GET(parameterGroup_, vector<DescribeParameterGroupResponseBodyParameterGroup>) };
    inline DescribeParameterGroupResponseBody& setParameterGroup(const vector<DescribeParameterGroupResponseBodyParameterGroup> & parameterGroup) { DARABONBA_PTR_SET_VALUE(parameterGroup_, parameterGroup) };
    inline DescribeParameterGroupResponseBody& setParameterGroup(vector<DescribeParameterGroupResponseBodyParameterGroup> && parameterGroup) { DARABONBA_PTR_SET_RVALUE(parameterGroup_, parameterGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the parameter templates.
    std::shared_ptr<vector<DescribeParameterGroupResponseBodyParameterGroup>> parameterGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
