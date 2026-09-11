// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListDataSourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attributeName, attributeName_);
      DARABONBA_PTR_TO_JSON(filter, filterShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attributeName, attributeName_);
      DARABONBA_PTR_FROM_JSON(filter, filterShrink_);
    };
    ListDataSourcesShrinkRequest() = default ;
    ListDataSourcesShrinkRequest(const ListDataSourcesShrinkRequest &) = default ;
    ListDataSourcesShrinkRequest(ListDataSourcesShrinkRequest &&) = default ;
    ListDataSourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesShrinkRequest() = default ;
    ListDataSourcesShrinkRequest& operator=(const ListDataSourcesShrinkRequest &) = default ;
    ListDataSourcesShrinkRequest& operator=(ListDataSourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeName_ == nullptr
        && this->filterShrink_ == nullptr; };
    // attributeName Field Functions 
    bool hasAttributeName() const { return this->attributeName_ != nullptr;};
    void deleteAttributeName() { this->attributeName_ = nullptr;};
    inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
    inline ListDataSourcesShrinkRequest& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline ListDataSourcesShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


  protected:
    // The name of the attribute. Only `RegionId` is supported.
    // 
    // This parameter is required.
    shared_ptr<string> attributeName_ {};
    // The filter condition. The value must be a JSON string in the {"key1":"value1"} format.
    shared_ptr<string> filterShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
