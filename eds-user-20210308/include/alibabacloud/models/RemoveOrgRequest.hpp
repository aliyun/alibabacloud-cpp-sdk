// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEORGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemoveOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
    };
    RemoveOrgRequest() = default ;
    RemoveOrgRequest(const RemoveOrgRequest &) = default ;
    RemoveOrgRequest(RemoveOrgRequest &&) = default ;
    RemoveOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveOrgRequest() = default ;
    RemoveOrgRequest& operator=(const RemoveOrgRequest &) = default ;
    RemoveOrgRequest& operator=(RemoveOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgId_ != nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline RemoveOrgRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
