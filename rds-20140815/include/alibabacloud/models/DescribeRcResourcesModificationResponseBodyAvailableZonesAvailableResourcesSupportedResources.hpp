// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLERESOURCESSUPPORTEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCRESOURCESMODIFICATIONRESPONSEBODYAVAILABLEZONESAVAILABLERESOURCESSUPPORTEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources() = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources(const DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources &) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources(DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources &&) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources() = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& operator=(const DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources &) = default ;
    DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& operator=(DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->statusCategory_ == nullptr && return this->value_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCategory Field Functions 
    bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
    void deleteStatusCategory() { this->statusCategory_ = nullptr;};
    inline string statusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRCResourcesModificationResponseBodyAvailableZonesAvailableResourcesSupportedResources& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusCategory_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
