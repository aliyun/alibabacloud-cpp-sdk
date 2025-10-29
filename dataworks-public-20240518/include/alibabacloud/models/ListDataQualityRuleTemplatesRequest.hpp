// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRuleTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRuleTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreationSource, creationSource_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRuleTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationSource, creationSource_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListDataQualityRuleTemplatesRequest() = default ;
    ListDataQualityRuleTemplatesRequest(const ListDataQualityRuleTemplatesRequest &) = default ;
    ListDataQualityRuleTemplatesRequest(ListDataQualityRuleTemplatesRequest &&) = default ;
    ListDataQualityRuleTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRuleTemplatesRequest() = default ;
    ListDataQualityRuleTemplatesRequest& operator=(const ListDataQualityRuleTemplatesRequest &) = default ;
    ListDataQualityRuleTemplatesRequest& operator=(ListDataQualityRuleTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationSource_ == nullptr
        && return this->directoryPath_ == nullptr && return this->name_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->projectId_ == nullptr; };
    // creationSource Field Functions 
    bool hasCreationSource() const { return this->creationSource_ != nullptr;};
    void deleteCreationSource() { this->creationSource_ = nullptr;};
    inline string creationSource() const { DARABONBA_PTR_GET_DEFAULT(creationSource_, "") };
    inline ListDataQualityRuleTemplatesRequest& setCreationSource(string creationSource) { DARABONBA_PTR_SET_VALUE(creationSource_, creationSource) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string directoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline ListDataQualityRuleTemplatesRequest& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataQualityRuleTemplatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityRuleTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityRuleTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityRuleTemplatesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The source of the template. This parameter is required. Valid values:
    // 
    // *   System
    // *   UserDefined
    std::shared_ptr<string> creationSource_ = nullptr;
    // The directory in which the template is stored. Slashes (/) are used to separate directory levels. The name of each directory level can be up to 1,024 characters in length. It cannot contain whitespace characters or slashes (/).
    std::shared_ptr<string> directoryPath_ = nullptr;
    // The name of the template. If you want to query a system template, set this parameter to the name of the system template. Fuzzy match is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
