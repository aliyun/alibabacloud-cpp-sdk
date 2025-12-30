// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPROJECTHASDEPENDENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKPROJECTHASDEPENDENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CheckProjectHasDependencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckProjectHasDependencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckProjectHasDependencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CheckProjectHasDependencyRequest() = default ;
    CheckProjectHasDependencyRequest(const CheckProjectHasDependencyRequest &) = default ;
    CheckProjectHasDependencyRequest(CheckProjectHasDependencyRequest &&) = default ;
    CheckProjectHasDependencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckProjectHasDependencyRequest() = default ;
    CheckProjectHasDependencyRequest& operator=(const CheckProjectHasDependencyRequest &) = default ;
    CheckProjectHasDependencyRequest& operator=(CheckProjectHasDependencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->opTenantId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CheckProjectHasDependencyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CheckProjectHasDependencyRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
