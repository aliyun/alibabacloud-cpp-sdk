// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILTERCONFIGSRESPONSEBODYFILTERCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILTERCONFIGSRESPONSEBODYFILTERCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeFilterConfigsResponseBodyFilterConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilterConfigsResponseBodyFilterConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(FilterName, filterName_);
      DARABONBA_PTR_TO_JSON(ItemConfigs, itemConfigs_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UuId, uuId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilterConfigsResponseBodyFilterConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterName, filterName_);
      DARABONBA_PTR_FROM_JSON(ItemConfigs, itemConfigs_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UuId, uuId_);
    };
    DescribeFilterConfigsResponseBodyFilterConfigs() = default ;
    DescribeFilterConfigsResponseBodyFilterConfigs(const DescribeFilterConfigsResponseBodyFilterConfigs &) = default ;
    DescribeFilterConfigsResponseBodyFilterConfigs(DescribeFilterConfigsResponseBodyFilterConfigs &&) = default ;
    DescribeFilterConfigsResponseBodyFilterConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilterConfigsResponseBodyFilterConfigs() = default ;
    DescribeFilterConfigsResponseBodyFilterConfigs& operator=(const DescribeFilterConfigsResponseBodyFilterConfigs &) = default ;
    DescribeFilterConfigsResponseBodyFilterConfigs& operator=(DescribeFilterConfigsResponseBodyFilterConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterName_ != nullptr
        && this->itemConfigs_ != nullptr && this->type_ != nullptr && this->uuId_ != nullptr; };
    // filterName Field Functions 
    bool hasFilterName() const { return this->filterName_ != nullptr;};
    void deleteFilterName() { this->filterName_ = nullptr;};
    inline string filterName() const { DARABONBA_PTR_GET_DEFAULT(filterName_, "") };
    inline DescribeFilterConfigsResponseBodyFilterConfigs& setFilterName(string filterName) { DARABONBA_PTR_SET_VALUE(filterName_, filterName) };


    // itemConfigs Field Functions 
    bool hasItemConfigs() const { return this->itemConfigs_ != nullptr;};
    void deleteItemConfigs() { this->itemConfigs_ = nullptr;};
    inline string itemConfigs() const { DARABONBA_PTR_GET_DEFAULT(itemConfigs_, "") };
    inline DescribeFilterConfigsResponseBodyFilterConfigs& setItemConfigs(string itemConfigs) { DARABONBA_PTR_SET_VALUE(itemConfigs_, itemConfigs) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeFilterConfigsResponseBodyFilterConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuId Field Functions 
    bool hasUuId() const { return this->uuId_ != nullptr;};
    void deleteUuId() { this->uuId_ = nullptr;};
    inline string uuId() const { DARABONBA_PTR_GET_DEFAULT(uuId_, "") };
    inline DescribeFilterConfigsResponseBodyFilterConfigs& setUuId(string uuId) { DARABONBA_PTR_SET_VALUE(uuId_, uuId) };


  protected:
    std::shared_ptr<string> filterName_ = nullptr;
    std::shared_ptr<string> itemConfigs_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
