// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPAYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_PREPAYRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class PrepayResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepayResource& obj) { 
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(cu, cu_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, PrepayResource& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(cu, cu_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatus_);
    };
    PrepayResource() = default ;
    PrepayResource(const PrepayResource &) = default ;
    PrepayResource(PrepayResource &&) = default ;
    PrepayResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepayResource() = default ;
    PrepayResource& operator=(const PrepayResource &) = default ;
    PrepayResource& operator=(PrepayResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->catalogName_ == nullptr && return this->cu_ == nullptr && return this->expireTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceStatus_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline PrepayResource& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline PrepayResource& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline PrepayResource& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline PrepayResource& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline PrepayResource& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PrepayResource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline PrepayResource& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<string> catalogName_ = nullptr;
    std::shared_ptr<int32_t> cu_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
