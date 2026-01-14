// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALMENUAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListPortalMenuAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalMenuAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPortalId, dataPortalId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalMenuAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPortalId, dataPortalId_);
    };
    ListPortalMenuAuthorizationRequest() = default ;
    ListPortalMenuAuthorizationRequest(const ListPortalMenuAuthorizationRequest &) = default ;
    ListPortalMenuAuthorizationRequest(ListPortalMenuAuthorizationRequest &&) = default ;
    ListPortalMenuAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalMenuAuthorizationRequest() = default ;
    ListPortalMenuAuthorizationRequest& operator=(const ListPortalMenuAuthorizationRequest &) = default ;
    ListPortalMenuAuthorizationRequest& operator=(ListPortalMenuAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPortalId_ == nullptr; };
    // dataPortalId Field Functions 
    bool hasDataPortalId() const { return this->dataPortalId_ != nullptr;};
    void deleteDataPortalId() { this->dataPortalId_ = nullptr;};
    inline string getDataPortalId() const { DARABONBA_PTR_GET_DEFAULT(dataPortalId_, "") };
    inline ListPortalMenuAuthorizationRequest& setDataPortalId(string dataPortalId) { DARABONBA_PTR_SET_VALUE(dataPortalId_, dataPortalId) };


  protected:
    // The ID of the BI portal.
    // 
    // This parameter is required.
    shared_ptr<string> dataPortalId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
