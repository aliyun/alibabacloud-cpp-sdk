// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTABMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListABMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Realtime, realtime_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListABMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Realtime, realtime_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(TableMetaId, tableMetaId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListABMetricsRequest() = default ;
    ListABMetricsRequest(const ListABMetricsRequest &) = default ;
    ListABMetricsRequest(ListABMetricsRequest &&) = default ;
    ListABMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABMetricsRequest() = default ;
    ListABMetricsRequest& operator=(const ListABMetricsRequest &) = default ;
    ListABMetricsRequest& operator=(ListABMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->name_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->realtime_ != nullptr && this->sceneId_ != nullptr
        && this->tableMetaId_ != nullptr && this->type_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListABMetricsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListABMetricsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListABMetricsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListABMetricsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realtime Field Functions 
    bool hasRealtime() const { return this->realtime_ != nullptr;};
    void deleteRealtime() { this->realtime_ = nullptr;};
    inline bool realtime() const { DARABONBA_PTR_GET_DEFAULT(realtime_, false) };
    inline ListABMetricsRequest& setRealtime(bool realtime) { DARABONBA_PTR_SET_VALUE(realtime_, realtime) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListABMetricsRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string tableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline ListABMetricsRequest& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListABMetricsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> realtime_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> tableMetaId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
