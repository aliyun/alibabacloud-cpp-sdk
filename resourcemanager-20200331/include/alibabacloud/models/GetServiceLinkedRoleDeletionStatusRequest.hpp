// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELINKEDROLEDELETIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetServiceLinkedRoleDeletionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLinkedRoleDeletionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionTaskId, deletionTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLinkedRoleDeletionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionTaskId, deletionTaskId_);
    };
    GetServiceLinkedRoleDeletionStatusRequest() = default ;
    GetServiceLinkedRoleDeletionStatusRequest(const GetServiceLinkedRoleDeletionStatusRequest &) = default ;
    GetServiceLinkedRoleDeletionStatusRequest(GetServiceLinkedRoleDeletionStatusRequest &&) = default ;
    GetServiceLinkedRoleDeletionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLinkedRoleDeletionStatusRequest() = default ;
    GetServiceLinkedRoleDeletionStatusRequest& operator=(const GetServiceLinkedRoleDeletionStatusRequest &) = default ;
    GetServiceLinkedRoleDeletionStatusRequest& operator=(GetServiceLinkedRoleDeletionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionTaskId_ == nullptr; };
    // deletionTaskId Field Functions 
    bool hasDeletionTaskId() const { return this->deletionTaskId_ != nullptr;};
    void deleteDeletionTaskId() { this->deletionTaskId_ = nullptr;};
    inline string deletionTaskId() const { DARABONBA_PTR_GET_DEFAULT(deletionTaskId_, "") };
    inline GetServiceLinkedRoleDeletionStatusRequest& setDeletionTaskId(string deletionTaskId) { DARABONBA_PTR_SET_VALUE(deletionTaskId_, deletionTaskId) };


  protected:
    // The ID of the deletion task.
    std::shared_ptr<string> deletionTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
