// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterGroupsResponseBodyParameterGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody(DescribeParameterGroupsResponseBody &&) = default ;
    DescribeParameterGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBody() = default ;
    DescribeParameterGroupsResponseBody& operator=(const DescribeParameterGroupsResponseBody &) = default ;
    DescribeParameterGroupsResponseBody& operator=(DescribeParameterGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parameterGroups_ != nullptr
        && this->requestId_ != nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const vector<DescribeParameterGroupsResponseBodyParameterGroups> & parameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, vector<DescribeParameterGroupsResponseBodyParameterGroups>) };
    inline vector<DescribeParameterGroupsResponseBodyParameterGroups> parameterGroups() { DARABONBA_PTR_GET(parameterGroups_, vector<DescribeParameterGroupsResponseBodyParameterGroups>) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(const vector<DescribeParameterGroupsResponseBodyParameterGroups> & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(vector<DescribeParameterGroupsResponseBodyParameterGroups> && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of parameter templates.
    std::shared_ptr<vector<DescribeParameterGroupsResponseBodyParameterGroups>> parameterGroups_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
