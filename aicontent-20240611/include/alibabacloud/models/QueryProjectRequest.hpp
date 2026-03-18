// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class QueryProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
    };
    QueryProjectRequest() = default ;
    QueryProjectRequest(const QueryProjectRequest &) = default ;
    QueryProjectRequest(QueryProjectRequest &&) = default ;
    QueryProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProjectRequest() = default ;
    QueryProjectRequest& operator=(const QueryProjectRequest &) = default ;
    QueryProjectRequest& operator=(QueryProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline QueryProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
