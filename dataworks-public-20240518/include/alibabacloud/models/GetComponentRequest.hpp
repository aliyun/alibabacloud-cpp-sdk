// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetComponentRequest() = default ;
    GetComponentRequest(const GetComponentRequest &) = default ;
    GetComponentRequest(GetComponentRequest &&) = default ;
    GetComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComponentRequest() = default ;
    GetComponentRequest& operator=(const GetComponentRequest &) = default ;
    GetComponentRequest& operator=(GetComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->projectId_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline GetComponentRequest& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetComponentRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> componentId_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
