// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCLUSTERTYPESRESPONSEBODYCLUSTERTYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCLUSTERTYPESRESPONSEBODYCLUSTERTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListUserClusterTypesResponseBodyClusterTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserClusterTypesResponseBodyClusterTypes& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserClusterTypesResponseBodyClusterTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    ListUserClusterTypesResponseBodyClusterTypes() = default ;
    ListUserClusterTypesResponseBodyClusterTypes(const ListUserClusterTypesResponseBodyClusterTypes &) = default ;
    ListUserClusterTypesResponseBodyClusterTypes(ListUserClusterTypesResponseBodyClusterTypes &&) = default ;
    ListUserClusterTypesResponseBodyClusterTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserClusterTypesResponseBodyClusterTypes() = default ;
    ListUserClusterTypesResponseBodyClusterTypes& operator=(const ListUserClusterTypesResponseBodyClusterTypes &) = default ;
    ListUserClusterTypesResponseBodyClusterTypes& operator=(ListUserClusterTypesResponseBodyClusterTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->typeName_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline ListUserClusterTypesResponseBodyClusterTypes& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline ListUserClusterTypesResponseBodyClusterTypes& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    // The access type of cluster type
    std::shared_ptr<string> accessType_ = nullptr;
    // The name of cluster type
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
