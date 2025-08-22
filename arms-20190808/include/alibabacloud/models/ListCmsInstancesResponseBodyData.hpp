// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCMSINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCMSINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCmsInstancesResponseBodyDataProducts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListCmsInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCmsInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnableTag, enableTag_);
      DARABONBA_PTR_TO_JSON(Products, products_);
    };
    friend void from_json(const Darabonba::Json& j, ListCmsInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableTag, enableTag_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
    };
    ListCmsInstancesResponseBodyData() = default ;
    ListCmsInstancesResponseBodyData(const ListCmsInstancesResponseBodyData &) = default ;
    ListCmsInstancesResponseBodyData(ListCmsInstancesResponseBodyData &&) = default ;
    ListCmsInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCmsInstancesResponseBodyData() = default ;
    ListCmsInstancesResponseBodyData& operator=(const ListCmsInstancesResponseBodyData &) = default ;
    ListCmsInstancesResponseBodyData& operator=(ListCmsInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableTag_ != nullptr
        && this->products_ != nullptr; };
    // enableTag Field Functions 
    bool hasEnableTag() const { return this->enableTag_ != nullptr;};
    void deleteEnableTag() { this->enableTag_ = nullptr;};
    inline bool enableTag() const { DARABONBA_PTR_GET_DEFAULT(enableTag_, false) };
    inline ListCmsInstancesResponseBodyData& setEnableTag(bool enableTag) { DARABONBA_PTR_SET_VALUE(enableTag_, enableTag) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<Models::ListCmsInstancesResponseBodyDataProducts> & products() const { DARABONBA_PTR_GET_CONST(products_, vector<Models::ListCmsInstancesResponseBodyDataProducts>) };
    inline vector<Models::ListCmsInstancesResponseBodyDataProducts> products() { DARABONBA_PTR_GET(products_, vector<Models::ListCmsInstancesResponseBodyDataProducts>) };
    inline ListCmsInstancesResponseBodyData& setProducts(const vector<Models::ListCmsInstancesResponseBodyDataProducts> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ListCmsInstancesResponseBodyData& setProducts(vector<Models::ListCmsInstancesResponseBodyDataProducts> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


  protected:
    std::shared_ptr<bool> enableTag_ = nullptr;
    std::shared_ptr<vector<Models::ListCmsInstancesResponseBodyDataProducts>> products_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
