// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSAIONSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSAIONSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetConversaionSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversaionSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(space, space_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversaionSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(space, space_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetConversaionSpaceResponseBody() = default ;
    GetConversaionSpaceResponseBody(const GetConversaionSpaceResponseBody &) = default ;
    GetConversaionSpaceResponseBody(GetConversaionSpaceResponseBody &&) = default ;
    GetConversaionSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversaionSpaceResponseBody() = default ;
    GetConversaionSpaceResponseBody& operator=(const GetConversaionSpaceResponseBody &) = default ;
    GetConversaionSpaceResponseBody& operator=(GetConversaionSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Space : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Space& obj) { 
        DARABONBA_PTR_TO_JSON(CorpId, corpId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Space& obj) { 
        DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      };
      Space() = default ;
      Space(const Space &) = default ;
      Space(Space &&) = default ;
      Space(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Space() = default ;
      Space& operator=(const Space &) = default ;
      Space& operator=(Space &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->corpId_ == nullptr
        && this->createTime_ == nullptr && this->modifiedTime_ == nullptr && this->spaceId_ == nullptr; };
      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Space& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Space& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Space& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // spaceId Field Functions 
      bool hasSpaceId() const { return this->spaceId_ != nullptr;};
      void deleteSpaceId() { this->spaceId_ = nullptr;};
      inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
      inline Space& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    protected:
      shared_ptr<string> corpId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> spaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->space_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConversaionSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline const GetConversaionSpaceResponseBody::Space & getSpace() const { DARABONBA_PTR_GET_CONST(space_, GetConversaionSpaceResponseBody::Space) };
    inline GetConversaionSpaceResponseBody::Space getSpace() { DARABONBA_PTR_GET(space_, GetConversaionSpaceResponseBody::Space) };
    inline GetConversaionSpaceResponseBody& setSpace(const GetConversaionSpaceResponseBody::Space & space) { DARABONBA_PTR_SET_VALUE(space_, space) };
    inline GetConversaionSpaceResponseBody& setSpace(GetConversaionSpaceResponseBody::Space && space) { DARABONBA_PTR_SET_RVALUE(space_, space) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetConversaionSpaceResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetConversaionSpaceResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetConversaionSpaceResponseBody::Space> space_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
