// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterGroupsResponseBodyDataParameterGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeParameterGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterGroups, parameterGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterGroupsResponseBodyData() = default ;
    DescribeParameterGroupsResponseBodyData(const DescribeParameterGroupsResponseBodyData &) = default ;
    DescribeParameterGroupsResponseBodyData(DescribeParameterGroupsResponseBodyData &&) = default ;
    DescribeParameterGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupsResponseBodyData() = default ;
    DescribeParameterGroupsResponseBodyData& operator=(const DescribeParameterGroupsResponseBodyData &) = default ;
    DescribeParameterGroupsResponseBodyData& operator=(DescribeParameterGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterGroups_ == nullptr
        && return this->requestId_ == nullptr; };
    // parameterGroups Field Functions 
    bool hasParameterGroups() const { return this->parameterGroups_ != nullptr;};
    void deleteParameterGroups() { this->parameterGroups_ = nullptr;};
    inline const vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups> & parameterGroups() const { DARABONBA_PTR_GET_CONST(parameterGroups_, vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups>) };
    inline vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups> parameterGroups() { DARABONBA_PTR_GET(parameterGroups_, vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups>) };
    inline DescribeParameterGroupsResponseBodyData& setParameterGroups(const vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups> & parameterGroups) { DARABONBA_PTR_SET_VALUE(parameterGroups_, parameterGroups) };
    inline DescribeParameterGroupsResponseBodyData& setParameterGroups(vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups> && parameterGroups) { DARABONBA_PTR_SET_RVALUE(parameterGroups_, parameterGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupsResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<Models::DescribeParameterGroupsResponseBodyDataParameterGroups>> parameterGroups_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
