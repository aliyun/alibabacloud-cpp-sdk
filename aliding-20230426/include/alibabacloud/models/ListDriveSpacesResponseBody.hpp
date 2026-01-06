// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDRIVESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDRIVESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDriveSpacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDriveSpacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(spaces, spaces_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDriveSpacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(spaces, spaces_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    ListDriveSpacesResponseBody() = default ;
    ListDriveSpacesResponseBody(const ListDriveSpacesResponseBody &) = default ;
    ListDriveSpacesResponseBody(ListDriveSpacesResponseBody &&) = default ;
    ListDriveSpacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDriveSpacesResponseBody() = default ;
    ListDriveSpacesResponseBody& operator=(const ListDriveSpacesResponseBody &) = default ;
    ListDriveSpacesResponseBody& operator=(ListDriveSpacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Spaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Spaces& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(PermissionMode, permissionMode_);
        DARABONBA_PTR_TO_JSON(Quota, quota_);
        DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
        DARABONBA_PTR_TO_JSON(SpaceName, spaceName_);
        DARABONBA_PTR_TO_JSON(SpaceType, spaceType_);
        DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      };
      friend void from_json(const Darabonba::Json& j, Spaces& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(PermissionMode, permissionMode_);
        DARABONBA_PTR_FROM_JSON(Quota, quota_);
        DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
        DARABONBA_PTR_FROM_JSON(SpaceName, spaceName_);
        DARABONBA_PTR_FROM_JSON(SpaceType, spaceType_);
        DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      };
      Spaces() = default ;
      Spaces(const Spaces &) = default ;
      Spaces(Spaces &&) = default ;
      Spaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Spaces() = default ;
      Spaces& operator=(const Spaces &) = default ;
      Spaces& operator=(Spaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifyTime_ == nullptr && this->permissionMode_ == nullptr && this->quota_ == nullptr && this->spaceId_ == nullptr && this->spaceName_ == nullptr
        && this->spaceType_ == nullptr && this->usedQuota_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Spaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Spaces& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // permissionMode Field Functions 
      bool hasPermissionMode() const { return this->permissionMode_ != nullptr;};
      void deletePermissionMode() { this->permissionMode_ = nullptr;};
      inline string getPermissionMode() const { DARABONBA_PTR_GET_DEFAULT(permissionMode_, "") };
      inline Spaces& setPermissionMode(string permissionMode) { DARABONBA_PTR_SET_VALUE(permissionMode_, permissionMode) };


      // quota Field Functions 
      bool hasQuota() const { return this->quota_ != nullptr;};
      void deleteQuota() { this->quota_ = nullptr;};
      inline int64_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
      inline Spaces& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


      // spaceId Field Functions 
      bool hasSpaceId() const { return this->spaceId_ != nullptr;};
      void deleteSpaceId() { this->spaceId_ = nullptr;};
      inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
      inline Spaces& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


      // spaceName Field Functions 
      bool hasSpaceName() const { return this->spaceName_ != nullptr;};
      void deleteSpaceName() { this->spaceName_ = nullptr;};
      inline string getSpaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
      inline Spaces& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


      // spaceType Field Functions 
      bool hasSpaceType() const { return this->spaceType_ != nullptr;};
      void deleteSpaceType() { this->spaceType_ = nullptr;};
      inline string getSpaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
      inline Spaces& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


      // usedQuota Field Functions 
      bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
      void deleteUsedQuota() { this->usedQuota_ = nullptr;};
      inline int64_t getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0L) };
      inline Spaces& setUsedQuota(int64_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<string> permissionMode_ {};
      shared_ptr<int64_t> quota_ {};
      shared_ptr<string> spaceId_ {};
      shared_ptr<string> spaceName_ {};
      shared_ptr<string> spaceType_ {};
      shared_ptr<int64_t> usedQuota_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->spaces_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDriveSpacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDriveSpacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spaces Field Functions 
    bool hasSpaces() const { return this->spaces_ != nullptr;};
    void deleteSpaces() { this->spaces_ = nullptr;};
    inline const vector<ListDriveSpacesResponseBody::Spaces> & getSpaces() const { DARABONBA_PTR_GET_CONST(spaces_, vector<ListDriveSpacesResponseBody::Spaces>) };
    inline vector<ListDriveSpacesResponseBody::Spaces> getSpaces() { DARABONBA_PTR_GET(spaces_, vector<ListDriveSpacesResponseBody::Spaces>) };
    inline ListDriveSpacesResponseBody& setSpaces(const vector<ListDriveSpacesResponseBody::Spaces> & spaces) { DARABONBA_PTR_SET_VALUE(spaces_, spaces) };
    inline ListDriveSpacesResponseBody& setSpaces(vector<ListDriveSpacesResponseBody::Spaces> && spaces) { DARABONBA_PTR_SET_RVALUE(spaces_, spaces) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline ListDriveSpacesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline ListDriveSpacesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListDriveSpacesResponseBody::Spaces>> spaces_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
