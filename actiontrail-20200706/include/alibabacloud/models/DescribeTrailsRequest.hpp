// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeTrailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeOrganizationTrail, includeOrganizationTrail_);
      DARABONBA_PTR_TO_JSON(IncludeShadowTrails, includeShadowTrails_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeOrganizationTrail, includeOrganizationTrail_);
      DARABONBA_PTR_FROM_JSON(IncludeShadowTrails, includeShadowTrails_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
    };
    DescribeTrailsRequest() = default ;
    DescribeTrailsRequest(const DescribeTrailsRequest &) = default ;
    DescribeTrailsRequest(DescribeTrailsRequest &&) = default ;
    DescribeTrailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrailsRequest() = default ;
    DescribeTrailsRequest& operator=(const DescribeTrailsRequest &) = default ;
    DescribeTrailsRequest& operator=(DescribeTrailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->includeOrganizationTrail_ != nullptr
        && this->includeShadowTrails_ != nullptr && this->nameList_ != nullptr; };
    // includeOrganizationTrail Field Functions 
    bool hasIncludeOrganizationTrail() const { return this->includeOrganizationTrail_ != nullptr;};
    void deleteIncludeOrganizationTrail() { this->includeOrganizationTrail_ = nullptr;};
    inline bool includeOrganizationTrail() const { DARABONBA_PTR_GET_DEFAULT(includeOrganizationTrail_, false) };
    inline DescribeTrailsRequest& setIncludeOrganizationTrail(bool includeOrganizationTrail) { DARABONBA_PTR_SET_VALUE(includeOrganizationTrail_, includeOrganizationTrail) };


    // includeShadowTrails Field Functions 
    bool hasIncludeShadowTrails() const { return this->includeShadowTrails_ != nullptr;};
    void deleteIncludeShadowTrails() { this->includeShadowTrails_ = nullptr;};
    inline bool includeShadowTrails() const { DARABONBA_PTR_GET_DEFAULT(includeShadowTrails_, false) };
    inline DescribeTrailsRequest& setIncludeShadowTrails(bool includeShadowTrails) { DARABONBA_PTR_SET_VALUE(includeShadowTrails_, includeShadowTrails) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline string nameList() const { DARABONBA_PTR_GET_DEFAULT(nameList_, "") };
    inline DescribeTrailsRequest& setNameList(string nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };


  protected:
    // Specifies whether to query the information about multi-account trails. Valid values:
    // 
    // *   true
    // *   false (default)
    std::shared_ptr<bool> includeOrganizationTrail_ = nullptr;
    // Specifies whether to return the information about shadow trails. Valid values:
    // 
    // *   false: Do not return the information about shadow trails. It is the default value.
    // *   true: Return the information about shadow trails.
    std::shared_ptr<bool> includeShadowTrails_ = nullptr;
    // The names of the trails whose information you want to query. Separate multiple trail names with commas (,).
    std::shared_ptr<string> nameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
