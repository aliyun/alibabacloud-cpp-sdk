// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DROPPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DROPPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class DropProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DropProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DropProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DropProjectRequest() = default ;
    DropProjectRequest(const DropProjectRequest &) = default ;
    DropProjectRequest(DropProjectRequest &&) = default ;
    DropProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DropProjectRequest() = default ;
    DropProjectRequest& operator=(const DropProjectRequest &) = default ;
    DropProjectRequest& operator=(DropProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DropProjectRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
