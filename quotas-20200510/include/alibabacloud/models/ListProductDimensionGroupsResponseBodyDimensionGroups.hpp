// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTDIMENSIONGROUPSRESPONSEBODYDIMENSIONGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTDIMENSIONGROUPSRESPONSEBODYDIMENSIONGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductDimensionGroupsResponseBodyDimensionGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductDimensionGroupsResponseBodyDimensionGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionKeys, dimensionKeys_);
      DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductDimensionGroupsResponseBodyDimensionGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionKeys, dimensionKeys_);
      DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    ListProductDimensionGroupsResponseBodyDimensionGroups() = default ;
    ListProductDimensionGroupsResponseBodyDimensionGroups(const ListProductDimensionGroupsResponseBodyDimensionGroups &) = default ;
    ListProductDimensionGroupsResponseBodyDimensionGroups(ListProductDimensionGroupsResponseBodyDimensionGroups &&) = default ;
    ListProductDimensionGroupsResponseBodyDimensionGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductDimensionGroupsResponseBodyDimensionGroups() = default ;
    ListProductDimensionGroupsResponseBodyDimensionGroups& operator=(const ListProductDimensionGroupsResponseBodyDimensionGroups &) = default ;
    ListProductDimensionGroupsResponseBodyDimensionGroups& operator=(ListProductDimensionGroupsResponseBodyDimensionGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensionKeys_ != nullptr
        && this->groupCode_ != nullptr && this->groupName_ != nullptr && this->productCode_ != nullptr; };
    // dimensionKeys Field Functions 
    bool hasDimensionKeys() const { return this->dimensionKeys_ != nullptr;};
    void deleteDimensionKeys() { this->dimensionKeys_ = nullptr;};
    inline const vector<string> & dimensionKeys() const { DARABONBA_PTR_GET_CONST(dimensionKeys_, vector<string>) };
    inline vector<string> dimensionKeys() { DARABONBA_PTR_GET(dimensionKeys_, vector<string>) };
    inline ListProductDimensionGroupsResponseBodyDimensionGroups& setDimensionKeys(const vector<string> & dimensionKeys) { DARABONBA_PTR_SET_VALUE(dimensionKeys_, dimensionKeys) };
    inline ListProductDimensionGroupsResponseBodyDimensionGroups& setDimensionKeys(vector<string> && dimensionKeys) { DARABONBA_PTR_SET_RVALUE(dimensionKeys_, dimensionKeys) };


    // groupCode Field Functions 
    bool hasGroupCode() const { return this->groupCode_ != nullptr;};
    void deleteGroupCode() { this->groupCode_ = nullptr;};
    inline string groupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
    inline ListProductDimensionGroupsResponseBodyDimensionGroups& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListProductDimensionGroupsResponseBodyDimensionGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductDimensionGroupsResponseBodyDimensionGroups& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The key of the dimension group.
    std::shared_ptr<vector<string>> dimensionKeys_ = nullptr;
    // The code of the dimension group.
    std::shared_ptr<string> groupCode_ = nullptr;
    // The name of the dimension group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The service code.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
