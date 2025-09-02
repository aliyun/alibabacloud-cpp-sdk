// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODYDATADATAENTITYLISTRELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODYDATADATAENTITYLISTRELATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListLineageResponseBodyDataDataEntityListRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageResponseBodyDataDataEntityListRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Datasource, datasource_);
      DARABONBA_PTR_TO_JSON(Guid, guid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageResponseBodyDataDataEntityListRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Datasource, datasource_);
      DARABONBA_PTR_FROM_JSON(Guid, guid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLineageResponseBodyDataDataEntityListRelationList() = default ;
    ListLineageResponseBodyDataDataEntityListRelationList(const ListLineageResponseBodyDataDataEntityListRelationList &) = default ;
    ListLineageResponseBodyDataDataEntityListRelationList(ListLineageResponseBodyDataDataEntityListRelationList &&) = default ;
    ListLineageResponseBodyDataDataEntityListRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageResponseBodyDataDataEntityListRelationList() = default ;
    ListLineageResponseBodyDataDataEntityListRelationList& operator=(const ListLineageResponseBodyDataDataEntityListRelationList &) = default ;
    ListLineageResponseBodyDataDataEntityListRelationList& operator=(ListLineageResponseBodyDataDataEntityListRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->datasource_ != nullptr && this->guid_ != nullptr && this->type_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ListLineageResponseBodyDataDataEntityListRelationList& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // datasource Field Functions 
    bool hasDatasource() const { return this->datasource_ != nullptr;};
    void deleteDatasource() { this->datasource_ = nullptr;};
    inline string datasource() const { DARABONBA_PTR_GET_DEFAULT(datasource_, "") };
    inline ListLineageResponseBodyDataDataEntityListRelationList& setDatasource(string datasource) { DARABONBA_PTR_SET_VALUE(datasource_, datasource) };


    // guid Field Functions 
    bool hasGuid() const { return this->guid_ != nullptr;};
    void deleteGuid() { this->guid_ = nullptr;};
    inline string guid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
    inline ListLineageResponseBodyDataDataEntityListRelationList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLineageResponseBodyDataDataEntityListRelationList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The data channel. Valid values:
    // 
    // *   **FIRST_PARTY: DataWorks platform**
    // *   **THIRD_PARTY: user registration**
    std::shared_ptr<string> channel_ = nullptr;
    // The data source.
    std::shared_ptr<string> datasource_ = nullptr;
    // The unique relationship ID.
    std::shared_ptr<string> guid_ = nullptr;
    // The task type, which is used to describe the relationship between entities, such as SQL-based calculation, mapping based on report fields, or API operation definition.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
