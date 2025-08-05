// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEACLONOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROLEACLONOBJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRoleAclOnObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleAclOnObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(objectName, objectName_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleAclOnObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(objectName, objectName_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
    };
    GetRoleAclOnObjectRequest() = default ;
    GetRoleAclOnObjectRequest(const GetRoleAclOnObjectRequest &) = default ;
    GetRoleAclOnObjectRequest(GetRoleAclOnObjectRequest &&) = default ;
    GetRoleAclOnObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleAclOnObjectRequest() = default ;
    GetRoleAclOnObjectRequest& operator=(const GetRoleAclOnObjectRequest &) = default ;
    GetRoleAclOnObjectRequest& operator=(GetRoleAclOnObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->objectName_ != nullptr
        && this->objectType_ != nullptr; };
    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline GetRoleAclOnObjectRequest& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetRoleAclOnObjectRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    // The name of the object.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectName_ = nullptr;
    // The type of the object.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
