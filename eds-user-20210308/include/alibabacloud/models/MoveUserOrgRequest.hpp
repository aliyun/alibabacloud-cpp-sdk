// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEUSERORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEUSERORGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class MoveUserOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveUserOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveUserOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
    };
    MoveUserOrgRequest() = default ;
    MoveUserOrgRequest(const MoveUserOrgRequest &) = default ;
    MoveUserOrgRequest(MoveUserOrgRequest &&) = default ;
    MoveUserOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveUserOrgRequest() = default ;
    MoveUserOrgRequest& operator=(const MoveUserOrgRequest &) = default ;
    MoveUserOrgRequest& operator=(MoveUserOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endUserIds_ != nullptr
        && this->orgId_ != nullptr; };
    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline MoveUserOrgRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline MoveUserOrgRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline MoveUserOrgRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
