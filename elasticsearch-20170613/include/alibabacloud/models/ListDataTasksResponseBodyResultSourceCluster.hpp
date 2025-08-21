// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODYRESULTSOURCECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_LISTDATATASKSRESPONSEBODYRESULTSOURCECLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDataTasksResponseBodyResultSourceCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataTasksResponseBodyResultSourceCluster& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(mapping, mapping_);
      DARABONBA_PTR_TO_JSON(routing, routing_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataTasksResponseBodyResultSourceCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(mapping, mapping_);
      DARABONBA_PTR_FROM_JSON(routing, routing_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListDataTasksResponseBodyResultSourceCluster() = default ;
    ListDataTasksResponseBodyResultSourceCluster(const ListDataTasksResponseBodyResultSourceCluster &) = default ;
    ListDataTasksResponseBodyResultSourceCluster(ListDataTasksResponseBodyResultSourceCluster &&) = default ;
    ListDataTasksResponseBodyResultSourceCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataTasksResponseBodyResultSourceCluster() = default ;
    ListDataTasksResponseBodyResultSourceCluster& operator=(const ListDataTasksResponseBodyResultSourceCluster &) = default ;
    ListDataTasksResponseBodyResultSourceCluster& operator=(ListDataTasksResponseBodyResultSourceCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceType_ != nullptr
        && this->index_ != nullptr && this->mapping_ != nullptr && this->routing_ != nullptr && this->settings_ != nullptr && this->type_ != nullptr; };
    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDataTasksResponseBodyResultSourceCluster& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline ListDataTasksResponseBodyResultSourceCluster& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // mapping Field Functions 
    bool hasMapping() const { return this->mapping_ != nullptr;};
    void deleteMapping() { this->mapping_ = nullptr;};
    inline string mapping() const { DARABONBA_PTR_GET_DEFAULT(mapping_, "") };
    inline ListDataTasksResponseBodyResultSourceCluster& setMapping(string mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };


    // routing Field Functions 
    bool hasRouting() const { return this->routing_ != nullptr;};
    void deleteRouting() { this->routing_ = nullptr;};
    inline string routing() const { DARABONBA_PTR_GET_DEFAULT(routing_, "") };
    inline ListDataTasksResponseBodyResultSourceCluster& setRouting(string routing) { DARABONBA_PTR_SET_VALUE(routing_, routing) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline string settings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
    inline ListDataTasksResponseBodyResultSourceCluster& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataTasksResponseBodyResultSourceCluster& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the source cluster. Default value: elasticsearch.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The index whose data you want to migrate.
    std::shared_ptr<string> index_ = nullptr;
    // The Mapping configuration of the cluster.
    std::shared_ptr<string> mapping_ = nullptr;
    // The routing field to index the table. It is set to the primary key by default.
    std::shared_ptr<string> routing_ = nullptr;
    // The Settings of the cluster.
    std::shared_ptr<string> settings_ = nullptr;
    // The type of the destination index.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
