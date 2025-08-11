// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTALMENUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTALMENUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListPortalMenusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortalMenusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortalMenusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListPortalMenusRequest() = default ;
    ListPortalMenusRequest(const ListPortalMenusRequest &) = default ;
    ListPortalMenusRequest(ListPortalMenusRequest &&) = default ;
    ListPortalMenusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortalMenusRequest() = default ;
    ListPortalMenusRequest& operator=(const ListPortalMenusRequest &) = default ;
    ListPortalMenusRequest& operator=(ListPortalMenusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataPortalId_ != nullptr
        && this->userId_ != nullptr; };
    // dataPortalId Field Functions 
    bool hasDataPortalId() const { return this->dataPortalId_ != nullptr;};
    void deleteDataPortalId() { this->dataPortalId_ = nullptr;};
    inline string dataPortalId() const { DARABONBA_PTR_GET_DEFAULT(dataPortalId_, "") };
    inline ListPortalMenusRequest& setDataPortalId(string dataPortalId) { DARABONBA_PTR_SET_VALUE(dataPortalId_, dataPortalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPortalMenusRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the BI portal.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataPortalId_ = nullptr;
    // The user ID in the Quick BI. When passed in, the list displays only the menus that the user has permissions on.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
