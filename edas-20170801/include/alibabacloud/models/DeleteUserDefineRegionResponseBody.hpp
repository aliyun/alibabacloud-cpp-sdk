// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERDEFINEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERDEFINEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DeleteUserDefineRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserDefineRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionDefine, regionDefine_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserDefineRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionDefine, regionDefine_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteUserDefineRegionResponseBody() = default ;
    DeleteUserDefineRegionResponseBody(const DeleteUserDefineRegionResponseBody &) = default ;
    DeleteUserDefineRegionResponseBody(DeleteUserDefineRegionResponseBody &&) = default ;
    DeleteUserDefineRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserDefineRegionResponseBody() = default ;
    DeleteUserDefineRegionResponseBody& operator=(const DeleteUserDefineRegionResponseBody &) = default ;
    DeleteUserDefineRegionResponseBody& operator=(DeleteUserDefineRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionDefine : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionDefine& obj) { 
        DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionDefine& obj) { 
        DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      RegionDefine() = default ;
      RegionDefine(const RegionDefine &) = default ;
      RegionDefine(RegionDefine &&) = default ;
      RegionDefine(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionDefine() = default ;
      RegionDefine& operator=(const RegionDefine &) = default ;
      RegionDefine& operator=(RegionDefine &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->belongRegion_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr && this->regionName_ == nullptr && this->userId_ == nullptr; };
      // belongRegion Field Functions 
      bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
      void deleteBelongRegion() { this->belongRegion_ = nullptr;};
      inline string getBelongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
      inline RegionDefine& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RegionDefine& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline RegionDefine& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionDefine& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline RegionDefine& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline RegionDefine& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the region to which the custom namespace belongs.
      shared_ptr<string> belongRegion_ {};
      // The description of the custom namespace.
      shared_ptr<string> description_ {};
      // The unique identifier of the custom namespace.
      shared_ptr<int64_t> id_ {};
      // The ID of the custom namespace. The ID cannot be changed after the custom namespace is created. The format is `region ID:custom namespace ID`.
      shared_ptr<string> regionId_ {};
      // The name of the custom namespace.
      shared_ptr<string> regionName_ {};
      // The ID of the Alibaba Cloud account to which the custom namespace belongs.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->regionDefine_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeleteUserDefineRegionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteUserDefineRegionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionDefine Field Functions 
    bool hasRegionDefine() const { return this->regionDefine_ != nullptr;};
    void deleteRegionDefine() { this->regionDefine_ = nullptr;};
    inline const DeleteUserDefineRegionResponseBody::RegionDefine & getRegionDefine() const { DARABONBA_PTR_GET_CONST(regionDefine_, DeleteUserDefineRegionResponseBody::RegionDefine) };
    inline DeleteUserDefineRegionResponseBody::RegionDefine getRegionDefine() { DARABONBA_PTR_GET(regionDefine_, DeleteUserDefineRegionResponseBody::RegionDefine) };
    inline DeleteUserDefineRegionResponseBody& setRegionDefine(const DeleteUserDefineRegionResponseBody::RegionDefine & regionDefine) { DARABONBA_PTR_SET_VALUE(regionDefine_, regionDefine) };
    inline DeleteUserDefineRegionResponseBody& setRegionDefine(DeleteUserDefineRegionResponseBody::RegionDefine && regionDefine) { DARABONBA_PTR_SET_RVALUE(regionDefine_, regionDefine) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteUserDefineRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The custom namespace.
    shared_ptr<DeleteUserDefineRegionResponseBody::RegionDefine> regionDefine_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
