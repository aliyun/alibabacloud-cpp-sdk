// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CascadeDelete, cascadeDelete_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CascadeDelete, cascadeDelete_);
    };
    DeleteGroupRequest() = default ;
    DeleteGroupRequest(const DeleteGroupRequest &) = default ;
    DeleteGroupRequest(DeleteGroupRequest &&) = default ;
    DeleteGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGroupRequest() = default ;
    DeleteGroupRequest& operator=(const DeleteGroupRequest &) = default ;
    DeleteGroupRequest& operator=(DeleteGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cascadeDelete_ == nullptr; };
    // cascadeDelete Field Functions 
    bool hasCascadeDelete() const { return this->cascadeDelete_ != nullptr;};
    void deleteCascadeDelete() { this->cascadeDelete_ = nullptr;};
    inline string getCascadeDelete() const { DARABONBA_PTR_GET_DEFAULT(cascadeDelete_, "") };
    inline DeleteGroupRequest& setCascadeDelete(string cascadeDelete) { DARABONBA_PTR_SET_VALUE(cascadeDelete_, cascadeDelete) };


  protected:
    // Specifies whether to perform a cascade delete. If enabled, deleting the service group automatically deletes all services within the service group. This feature is disabled by default.
    shared_ptr<string> cascadeDelete_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
