// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDITINGPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDITINGPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteEditingProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEditingProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEditingProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
    };
    DeleteEditingProjectsRequest() = default ;
    DeleteEditingProjectsRequest(const DeleteEditingProjectsRequest &) = default ;
    DeleteEditingProjectsRequest(DeleteEditingProjectsRequest &&) = default ;
    DeleteEditingProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEditingProjectsRequest() = default ;
    DeleteEditingProjectsRequest& operator=(const DeleteEditingProjectsRequest &) = default ;
    DeleteEditingProjectsRequest& operator=(DeleteEditingProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectIds_ != nullptr; };
    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string projectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline DeleteEditingProjectsRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


  protected:
    // The ID of the online editing project. You can specify multiple IDs separated with commas (,).
    std::shared_ptr<string> projectIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
