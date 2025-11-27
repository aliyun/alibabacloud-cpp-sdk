// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeParameterGroupResponseBodyParamGroup.hpp>
#include <alibabacloud/models/DescribeParameterGroupResponseBodyRelatedCustinsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamGroup, paramGroup_);
      DARABONBA_PTR_TO_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamGroup, paramGroup_);
      DARABONBA_PTR_FROM_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
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
    virtual bool empty() const override { return this->paramGroup_ == nullptr
        && return this->relatedCustinsInfo_ == nullptr && return this->requestId_ == nullptr; };
    // paramGroup Field Functions 
    bool hasParamGroup() const { return this->paramGroup_ != nullptr;};
    void deleteParamGroup() { this->paramGroup_ = nullptr;};
    inline const DescribeParameterGroupResponseBodyParamGroup & paramGroup() const { DARABONBA_PTR_GET_CONST(paramGroup_, DescribeParameterGroupResponseBodyParamGroup) };
    inline DescribeParameterGroupResponseBodyParamGroup paramGroup() { DARABONBA_PTR_GET(paramGroup_, DescribeParameterGroupResponseBodyParamGroup) };
    inline DescribeParameterGroupResponseBody& setParamGroup(const DescribeParameterGroupResponseBodyParamGroup & paramGroup) { DARABONBA_PTR_SET_VALUE(paramGroup_, paramGroup) };
    inline DescribeParameterGroupResponseBody& setParamGroup(DescribeParameterGroupResponseBodyParamGroup && paramGroup) { DARABONBA_PTR_SET_RVALUE(paramGroup_, paramGroup) };


    // relatedCustinsInfo Field Functions 
    bool hasRelatedCustinsInfo() const { return this->relatedCustinsInfo_ != nullptr;};
    void deleteRelatedCustinsInfo() { this->relatedCustinsInfo_ = nullptr;};
    inline const DescribeParameterGroupResponseBodyRelatedCustinsInfo & relatedCustinsInfo() const { DARABONBA_PTR_GET_CONST(relatedCustinsInfo_, DescribeParameterGroupResponseBodyRelatedCustinsInfo) };
    inline DescribeParameterGroupResponseBodyRelatedCustinsInfo relatedCustinsInfo() { DARABONBA_PTR_GET(relatedCustinsInfo_, DescribeParameterGroupResponseBodyRelatedCustinsInfo) };
    inline DescribeParameterGroupResponseBody& setRelatedCustinsInfo(const DescribeParameterGroupResponseBodyRelatedCustinsInfo & relatedCustinsInfo) { DARABONBA_PTR_SET_VALUE(relatedCustinsInfo_, relatedCustinsInfo) };
    inline DescribeParameterGroupResponseBody& setRelatedCustinsInfo(DescribeParameterGroupResponseBodyRelatedCustinsInfo && relatedCustinsInfo) { DARABONBA_PTR_SET_RVALUE(relatedCustinsInfo_, relatedCustinsInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the parameter template.
    std::shared_ptr<DescribeParameterGroupResponseBodyParamGroup> paramGroup_ = nullptr;
    // The information about the instance to which the parameter template is applied.
    // 
    // >  This parameter is available only for ApsaraDB RDS for PostgreSQL instances.
    std::shared_ptr<DescribeParameterGroupResponseBodyRelatedCustinsInfo> relatedCustinsInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
