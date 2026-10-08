// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSlbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlbList, slbList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlbList, slbList_);
    };
    ListSlbResponseBody() = default ;
    ListSlbResponseBody(const ListSlbResponseBody &) = default ;
    ListSlbResponseBody(ListSlbResponseBody &&) = default ;
    ListSlbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlbResponseBody() = default ;
    ListSlbResponseBody& operator=(const ListSlbResponseBody &) = default ;
    ListSlbResponseBody& operator=(ListSlbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlbList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlbList& obj) { 
        DARABONBA_PTR_TO_JSON(SlbEntity, slbEntity_);
      };
      friend void from_json(const Darabonba::Json& j, SlbList& obj) { 
        DARABONBA_PTR_FROM_JSON(SlbEntity, slbEntity_);
      };
      SlbList() = default ;
      SlbList(const SlbList &) = default ;
      SlbList(SlbList &&) = default ;
      SlbList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlbList() = default ;
      SlbList& operator=(const SlbList &) = default ;
      SlbList& operator=(SlbList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlbEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlbEntity& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(AddressType, addressType_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Reusable, reusable_);
          DARABONBA_PTR_TO_JSON(SlbId, slbId_);
          DARABONBA_PTR_TO_JSON(SlbName, slbName_);
          DARABONBA_PTR_TO_JSON(SlbStatus, slbStatus_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, SlbEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Reusable, reusable_);
          DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
          DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
          DARABONBA_PTR_FROM_JSON(SlbStatus, slbStatus_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        };
        SlbEntity() = default ;
        SlbEntity(const SlbEntity &) = default ;
        SlbEntity(SlbEntity &&) = default ;
        SlbEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlbEntity() = default ;
        SlbEntity& operator=(const SlbEntity &) = default ;
        SlbEntity& operator=(SlbEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->addressType_ == nullptr && this->expired_ == nullptr && this->groupId_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr
        && this->reusable_ == nullptr && this->slbId_ == nullptr && this->slbName_ == nullptr && this->slbStatus_ == nullptr && this->tags_ == nullptr
        && this->userId_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline SlbEntity& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline SlbEntity& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline SlbEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int32_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
        inline SlbEntity& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SlbEntity& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SlbEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reusable Field Functions 
        bool hasReusable() const { return this->reusable_ != nullptr;};
        void deleteReusable() { this->reusable_ = nullptr;};
        inline bool getReusable() const { DARABONBA_PTR_GET_DEFAULT(reusable_, false) };
        inline SlbEntity& setReusable(bool reusable) { DARABONBA_PTR_SET_VALUE(reusable_, reusable) };


        // slbId Field Functions 
        bool hasSlbId() const { return this->slbId_ != nullptr;};
        void deleteSlbId() { this->slbId_ = nullptr;};
        inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
        inline SlbEntity& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


        // slbName Field Functions 
        bool hasSlbName() const { return this->slbName_ != nullptr;};
        void deleteSlbName() { this->slbName_ = nullptr;};
        inline string getSlbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
        inline SlbEntity& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


        // slbStatus Field Functions 
        bool hasSlbStatus() const { return this->slbStatus_ != nullptr;};
        void deleteSlbStatus() { this->slbStatus_ = nullptr;};
        inline string getSlbStatus() const { DARABONBA_PTR_GET_DEFAULT(slbStatus_, "") };
        inline SlbEntity& setSlbStatus(string slbStatus) { DARABONBA_PTR_SET_VALUE(slbStatus_, slbStatus) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline SlbEntity& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SlbEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SlbEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline SlbEntity& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> addressType_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<int32_t> groupId_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<bool> reusable_ {};
        shared_ptr<string> slbId_ {};
        shared_ptr<string> slbName_ {};
        shared_ptr<string> slbStatus_ {};
        shared_ptr<string> tags_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vswitchId_ {};
      };

      virtual bool empty() const override { return this->slbEntity_ == nullptr; };
      // slbEntity Field Functions 
      bool hasSlbEntity() const { return this->slbEntity_ != nullptr;};
      void deleteSlbEntity() { this->slbEntity_ = nullptr;};
      inline const vector<SlbList::SlbEntity> & getSlbEntity() const { DARABONBA_PTR_GET_CONST(slbEntity_, vector<SlbList::SlbEntity>) };
      inline vector<SlbList::SlbEntity> getSlbEntity() { DARABONBA_PTR_GET(slbEntity_, vector<SlbList::SlbEntity>) };
      inline SlbList& setSlbEntity(const vector<SlbList::SlbEntity> & slbEntity) { DARABONBA_PTR_SET_VALUE(slbEntity_, slbEntity) };
      inline SlbList& setSlbEntity(vector<SlbList::SlbEntity> && slbEntity) { DARABONBA_PTR_SET_RVALUE(slbEntity_, slbEntity) };


    protected:
      shared_ptr<vector<SlbList::SlbEntity>> slbEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->slbList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSlbResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSlbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSlbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slbList Field Functions 
    bool hasSlbList() const { return this->slbList_ != nullptr;};
    void deleteSlbList() { this->slbList_ = nullptr;};
    inline const ListSlbResponseBody::SlbList & getSlbList() const { DARABONBA_PTR_GET_CONST(slbList_, ListSlbResponseBody::SlbList) };
    inline ListSlbResponseBody::SlbList getSlbList() { DARABONBA_PTR_GET(slbList_, ListSlbResponseBody::SlbList) };
    inline ListSlbResponseBody& setSlbList(const ListSlbResponseBody::SlbList & slbList) { DARABONBA_PTR_SET_VALUE(slbList_, slbList) };
    inline ListSlbResponseBody& setSlbList(ListSlbResponseBody::SlbList && slbList) { DARABONBA_PTR_SET_RVALUE(slbList_, slbList) };


  protected:
    // The interface status or POP error code.
    shared_ptr<int32_t> code_ {};
    // The additional information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListSlbResponseBody::SlbList> slbList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
