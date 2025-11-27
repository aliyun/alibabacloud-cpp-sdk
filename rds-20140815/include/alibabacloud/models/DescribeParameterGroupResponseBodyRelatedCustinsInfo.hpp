// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYRELATEDCUSTINSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYRELATEDCUSTINSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupResponseBodyRelatedCustinsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBodyRelatedCustinsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBodyRelatedCustinsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedCustinsInfo, relatedCustinsInfo_);
    };
    DescribeParameterGroupResponseBodyRelatedCustinsInfo() = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfo(const DescribeParameterGroupResponseBodyRelatedCustinsInfo &) = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfo(DescribeParameterGroupResponseBodyRelatedCustinsInfo &&) = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBodyRelatedCustinsInfo() = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfo& operator=(const DescribeParameterGroupResponseBodyRelatedCustinsInfo &) = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfo& operator=(DescribeParameterGroupResponseBodyRelatedCustinsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedCustinsInfo_ == nullptr; };
    // relatedCustinsInfo Field Functions 
    bool hasRelatedCustinsInfo() const { return this->relatedCustinsInfo_ != nullptr;};
    void deleteRelatedCustinsInfo() { this->relatedCustinsInfo_ = nullptr;};
    inline const vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo> & relatedCustinsInfo() const { DARABONBA_PTR_GET_CONST(relatedCustinsInfo_, vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo>) };
    inline vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo> relatedCustinsInfo() { DARABONBA_PTR_GET(relatedCustinsInfo_, vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo>) };
    inline DescribeParameterGroupResponseBodyRelatedCustinsInfo& setRelatedCustinsInfo(const vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo> & relatedCustinsInfo) { DARABONBA_PTR_SET_VALUE(relatedCustinsInfo_, relatedCustinsInfo) };
    inline DescribeParameterGroupResponseBodyRelatedCustinsInfo& setRelatedCustinsInfo(vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo> && relatedCustinsInfo) { DARABONBA_PTR_SET_RVALUE(relatedCustinsInfo_, relatedCustinsInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo>> relatedCustinsInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
