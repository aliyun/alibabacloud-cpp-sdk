// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
    };
    QueryAvatarProjectRequest() = default ;
    QueryAvatarProjectRequest(const QueryAvatarProjectRequest &) = default ;
    QueryAvatarProjectRequest(QueryAvatarProjectRequest &&) = default ;
    QueryAvatarProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarProjectRequest() = default ;
    QueryAvatarProjectRequest& operator=(const QueryAvatarProjectRequest &) = default ;
    QueryAvatarProjectRequest& operator=(QueryAvatarProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline QueryAvatarProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
