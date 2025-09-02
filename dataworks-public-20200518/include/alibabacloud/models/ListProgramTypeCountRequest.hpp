// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROGRAMTYPECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProgramTypeCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProgramTypeCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProgramTypeCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListProgramTypeCountRequest() = default ;
    ListProgramTypeCountRequest(const ListProgramTypeCountRequest &) = default ;
    ListProgramTypeCountRequest(ListProgramTypeCountRequest &&) = default ;
    ListProgramTypeCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProgramTypeCountRequest() = default ;
    ListProgramTypeCountRequest& operator=(const ListProgramTypeCountRequest &) = default ;
    ListProgramTypeCountRequest& operator=(ListProgramTypeCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectEnv_ != nullptr
        && this->projectId_ != nullptr; };
    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListProgramTypeCountRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProgramTypeCountRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The environment of the workspace. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
