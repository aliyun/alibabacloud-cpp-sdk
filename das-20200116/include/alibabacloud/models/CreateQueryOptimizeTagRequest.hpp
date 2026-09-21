// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUERYOPTIMIZETAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUERYOPTIMIZETAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateQueryOptimizeTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueryOptimizeTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SqlIds, sqlIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueryOptimizeTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SqlIds, sqlIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateQueryOptimizeTagRequest() = default ;
    CreateQueryOptimizeTagRequest(const CreateQueryOptimizeTagRequest &) = default ;
    CreateQueryOptimizeTagRequest(CreateQueryOptimizeTagRequest &&) = default ;
    CreateQueryOptimizeTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueryOptimizeTagRequest() = default ;
    CreateQueryOptimizeTagRequest& operator=(const CreateQueryOptimizeTagRequest &) = default ;
    CreateQueryOptimizeTagRequest& operator=(CreateQueryOptimizeTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comments_ == nullptr
        && this->engine_ == nullptr && this->instanceId_ == nullptr && this->sqlIds_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline CreateQueryOptimizeTagRequest& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateQueryOptimizeTagRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateQueryOptimizeTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlIds Field Functions 
    bool hasSqlIds() const { return this->sqlIds_ != nullptr;};
    void deleteSqlIds() { this->sqlIds_ = nullptr;};
    inline string getSqlIds() const { DARABONBA_PTR_GET_DEFAULT(sqlIds_, "") };
    inline CreateQueryOptimizeTagRequest& setSqlIds(string sqlIds) { DARABONBA_PTR_SET_VALUE(sqlIds_, sqlIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreateQueryOptimizeTagRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateQueryOptimizeTagRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The remarks.
    // 
    // The value must be 1 to 300 characters in length.
    shared_ptr<string> comments_ {};
    // The database engine. Valid values:
    // 
    // - **MySQL**: RDS MySQL
    // - **PolarDBMySQL**: PolarDB for MySQL
    // - **PostgreSQL**: RDS PostgreSQL
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The SQL template ID. You can call the [GetQueryOptimizeDataStats](https://help.aliyun.com/document_detail/405261.html) operation to query SQL template IDs. You can specify multiple template IDs separated by commas (,) to add tags in batches.
    // 
    // This parameter is required.
    shared_ptr<string> sqlIds_ {};
    // The status of the **Tags** request parameter.
    // 
    // - **0**: Clears all tags for the SQL template IDs specified by **SqlIds** and ignores the **Tags** parameter.
    // - **1**: Sets the tags for the SQL template IDs specified by **SqlIds** to the values specified by **Tags**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
    // The SQL tag. You can specify multiple values separated by commas (,).
    // 
    // - **DAS_IMPORTANT**: important SQL.
    // - **DAS_NOT_IMPORTANT**: unimportant SQL.
    // - **USER_IGNORE**: optimization not required.
    // - **DAS_IN_PLAN**: scheduled for optimization.
    // 
    // This parameter is required.
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
