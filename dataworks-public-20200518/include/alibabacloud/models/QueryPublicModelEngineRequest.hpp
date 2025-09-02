// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUBLICMODELENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUBLICMODELENGINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryPublicModelEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPublicModelEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPublicModelEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    QueryPublicModelEngineRequest() = default ;
    QueryPublicModelEngineRequest(const QueryPublicModelEngineRequest &) = default ;
    QueryPublicModelEngineRequest(QueryPublicModelEngineRequest &&) = default ;
    QueryPublicModelEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPublicModelEngineRequest() = default ;
    QueryPublicModelEngineRequest& operator=(const QueryPublicModelEngineRequest &) = default ;
    QueryPublicModelEngineRequest& operator=(QueryPublicModelEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->text_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline QueryPublicModelEngineRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline QueryPublicModelEngineRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    // The FML statement that is used to query information about objects that are created in Data Modeling. For more information, see [Use FML statements to configure and manage data tables](https://help.aliyun.com/document_detail/298128.html). Only SHOW statements are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
