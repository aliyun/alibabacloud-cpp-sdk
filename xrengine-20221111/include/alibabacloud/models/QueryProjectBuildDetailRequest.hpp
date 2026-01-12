// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROJECTBUILDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROJECTBUILDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class QueryProjectBuildDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProjectBuildDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProjectBuildDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    QueryProjectBuildDetailRequest() = default ;
    QueryProjectBuildDetailRequest(const QueryProjectBuildDetailRequest &) = default ;
    QueryProjectBuildDetailRequest(QueryProjectBuildDetailRequest &&) = default ;
    QueryProjectBuildDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProjectBuildDetailRequest() = default ;
    QueryProjectBuildDetailRequest& operator=(const QueryProjectBuildDetailRequest &) = default ;
    QueryProjectBuildDetailRequest& operator=(QueryProjectBuildDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline QueryProjectBuildDetailRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
