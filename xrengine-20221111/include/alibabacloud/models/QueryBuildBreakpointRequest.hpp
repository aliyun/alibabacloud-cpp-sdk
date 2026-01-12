// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUILDBREAKPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUILDBREAKPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class QueryBuildBreakpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBuildBreakpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBuildBreakpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    QueryBuildBreakpointRequest() = default ;
    QueryBuildBreakpointRequest(const QueryBuildBreakpointRequest &) = default ;
    QueryBuildBreakpointRequest(QueryBuildBreakpointRequest &&) = default ;
    QueryBuildBreakpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBuildBreakpointRequest() = default ;
    QueryBuildBreakpointRequest& operator=(const QueryBuildBreakpointRequest &) = default ;
    QueryBuildBreakpointRequest& operator=(QueryBuildBreakpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr
        && this->projectId_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline QueryBuildBreakpointRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline QueryBuildBreakpointRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
