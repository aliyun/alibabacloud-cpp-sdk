// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTDATASOURCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULTDATASOURCEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyResultDataSourceDetailsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstancesResponseBodyResultDataSourceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyResultDataSourceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyResultDataSourceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListInstancesResponseBodyResultDataSourceDetails() = default ;
    ListInstancesResponseBodyResultDataSourceDetails(const ListInstancesResponseBodyResultDataSourceDetails &) = default ;
    ListInstancesResponseBodyResultDataSourceDetails(ListInstancesResponseBodyResultDataSourceDetails &&) = default ;
    ListInstancesResponseBodyResultDataSourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyResultDataSourceDetails() = default ;
    ListInstancesResponseBodyResultDataSourceDetails& operator=(const ListInstancesResponseBodyResultDataSourceDetails &) = default ;
    ListInstancesResponseBodyResultDataSourceDetails& operator=(ListInstancesResponseBodyResultDataSourceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->indexName_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ListInstancesResponseBodyResultDataSourceDetailsConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ListInstancesResponseBodyResultDataSourceDetailsConfig) };
    inline Models::ListInstancesResponseBodyResultDataSourceDetailsConfig config() { DARABONBA_PTR_GET(config_, Models::ListInstancesResponseBodyResultDataSourceDetailsConfig) };
    inline ListInstancesResponseBodyResultDataSourceDetails& setConfig(const Models::ListInstancesResponseBodyResultDataSourceDetailsConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListInstancesResponseBodyResultDataSourceDetails& setConfig(Models::ListInstancesResponseBodyResultDataSourceDetailsConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ListInstancesResponseBodyResultDataSourceDetails& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInstancesResponseBodyResultDataSourceDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListInstancesResponseBodyResultDataSourceDetailsConfig> config_ = nullptr;
    std::shared_ptr<string> indexName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
