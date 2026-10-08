// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCRESPONSEBODY_HPP_
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
  class ListVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    ListVpcResponseBody() = default ;
    ListVpcResponseBody(const ListVpcResponseBody &) = default ;
    ListVpcResponseBody(ListVpcResponseBody &&) = default ;
    ListVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcResponseBody() = default ;
    ListVpcResponseBody& operator=(const ListVpcResponseBody &) = default ;
    ListVpcResponseBody& operator=(ListVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcList& obj) { 
        DARABONBA_PTR_TO_JSON(VpcEntity, vpcEntity_);
      };
      friend void from_json(const Darabonba::Json& j, VpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(VpcEntity, vpcEntity_);
      };
      VpcList() = default ;
      VpcList(const VpcList &) = default ;
      VpcList(VpcList &&) = default ;
      VpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcList() = default ;
      VpcList& operator=(const VpcList &) = default ;
      VpcList& operator=(VpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcEntity& obj) { 
          DARABONBA_PTR_TO_JSON(EcsNum, ecsNum_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, VpcEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsNum, ecsNum_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        VpcEntity() = default ;
        VpcEntity(const VpcEntity &) = default ;
        VpcEntity(VpcEntity &&) = default ;
        VpcEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcEntity() = default ;
        VpcEntity& operator=(const VpcEntity &) = default ;
        VpcEntity& operator=(VpcEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsNum_ == nullptr
        && this->expired_ == nullptr && this->regionId_ == nullptr && this->userId_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // ecsNum Field Functions 
        bool hasEcsNum() const { return this->ecsNum_ != nullptr;};
        void deleteEcsNum() { this->ecsNum_ = nullptr;};
        inline int32_t getEcsNum() const { DARABONBA_PTR_GET_DEFAULT(ecsNum_, 0) };
        inline VpcEntity& setEcsNum(int32_t ecsNum) { DARABONBA_PTR_SET_VALUE(ecsNum_, ecsNum) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline VpcEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline VpcEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline VpcEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline VpcEntity& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<int32_t> ecsNum_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->vpcEntity_ == nullptr; };
      // vpcEntity Field Functions 
      bool hasVpcEntity() const { return this->vpcEntity_ != nullptr;};
      void deleteVpcEntity() { this->vpcEntity_ = nullptr;};
      inline const vector<VpcList::VpcEntity> & getVpcEntity() const { DARABONBA_PTR_GET_CONST(vpcEntity_, vector<VpcList::VpcEntity>) };
      inline vector<VpcList::VpcEntity> getVpcEntity() { DARABONBA_PTR_GET(vpcEntity_, vector<VpcList::VpcEntity>) };
      inline VpcList& setVpcEntity(const vector<VpcList::VpcEntity> & vpcEntity) { DARABONBA_PTR_SET_VALUE(vpcEntity_, vpcEntity) };
      inline VpcList& setVpcEntity(vector<VpcList::VpcEntity> && vpcEntity) { DARABONBA_PTR_SET_RVALUE(vpcEntity_, vpcEntity) };


    protected:
      shared_ptr<vector<VpcList::VpcEntity>> vpcEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->vpcList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVpcResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVpcResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const ListVpcResponseBody::VpcList & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, ListVpcResponseBody::VpcList) };
    inline ListVpcResponseBody::VpcList getVpcList() { DARABONBA_PTR_GET(vpcList_, ListVpcResponseBody::VpcList) };
    inline ListVpcResponseBody& setVpcList(const ListVpcResponseBody::VpcList & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline ListVpcResponseBody& setVpcList(ListVpcResponseBody::VpcList && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The ID of the request.
    shared_ptr<int32_t> code_ {};
    // The information about VPCs.
    shared_ptr<string> message_ {};
    // The name of the VPC.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListVpcResponseBody::VpcList> vpcList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
