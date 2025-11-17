// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODYRESULTDATADIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODYRESULTDATADIRECTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetListResponseBodyResultDataDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetListResponseBodyResultDataDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathId, pathId_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetListResponseBodyResultDataDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathId, pathId_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
    };
    QueryDatasetListResponseBodyResultDataDirectory() = default ;
    QueryDatasetListResponseBodyResultDataDirectory(const QueryDatasetListResponseBodyResultDataDirectory &) = default ;
    QueryDatasetListResponseBodyResultDataDirectory(QueryDatasetListResponseBodyResultDataDirectory &&) = default ;
    QueryDatasetListResponseBodyResultDataDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetListResponseBodyResultDataDirectory() = default ;
    QueryDatasetListResponseBodyResultDataDirectory& operator=(const QueryDatasetListResponseBodyResultDataDirectory &) = default ;
    QueryDatasetListResponseBodyResultDataDirectory& operator=(QueryDatasetListResponseBodyResultDataDirectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->pathId_ == nullptr && return this->pathName_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryDatasetListResponseBodyResultDataDirectory& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDatasetListResponseBodyResultDataDirectory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathId Field Functions 
    bool hasPathId() const { return this->pathId_ != nullptr;};
    void deletePathId() { this->pathId_ = nullptr;};
    inline string pathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
    inline QueryDatasetListResponseBodyResultDataDirectory& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline QueryDatasetListResponseBodyResultDataDirectory& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


  protected:
    // The ID of the directory path.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the data source.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> pathId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> pathName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
