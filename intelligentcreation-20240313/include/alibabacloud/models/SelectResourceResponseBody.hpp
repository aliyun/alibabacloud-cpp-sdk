// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SelectResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceInfoList, resourceInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, SelectResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceInfoList, resourceInfoList_);
    };
    SelectResourceResponseBody() = default ;
    SelectResourceResponseBody(const SelectResourceResponseBody &) = default ;
    SelectResourceResponseBody(SelectResourceResponseBody &&) = default ;
    SelectResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectResourceResponseBody() = default ;
    SelectResourceResponseBody& operator=(const SelectResourceResponseBody &) = default ;
    SelectResourceResponseBody& operator=(SelectResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(lastExpire, lastExpire_);
        DARABONBA_PTR_TO_JSON(remainCount, remainCount_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(lastExpire, lastExpire_);
        DARABONBA_PTR_FROM_JSON(remainCount, remainCount_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
      };
      ResourceInfoList() = default ;
      ResourceInfoList(const ResourceInfoList &) = default ;
      ResourceInfoList(ResourceInfoList &&) = default ;
      ResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceInfoList() = default ;
      ResourceInfoList& operator=(const ResourceInfoList &) = default ;
      ResourceInfoList& operator=(ResourceInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->lastExpire_ == nullptr && this->remainCount_ == nullptr && this->resourceType_ == nullptr && this->unit_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline ResourceInfoList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // lastExpire Field Functions 
      bool hasLastExpire() const { return this->lastExpire_ != nullptr;};
      void deleteLastExpire() { this->lastExpire_ = nullptr;};
      inline int32_t getLastExpire() const { DARABONBA_PTR_GET_DEFAULT(lastExpire_, 0) };
      inline ResourceInfoList& setLastExpire(int32_t lastExpire) { DARABONBA_PTR_SET_VALUE(lastExpire_, lastExpire) };


      // remainCount Field Functions 
      bool hasRemainCount() const { return this->remainCount_ != nullptr;};
      void deleteRemainCount() { this->remainCount_ = nullptr;};
      inline int32_t getRemainCount() const { DARABONBA_PTR_GET_DEFAULT(remainCount_, 0) };
      inline ResourceInfoList& setRemainCount(int32_t remainCount) { DARABONBA_PTR_SET_VALUE(remainCount_, remainCount) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
      inline ResourceInfoList& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline ResourceInfoList& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<string> expireTime_ {};
      shared_ptr<int32_t> lastExpire_ {};
      shared_ptr<int32_t> remainCount_ {};
      shared_ptr<int32_t> resourceType_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->requestId_ == nullptr && this->resourceInfoList_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline SelectResourceResponseBody& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceInfoList Field Functions 
    bool hasResourceInfoList() const { return this->resourceInfoList_ != nullptr;};
    void deleteResourceInfoList() { this->resourceInfoList_ = nullptr;};
    inline const vector<SelectResourceResponseBody::ResourceInfoList> & getResourceInfoList() const { DARABONBA_PTR_GET_CONST(resourceInfoList_, vector<SelectResourceResponseBody::ResourceInfoList>) };
    inline vector<SelectResourceResponseBody::ResourceInfoList> getResourceInfoList() { DARABONBA_PTR_GET(resourceInfoList_, vector<SelectResourceResponseBody::ResourceInfoList>) };
    inline SelectResourceResponseBody& setResourceInfoList(const vector<SelectResourceResponseBody::ResourceInfoList> & resourceInfoList) { DARABONBA_PTR_SET_VALUE(resourceInfoList_, resourceInfoList) };
    inline SelectResourceResponseBody& setResourceInfoList(vector<SelectResourceResponseBody::ResourceInfoList> && resourceInfoList) { DARABONBA_PTR_SET_RVALUE(resourceInfoList_, resourceInfoList) };


  protected:
    shared_ptr<string> aliyunUid_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SelectResourceResponseBody::ResourceInfoList>> resourceInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
