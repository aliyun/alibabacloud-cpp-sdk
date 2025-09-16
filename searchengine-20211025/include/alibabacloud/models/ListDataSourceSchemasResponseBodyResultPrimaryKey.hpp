// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESCHEMASRESPONSEBODYRESULTPRIMARYKEY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESCHEMASRESPONSEBODYRESULTPRIMARYKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDataSourceSchemasResponseBodyResultPrimaryKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceSchemasResponseBodyResultPrimaryKey& obj) { 
      DARABONBA_PTR_TO_JSON(hasPrimaryKeyAttribute, hasPrimaryKeyAttribute_);
      DARABONBA_PTR_TO_JSON(isPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_TO_JSON(isPrimaryKeySorted, isPrimaryKeySorted_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceSchemasResponseBodyResultPrimaryKey& obj) { 
      DARABONBA_PTR_FROM_JSON(hasPrimaryKeyAttribute, hasPrimaryKeyAttribute_);
      DARABONBA_PTR_FROM_JSON(isPrimaryKey, isPrimaryKey_);
      DARABONBA_PTR_FROM_JSON(isPrimaryKeySorted, isPrimaryKeySorted_);
    };
    ListDataSourceSchemasResponseBodyResultPrimaryKey() = default ;
    ListDataSourceSchemasResponseBodyResultPrimaryKey(const ListDataSourceSchemasResponseBodyResultPrimaryKey &) = default ;
    ListDataSourceSchemasResponseBodyResultPrimaryKey(ListDataSourceSchemasResponseBodyResultPrimaryKey &&) = default ;
    ListDataSourceSchemasResponseBodyResultPrimaryKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceSchemasResponseBodyResultPrimaryKey() = default ;
    ListDataSourceSchemasResponseBodyResultPrimaryKey& operator=(const ListDataSourceSchemasResponseBodyResultPrimaryKey &) = default ;
    ListDataSourceSchemasResponseBodyResultPrimaryKey& operator=(ListDataSourceSchemasResponseBodyResultPrimaryKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasPrimaryKeyAttribute_ != nullptr
        && this->isPrimaryKey_ != nullptr && this->isPrimaryKeySorted_ != nullptr; };
    // hasPrimaryKeyAttribute Field Functions 
    bool hasHasPrimaryKeyAttribute() const { return this->hasPrimaryKeyAttribute_ != nullptr;};
    void deleteHasPrimaryKeyAttribute() { this->hasPrimaryKeyAttribute_ = nullptr;};
    inline bool hasPrimaryKeyAttribute() const { DARABONBA_PTR_GET_DEFAULT(hasPrimaryKeyAttribute_, false) };
    inline ListDataSourceSchemasResponseBodyResultPrimaryKey& setHasPrimaryKeyAttribute(bool hasPrimaryKeyAttribute) { DARABONBA_PTR_SET_VALUE(hasPrimaryKeyAttribute_, hasPrimaryKeyAttribute) };


    // isPrimaryKey Field Functions 
    bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
    void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
    inline bool isPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
    inline ListDataSourceSchemasResponseBodyResultPrimaryKey& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


    // isPrimaryKeySorted Field Functions 
    bool hasIsPrimaryKeySorted() const { return this->isPrimaryKeySorted_ != nullptr;};
    void deleteIsPrimaryKeySorted() { this->isPrimaryKeySorted_ = nullptr;};
    inline bool isPrimaryKeySorted() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKeySorted_, false) };
    inline ListDataSourceSchemasResponseBodyResultPrimaryKey& setIsPrimaryKeySorted(bool isPrimaryKeySorted) { DARABONBA_PTR_SET_VALUE(isPrimaryKeySorted_, isPrimaryKeySorted) };


  protected:
    // Indicates whether the field has the primary key attribute. Valid values: **true** and **false**.
    std::shared_ptr<bool> hasPrimaryKeyAttribute_ = nullptr;
    // Indicates whether the field is the primary key. Valid values: **true** and **false**.
    std::shared_ptr<bool> isPrimaryKey_ = nullptr;
    // Indicates whether the field can be sorted. Valid values: **true** and **false**.
    std::shared_ptr<bool> isPrimaryKeySorted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
