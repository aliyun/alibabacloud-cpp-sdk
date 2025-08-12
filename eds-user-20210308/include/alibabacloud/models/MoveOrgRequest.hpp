// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEORGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class MoveOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewParentOrgId, newParentOrgId_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewParentOrgId, newParentOrgId_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
    };
    MoveOrgRequest() = default ;
    MoveOrgRequest(const MoveOrgRequest &) = default ;
    MoveOrgRequest(MoveOrgRequest &&) = default ;
    MoveOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveOrgRequest() = default ;
    MoveOrgRequest& operator=(const MoveOrgRequest &) = default ;
    MoveOrgRequest& operator=(MoveOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newParentOrgId_ != nullptr
        && this->orgId_ != nullptr; };
    // newParentOrgId Field Functions 
    bool hasNewParentOrgId() const { return this->newParentOrgId_ != nullptr;};
    void deleteNewParentOrgId() { this->newParentOrgId_ = nullptr;};
    inline string newParentOrgId() const { DARABONBA_PTR_GET_DEFAULT(newParentOrgId_, "") };
    inline MoveOrgRequest& setNewParentOrgId(string newParentOrgId) { DARABONBA_PTR_SET_VALUE(newParentOrgId_, newParentOrgId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline MoveOrgRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> newParentOrgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
