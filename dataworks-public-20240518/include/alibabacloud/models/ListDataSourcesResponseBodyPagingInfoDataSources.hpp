// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYPAGINGINFODATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYPAGINGINFODATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourcesResponseBodyPagingInfoDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyPagingInfoDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyPagingInfoDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDataSourcesResponseBodyPagingInfoDataSources() = default ;
    ListDataSourcesResponseBodyPagingInfoDataSources(const ListDataSourcesResponseBodyPagingInfoDataSources &) = default ;
    ListDataSourcesResponseBodyPagingInfoDataSources(ListDataSourcesResponseBodyPagingInfoDataSources &&) = default ;
    ListDataSourcesResponseBodyPagingInfoDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyPagingInfoDataSources() = default ;
    ListDataSourcesResponseBodyPagingInfoDataSources& operator=(const ListDataSourcesResponseBodyPagingInfoDataSources &) = default ;
    ListDataSourcesResponseBodyPagingInfoDataSources& operator=(ListDataSourcesResponseBodyPagingInfoDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSource_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource> & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource>) };
    inline vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource> dataSource() { DARABONBA_PTR_GET(dataSource_, vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource>) };
    inline ListDataSourcesResponseBodyPagingInfoDataSources& setDataSource(const vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource> & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListDataSourcesResponseBodyPagingInfoDataSources& setDataSource(vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource> && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The data sources. Each element is the information of a single data source with a unique data source ID.
    std::shared_ptr<vector<Models::ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource>> dataSource_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
