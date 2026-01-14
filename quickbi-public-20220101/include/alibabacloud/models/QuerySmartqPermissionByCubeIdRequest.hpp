// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTQPERMISSIONBYCUBEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTQPERMISSIONBYCUBEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QuerySmartqPermissionByCubeIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmartqPermissionByCubeIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmartqPermissionByCubeIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuerySmartqPermissionByCubeIdRequest() = default ;
    QuerySmartqPermissionByCubeIdRequest(const QuerySmartqPermissionByCubeIdRequest &) = default ;
    QuerySmartqPermissionByCubeIdRequest(QuerySmartqPermissionByCubeIdRequest &&) = default ;
    QuerySmartqPermissionByCubeIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmartqPermissionByCubeIdRequest() = default ;
    QuerySmartqPermissionByCubeIdRequest& operator=(const QuerySmartqPermissionByCubeIdRequest &) = default ;
    QuerySmartqPermissionByCubeIdRequest& operator=(QuerySmartqPermissionByCubeIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->userId_ == nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QuerySmartqPermissionByCubeIdRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuerySmartqPermissionByCubeIdRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Dataset ID.
    // 
    // This parameter is required.
    shared_ptr<string> cubeId_ {};
    // User ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
