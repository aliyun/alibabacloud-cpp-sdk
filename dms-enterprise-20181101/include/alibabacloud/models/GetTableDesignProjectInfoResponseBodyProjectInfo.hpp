// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFORESPONSEBODYPROJECTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDESIGNPROJECTINFORESPONSEBODYPROJECTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDesignProjectInfoResponseBodyProjectInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDesignProjectInfoResponseBodyProjectInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BaseDatabase, baseDatabase_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDesignProjectInfoResponseBodyProjectInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseDatabase, baseDatabase_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetTableDesignProjectInfoResponseBodyProjectInfo() = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfo(const GetTableDesignProjectInfoResponseBodyProjectInfo &) = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfo(GetTableDesignProjectInfoResponseBodyProjectInfo &&) = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDesignProjectInfoResponseBodyProjectInfo() = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfo& operator=(const GetTableDesignProjectInfoResponseBodyProjectInfo &) = default ;
    GetTableDesignProjectInfoResponseBodyProjectInfo& operator=(GetTableDesignProjectInfoResponseBodyProjectInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseDatabase_ != nullptr
        && this->creatorId_ != nullptr && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->orderId_ != nullptr
        && this->projectId_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // baseDatabase Field Functions 
    bool hasBaseDatabase() const { return this->baseDatabase_ != nullptr;};
    void deleteBaseDatabase() { this->baseDatabase_ = nullptr;};
    inline const Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase & baseDatabase() const { DARABONBA_PTR_GET_CONST(baseDatabase_, Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase) };
    inline Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase baseDatabase() { DARABONBA_PTR_GET(baseDatabase_, Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setBaseDatabase(const Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase & baseDatabase) { DARABONBA_PTR_SET_VALUE(baseDatabase_, baseDatabase) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setBaseDatabase(Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase && baseDatabase) { DARABONBA_PTR_SET_RVALUE(baseDatabase_, baseDatabase) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTableDesignProjectInfoResponseBodyProjectInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The information about the change base database of the schema design ticket.
    std::shared_ptr<Models::GetTableDesignProjectInfoResponseBodyProjectInfoBaseDatabase> baseDatabase_ = nullptr;
    // The ID of the user who created the ticket.
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    // The description of the schema design project.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the ticket was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the ticket was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ticket ID.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The state of the schema design project. Valid values:
    // 
    // *   **DESIGN**: The schema is being designed.
    // *   **PUBLISHED**: The schema is published.
    // *   **CLOSE**: The ticket is closed.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the schema design project.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
