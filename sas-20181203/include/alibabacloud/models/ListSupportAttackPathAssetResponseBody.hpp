// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTATTACKPATHASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTATTACKPATHASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSupportAttackPathAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportAttackPathAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetTypeList, attackPathAssetTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportAttackPathAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetTypeList, attackPathAssetTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSupportAttackPathAssetResponseBody() = default ;
    ListSupportAttackPathAssetResponseBody(const ListSupportAttackPathAssetResponseBody &) = default ;
    ListSupportAttackPathAssetResponseBody(ListSupportAttackPathAssetResponseBody &&) = default ;
    ListSupportAttackPathAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportAttackPathAssetResponseBody() = default ;
    ListSupportAttackPathAssetResponseBody& operator=(const ListSupportAttackPathAssetResponseBody &) = default ;
    ListSupportAttackPathAssetResponseBody& operator=(ListSupportAttackPathAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathAssetTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathAssetTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathAssetTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      AttackPathAssetTypeList() = default ;
      AttackPathAssetTypeList(const AttackPathAssetTypeList &) = default ;
      AttackPathAssetTypeList(AttackPathAssetTypeList &&) = default ;
      AttackPathAssetTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathAssetTypeList() = default ;
      AttackPathAssetTypeList& operator=(const AttackPathAssetTypeList &) = default ;
      AttackPathAssetTypeList& operator=(AttackPathAssetTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->vendor_ == nullptr; };
      // assetSubType Field Functions 
      bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
      void deleteAssetSubType() { this->assetSubType_ = nullptr;};
      inline int64_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0L) };
      inline AttackPathAssetTypeList& setAssetSubType(int64_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int64_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0L) };
      inline AttackPathAssetTypeList& setAssetType(int64_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int64_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0L) };
      inline AttackPathAssetTypeList& setVendor(int64_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // Subtype of the cloud product asset.
      shared_ptr<int64_t> assetSubType_ {};
      // Type of the cloud product asset.
      shared_ptr<int64_t> assetType_ {};
      // Vendor of the cloud product asset.
      shared_ptr<int64_t> vendor_ {};
    };

    virtual bool empty() const override { return this->attackPathAssetTypeList_ == nullptr
        && this->requestId_ == nullptr; };
    // attackPathAssetTypeList Field Functions 
    bool hasAttackPathAssetTypeList() const { return this->attackPathAssetTypeList_ != nullptr;};
    void deleteAttackPathAssetTypeList() { this->attackPathAssetTypeList_ = nullptr;};
    inline const vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList> & getAttackPathAssetTypeList() const { DARABONBA_PTR_GET_CONST(attackPathAssetTypeList_, vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList>) };
    inline vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList> getAttackPathAssetTypeList() { DARABONBA_PTR_GET(attackPathAssetTypeList_, vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList>) };
    inline ListSupportAttackPathAssetResponseBody& setAttackPathAssetTypeList(const vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList> & attackPathAssetTypeList) { DARABONBA_PTR_SET_VALUE(attackPathAssetTypeList_, attackPathAssetTypeList) };
    inline ListSupportAttackPathAssetResponseBody& setAttackPathAssetTypeList(vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList> && attackPathAssetTypeList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetTypeList_, attackPathAssetTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportAttackPathAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of cloud product asset types for the attack path.
    shared_ptr<vector<ListSupportAttackPathAssetResponseBody::AttackPathAssetTypeList>> attackPathAssetTypeList_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
