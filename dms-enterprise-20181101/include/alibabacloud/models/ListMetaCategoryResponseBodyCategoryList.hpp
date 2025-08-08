// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETACATEGORYRESPONSEBODYCATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETACATEGORYRESPONSEBODYCATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DmsEnterprise20181101.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListMetaCategoryResponseBodyCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaCategoryResponseBodyCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(MetaCategory, metaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaCategoryResponseBodyCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaCategory, metaCategory_);
    };
    ListMetaCategoryResponseBodyCategoryList() = default ;
    ListMetaCategoryResponseBodyCategoryList(const ListMetaCategoryResponseBodyCategoryList &) = default ;
    ListMetaCategoryResponseBodyCategoryList(ListMetaCategoryResponseBodyCategoryList &&) = default ;
    ListMetaCategoryResponseBodyCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaCategoryResponseBodyCategoryList() = default ;
    ListMetaCategoryResponseBodyCategoryList& operator=(const ListMetaCategoryResponseBodyCategoryList &) = default ;
    ListMetaCategoryResponseBodyCategoryList& operator=(ListMetaCategoryResponseBodyCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metaCategory_ != nullptr; };
    // metaCategory Field Functions 
    bool hasMetaCategory() const { return this->metaCategory_ != nullptr;};
    void deleteMetaCategory() { this->metaCategory_ = nullptr;};
    inline const vector<Models::MetaCategory> & metaCategory() const { DARABONBA_PTR_GET_CONST(metaCategory_, vector<Models::MetaCategory>) };
    inline vector<Models::MetaCategory> metaCategory() { DARABONBA_PTR_GET(metaCategory_, vector<Models::MetaCategory>) };
    inline ListMetaCategoryResponseBodyCategoryList& setMetaCategory(const vector<Models::MetaCategory> & metaCategory) { DARABONBA_PTR_SET_VALUE(metaCategory_, metaCategory) };
    inline ListMetaCategoryResponseBodyCategoryList& setMetaCategory(vector<Models::MetaCategory> && metaCategory) { DARABONBA_PTR_SET_RVALUE(metaCategory_, metaCategory) };


  protected:
    std::shared_ptr<vector<Models::MetaCategory>> metaCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
