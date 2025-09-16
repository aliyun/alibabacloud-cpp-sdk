// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYRESULTDATASOURCEINFOSAROCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYRESULTDATASOURCEINFOSAROCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListIndexesResponseBodyResultDataSourceInfoSaroConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBodyResultDataSourceInfoSaroConfig& obj) { 
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBodyResultDataSourceInfoSaroConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
    };
    ListIndexesResponseBodyResultDataSourceInfoSaroConfig() = default ;
    ListIndexesResponseBodyResultDataSourceInfoSaroConfig(const ListIndexesResponseBodyResultDataSourceInfoSaroConfig &) = default ;
    ListIndexesResponseBodyResultDataSourceInfoSaroConfig(ListIndexesResponseBodyResultDataSourceInfoSaroConfig &&) = default ;
    ListIndexesResponseBodyResultDataSourceInfoSaroConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBodyResultDataSourceInfoSaroConfig() = default ;
    ListIndexesResponseBodyResultDataSourceInfoSaroConfig& operator=(const ListIndexesResponseBodyResultDataSourceInfoSaroConfig &) = default ;
    ListIndexesResponseBodyResultDataSourceInfoSaroConfig& operator=(ListIndexesResponseBodyResultDataSourceInfoSaroConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->tableName_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIndexesResponseBodyResultDataSourceInfoSaroConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListIndexesResponseBodyResultDataSourceInfoSaroConfig& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The namespace of the SARO data source.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the SARO table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
