// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTRESOURCERESPONSEBODYRESOURCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SELECTRESOURCERESPONSEBODYRESOURCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SelectResourceResponseBodyResourceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectResourceResponseBodyResourceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(lastExpire, lastExpire_);
      DARABONBA_PTR_TO_JSON(remainCount, remainCount_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, SelectResourceResponseBodyResourceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(lastExpire, lastExpire_);
      DARABONBA_PTR_FROM_JSON(remainCount, remainCount_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    SelectResourceResponseBodyResourceInfoList() = default ;
    SelectResourceResponseBodyResourceInfoList(const SelectResourceResponseBodyResourceInfoList &) = default ;
    SelectResourceResponseBodyResourceInfoList(SelectResourceResponseBodyResourceInfoList &&) = default ;
    SelectResourceResponseBodyResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectResourceResponseBodyResourceInfoList() = default ;
    SelectResourceResponseBodyResourceInfoList& operator=(const SelectResourceResponseBodyResourceInfoList &) = default ;
    SelectResourceResponseBodyResourceInfoList& operator=(SelectResourceResponseBodyResourceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->lastExpire_ == nullptr && return this->remainCount_ == nullptr && return this->resourceType_ == nullptr && return this->unit_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline SelectResourceResponseBodyResourceInfoList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastExpire Field Functions 
    bool hasLastExpire() const { return this->lastExpire_ != nullptr;};
    void deleteLastExpire() { this->lastExpire_ = nullptr;};
    inline int32_t lastExpire() const { DARABONBA_PTR_GET_DEFAULT(lastExpire_, 0) };
    inline SelectResourceResponseBodyResourceInfoList& setLastExpire(int32_t lastExpire) { DARABONBA_PTR_SET_VALUE(lastExpire_, lastExpire) };


    // remainCount Field Functions 
    bool hasRemainCount() const { return this->remainCount_ != nullptr;};
    void deleteRemainCount() { this->remainCount_ = nullptr;};
    inline int32_t remainCount() const { DARABONBA_PTR_GET_DEFAULT(remainCount_, 0) };
    inline SelectResourceResponseBodyResourceInfoList& setRemainCount(int32_t remainCount) { DARABONBA_PTR_SET_VALUE(remainCount_, remainCount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline SelectResourceResponseBodyResourceInfoList& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline SelectResourceResponseBodyResourceInfoList& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<int32_t> lastExpire_ = nullptr;
    std::shared_ptr<int32_t> remainCount_ = nullptr;
    std::shared_ptr<int32_t> resourceType_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
