// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedResources, supportedResources_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedResources, supportedResources_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources() = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources(const DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources &) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources(DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources &&) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources() = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& operator=(const DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources &) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& operator=(DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedResources_ == nullptr
        && return this->type_ == nullptr; };
    // supportedResources Field Functions 
    bool hasSupportedResources() const { return this->supportedResources_ != nullptr;};
    void deleteSupportedResources() { this->supportedResources_ = nullptr;};
    inline const vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources> & supportedResources() const { DARABONBA_PTR_GET_CONST(supportedResources_, vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources>) };
    inline vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources> supportedResources() { DARABONBA_PTR_GET(supportedResources_, vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources>) };
    inline DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& setSupportedResources(const vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources> & supportedResources) { DARABONBA_PTR_SET_VALUE(supportedResources_, supportedResources) };
    inline DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& setSupportedResources(vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources> && supportedResources) { DARABONBA_PTR_SET_RVALUE(supportedResources_, supportedResources) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources>> supportedResources_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
