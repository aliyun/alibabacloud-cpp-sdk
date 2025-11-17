// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTDIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTDIRECTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBodyResultDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBodyResultDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathId, pathId_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBodyResultDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathId, pathId_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
    };
    QueryDatasetInfoResponseBodyResultDirectory() = default ;
    QueryDatasetInfoResponseBodyResultDirectory(const QueryDatasetInfoResponseBodyResultDirectory &) = default ;
    QueryDatasetInfoResponseBodyResultDirectory(QueryDatasetInfoResponseBodyResultDirectory &&) = default ;
    QueryDatasetInfoResponseBodyResultDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBodyResultDirectory() = default ;
    QueryDatasetInfoResponseBodyResultDirectory& operator=(const QueryDatasetInfoResponseBodyResultDirectory &) = default ;
    QueryDatasetInfoResponseBodyResultDirectory& operator=(QueryDatasetInfoResponseBodyResultDirectory &&) = default ;
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
    inline QueryDatasetInfoResponseBodyResultDirectory& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDatasetInfoResponseBodyResultDirectory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathId Field Functions 
    bool hasPathId() const { return this->pathId_ != nullptr;};
    void deletePathId() { this->pathId_ = nullptr;};
    inline string pathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
    inline QueryDatasetInfoResponseBodyResultDirectory& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string pathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline QueryDatasetInfoResponseBodyResultDirectory& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


  protected:
    // Test directory
    std::shared_ptr<string> id_ = nullptr;
    // Test directory
    std::shared_ptr<string> name_ = nullptr;
    // The information about the directory to which the dataset belongs.
    std::shared_ptr<string> pathId_ = nullptr;
    // The path of the directory ID, for example, aa/bb/cc/dd.
    std::shared_ptr<string> pathName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
