// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESINCATEGORYRESPONSEBODYENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESINCATEGORYRESPONSEBODYENTITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetaCategoryTableEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTablesInCategoryResponseBodyEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesInCategoryResponseBodyEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(MetaCategoryTableEntity, metaCategoryTableEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesInCategoryResponseBodyEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaCategoryTableEntity, metaCategoryTableEntity_);
    };
    ListTablesInCategoryResponseBodyEntityList() = default ;
    ListTablesInCategoryResponseBodyEntityList(const ListTablesInCategoryResponseBodyEntityList &) = default ;
    ListTablesInCategoryResponseBodyEntityList(ListTablesInCategoryResponseBodyEntityList &&) = default ;
    ListTablesInCategoryResponseBodyEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesInCategoryResponseBodyEntityList() = default ;
    ListTablesInCategoryResponseBodyEntityList& operator=(const ListTablesInCategoryResponseBodyEntityList &) = default ;
    ListTablesInCategoryResponseBodyEntityList& operator=(ListTablesInCategoryResponseBodyEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metaCategoryTableEntity_ != nullptr; };
    // metaCategoryTableEntity Field Functions 
    bool hasMetaCategoryTableEntity() const { return this->metaCategoryTableEntity_ != nullptr;};
    void deleteMetaCategoryTableEntity() { this->metaCategoryTableEntity_ = nullptr;};
    inline const vector<Models::MetaCategoryTableEntity> & metaCategoryTableEntity() const { DARABONBA_PTR_GET_CONST(metaCategoryTableEntity_, vector<Models::MetaCategoryTableEntity>) };
    inline vector<Models::MetaCategoryTableEntity> metaCategoryTableEntity() { DARABONBA_PTR_GET(metaCategoryTableEntity_, vector<Models::MetaCategoryTableEntity>) };
    inline ListTablesInCategoryResponseBodyEntityList& setMetaCategoryTableEntity(const vector<Models::MetaCategoryTableEntity> & metaCategoryTableEntity) { DARABONBA_PTR_SET_VALUE(metaCategoryTableEntity_, metaCategoryTableEntity) };
    inline ListTablesInCategoryResponseBodyEntityList& setMetaCategoryTableEntity(vector<Models::MetaCategoryTableEntity> && metaCategoryTableEntity) { DARABONBA_PTR_SET_RVALUE(metaCategoryTableEntity_, metaCategoryTableEntity) };


  protected:
    std::shared_ptr<vector<Models::MetaCategoryTableEntity>> metaCategoryTableEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
