// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERECORDCONFIGRESPONSEBODYROOT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERECORDCONFIGRESPONSEBODYROOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class GetInstanceRecordConfigResponseBodyRoot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceRecordConfigResponseBodyRoot& obj) { 
      DARABONBA_PTR_TO_JSON(ExpirationDays, expirationDays_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(RecordStorageTarget, recordStorageTarget_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceRecordConfigResponseBodyRoot& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpirationDays, expirationDays_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(RecordStorageTarget, recordStorageTarget_);
    };
    GetInstanceRecordConfigResponseBodyRoot() = default ;
    GetInstanceRecordConfigResponseBodyRoot(const GetInstanceRecordConfigResponseBodyRoot &) = default ;
    GetInstanceRecordConfigResponseBodyRoot(GetInstanceRecordConfigResponseBodyRoot &&) = default ;
    GetInstanceRecordConfigResponseBodyRoot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceRecordConfigResponseBodyRoot() = default ;
    GetInstanceRecordConfigResponseBodyRoot& operator=(const GetInstanceRecordConfigResponseBodyRoot &) = default ;
    GetInstanceRecordConfigResponseBodyRoot& operator=(GetInstanceRecordConfigResponseBodyRoot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expirationDays_ != nullptr
        && this->instanceId_ != nullptr && this->parentId_ != nullptr && this->recordStorageTarget_ != nullptr; };
    // expirationDays Field Functions 
    bool hasExpirationDays() const { return this->expirationDays_ != nullptr;};
    void deleteExpirationDays() { this->expirationDays_ = nullptr;};
    inline int32_t expirationDays() const { DARABONBA_PTR_GET_DEFAULT(expirationDays_, 0) };
    inline GetInstanceRecordConfigResponseBodyRoot& setExpirationDays(int32_t expirationDays) { DARABONBA_PTR_SET_VALUE(expirationDays_, expirationDays) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceRecordConfigResponseBodyRoot& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetInstanceRecordConfigResponseBodyRoot& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // recordStorageTarget Field Functions 
    bool hasRecordStorageTarget() const { return this->recordStorageTarget_ != nullptr;};
    void deleteRecordStorageTarget() { this->recordStorageTarget_ = nullptr;};
    inline string recordStorageTarget() const { DARABONBA_PTR_GET_DEFAULT(recordStorageTarget_, "") };
    inline GetInstanceRecordConfigResponseBodyRoot& setRecordStorageTarget(string recordStorageTarget) { DARABONBA_PTR_SET_VALUE(recordStorageTarget_, recordStorageTarget) };


  protected:
    std::shared_ptr<int32_t> expirationDays_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> recordStorageTarget_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
