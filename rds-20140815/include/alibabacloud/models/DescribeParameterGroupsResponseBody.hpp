// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeParameterGroupsResponseBodyParameterGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignalForOptimizeParams, signalForOptimizeParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignalForOptimizeParams, signalForOptimizeParams_);
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
    virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && return this->requestId_ == nullptr && return this->signalForOptimizeParams_ == nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const DescribeParameterGroupsResponseBodyParameterGroups & parameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, DescribeParameterGroupsResponseBodyParameterGroups) };
    inline DescribeParameterGroupsResponseBodyParameterGroups parameterGroups() { DARABONBA_PTR_GET(parameterGroups_, DescribeParameterGroupsResponseBodyParameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(const DescribeParameterGroupsResponseBodyParameterGroups & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeParameterGroupsResponseBody& setParameterGroups(DescribeParameterGroupsResponseBodyParameterGroups && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signalForOptimizeParams Field Functions 
    bool hasSignalForOptimizeParams() const { return this->signalForOptimizeParams_ != nullptr;};
    void deleteSignalForOptimizeParams() { this->signalForOptimizeParams_ = nullptr;};
    inline bool signalForOptimizeParams() const { DARABONBA_PTR_GET_DEFAULT(signalForOptimizeParams_, false) };
    inline DescribeParameterGroupsResponseBody& setSignalForOptimizeParams(bool signalForOptimizeParams) { DARABONBA_PTR_SET_VALUE(signalForOptimizeParams_, signalForOptimizeParams) };


  protected:
    // The details of the parameter templates.
    std::shared_ptr<DescribeParameterGroupsResponseBodyParameterGroups> parameterGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether parameter templates exist in the specified region. Valid values:
    // *   true
    // *   false
    // >Notice: This parameter is deprecated.
    std::shared_ptr<bool> signalForOptimizeParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
