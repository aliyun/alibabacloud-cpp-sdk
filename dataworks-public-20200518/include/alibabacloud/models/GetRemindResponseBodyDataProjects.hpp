// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATAPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATAPROJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetRemindResponseBodyDataProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemindResponseBodyDataProjects& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemindResponseBodyDataProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetRemindResponseBodyDataProjects() = default ;
    GetRemindResponseBodyDataProjects(const GetRemindResponseBodyDataProjects &) = default ;
    GetRemindResponseBodyDataProjects(GetRemindResponseBodyDataProjects &&) = default ;
    GetRemindResponseBodyDataProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemindResponseBodyDataProjects() = default ;
    GetRemindResponseBodyDataProjects& operator=(const GetRemindResponseBodyDataProjects &) = default ;
    GetRemindResponseBodyDataProjects& operator=(GetRemindResponseBodyDataProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetRemindResponseBodyDataProjects& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
