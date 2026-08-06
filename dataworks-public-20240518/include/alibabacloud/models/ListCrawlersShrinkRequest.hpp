// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRAWLERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCRAWLERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrawlersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrawlersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrawlersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCrawlersShrinkRequest() = default ;
    ListCrawlersShrinkRequest(const ListCrawlersShrinkRequest &) = default ;
    ListCrawlersShrinkRequest(ListCrawlersShrinkRequest &&) = default ;
    ListCrawlersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrawlersShrinkRequest() = default ;
    ListCrawlersShrinkRequest& operator=(const ListCrawlersShrinkRequest &) = default ;
    ListCrawlersShrinkRequest& operator=(ListCrawlersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceIdsShrink_ == nullptr
        && this->envType_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->projectId_ == nullptr && this->type_ == nullptr; };
    // dataSourceIdsShrink Field Functions 
    bool hasDataSourceIdsShrink() const { return this->dataSourceIdsShrink_ != nullptr;};
    void deleteDataSourceIdsShrink() { this->dataSourceIdsShrink_ = nullptr;};
    inline string getDataSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceIdsShrink_, "") };
    inline ListCrawlersShrinkRequest& setDataSourceIdsShrink(string dataSourceIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceIdsShrink_, dataSourceIdsShrink) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListCrawlersShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCrawlersShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListCrawlersShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCrawlersShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCrawlersShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCrawlersShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCrawlersShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> dataSourceIdsShrink_ {};
    shared_ptr<string> envType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> projectId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
