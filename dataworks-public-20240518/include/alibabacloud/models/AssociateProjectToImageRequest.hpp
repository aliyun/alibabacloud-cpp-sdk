// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEPROJECTTOIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEPROJECTTOIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class AssociateProjectToImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateProjectToImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateProjectToImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    AssociateProjectToImageRequest() = default ;
    AssociateProjectToImageRequest(const AssociateProjectToImageRequest &) = default ;
    AssociateProjectToImageRequest(AssociateProjectToImageRequest &&) = default ;
    AssociateProjectToImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateProjectToImageRequest() = default ;
    AssociateProjectToImageRequest& operator=(const AssociateProjectToImageRequest &) = default ;
    AssociateProjectToImageRequest& operator=(AssociateProjectToImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->projectId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline AssociateProjectToImageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AssociateProjectToImageRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
