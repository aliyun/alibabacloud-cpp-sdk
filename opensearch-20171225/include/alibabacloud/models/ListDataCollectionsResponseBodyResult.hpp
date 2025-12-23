// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACOLLECTIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACOLLECTIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListDataCollectionsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCollectionsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(dataCollectionType, dataCollectionType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(industryName, industryName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sundialId, sundialId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCollectionsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(dataCollectionType, dataCollectionType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(industryName, industryName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sundialId, sundialId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ListDataCollectionsResponseBodyResult() = default ;
    ListDataCollectionsResponseBodyResult(const ListDataCollectionsResponseBodyResult &) = default ;
    ListDataCollectionsResponseBodyResult(ListDataCollectionsResponseBodyResult &&) = default ;
    ListDataCollectionsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCollectionsResponseBodyResult() = default ;
    ListDataCollectionsResponseBodyResult& operator=(const ListDataCollectionsResponseBodyResult &) = default ;
    ListDataCollectionsResponseBodyResult& operator=(ListDataCollectionsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->created_ == nullptr
        && return this->dataCollectionType_ == nullptr && return this->id_ == nullptr && return this->industryName_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr
        && return this->sundialId_ == nullptr && return this->type_ == nullptr && return this->updated_ == nullptr; };
    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ListDataCollectionsResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // dataCollectionType Field Functions 
    bool hasDataCollectionType() const { return this->dataCollectionType_ != nullptr;};
    void deleteDataCollectionType() { this->dataCollectionType_ = nullptr;};
    inline string dataCollectionType() const { DARABONBA_PTR_GET_DEFAULT(dataCollectionType_, "") };
    inline ListDataCollectionsResponseBodyResult& setDataCollectionType(string dataCollectionType) { DARABONBA_PTR_SET_VALUE(dataCollectionType_, dataCollectionType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListDataCollectionsResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // industryName Field Functions 
    bool hasIndustryName() const { return this->industryName_ != nullptr;};
    void deleteIndustryName() { this->industryName_ = nullptr;};
    inline string industryName() const { DARABONBA_PTR_GET_DEFAULT(industryName_, "") };
    inline ListDataCollectionsResponseBodyResult& setIndustryName(string industryName) { DARABONBA_PTR_SET_VALUE(industryName_, industryName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataCollectionsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDataCollectionsResponseBodyResult& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // sundialId Field Functions 
    bool hasSundialId() const { return this->sundialId_ != nullptr;};
    void deleteSundialId() { this->sundialId_ = nullptr;};
    inline string sundialId() const { DARABONBA_PTR_GET_DEFAULT(sundialId_, "") };
    inline ListDataCollectionsResponseBodyResult& setSundialId(string sundialId) { DARABONBA_PTR_SET_VALUE(sundialId_, sundialId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataCollectionsResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ListDataCollectionsResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The time when the task was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // The type of data collected. Valid values:
    // 
    // *   behavior: behavioral data.
    // *   item_info: project information.
    // *   industry_specific: industry-specific data.
    std::shared_ptr<string> dataCollectionType_ = nullptr;
    // The data collection ID.
    std::shared_ptr<string> id_ = nullptr;
    // The industry name. Valid values:
    // 
    // *   general
    // *   ecommerce
    std::shared_ptr<string> industryName_ = nullptr;
    // The name of the data collection task.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the data collection feature. Valid values:
    // 
    // *   0: The feature is disabled.
    // *   1: The feature is being enabled.
    // *   2: The feature is enabled.
    // *   3: The feature failed to be enabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The sundial ID.
    std::shared_ptr<string> sundialId_ = nullptr;
    // The type of the source from which data was collected. Valid values:
    // 
    // *   server
    // *   web
    // *   app
    // 
    // Only server is supported.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the data collection task was updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
