// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class DataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataValue& obj) { 
      DARABONBA_PTR_TO_JSON(masterUid, masterUid_);
      DARABONBA_PTR_TO_JSON(cInstanceId, cInstanceId_);
      DARABONBA_PTR_TO_JSON(accessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(deleted, deleted_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(masterUid, masterUid_);
      DARABONBA_PTR_FROM_JSON(cInstanceId, cInstanceId_);
      DARABONBA_PTR_FROM_JSON(accessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DataValue() = default ;
    DataValue(const DataValue &) = default ;
    DataValue(DataValue &&) = default ;
    DataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataValue() = default ;
    DataValue& operator=(const DataValue &) = default ;
    DataValue& operator=(DataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->masterUid_ != nullptr
        && this->cInstanceId_ != nullptr && this->accessKey_ != nullptr && this->userName_ != nullptr && this->password_ != nullptr && this->deleted_ != nullptr
        && this->createTimestamp_ != nullptr && this->remark_ != nullptr; };
    // masterUid Field Functions 
    bool hasMasterUid() const { return this->masterUid_ != nullptr;};
    void deleteMasterUid() { this->masterUid_ = nullptr;};
    inline int64_t masterUid() const { DARABONBA_PTR_GET_DEFAULT(masterUid_, 0L) };
    inline DataValue& setMasterUid(int64_t masterUid) { DARABONBA_PTR_SET_VALUE(masterUid_, masterUid) };


    // cInstanceId Field Functions 
    bool hasCInstanceId() const { return this->cInstanceId_ != nullptr;};
    void deleteCInstanceId() { this->cInstanceId_ = nullptr;};
    inline string cInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cInstanceId_, "") };
    inline DataValue& setCInstanceId(string cInstanceId) { DARABONBA_PTR_SET_VALUE(cInstanceId_, cInstanceId) };


    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline DataValue& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DataValue& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline DataValue& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int64_t deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0L) };
    inline DataValue& setDeleted(int64_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DataValue& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DataValue& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The Alibaba Cloud account ID or Resource Access Management (RAM) user to which the AccessKey pair that is used to create the static username and password belongs.
    std::shared_ptr<int64_t> masterUid_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance.
    std::shared_ptr<string> cInstanceId_ = nullptr;
    // The AccessKey ID that is used to create the static username and password.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The static username.
    std::shared_ptr<string> userName_ = nullptr;
    // The static password.
    std::shared_ptr<string> password_ = nullptr;
    // The timestamp that indicates when the static username and password were deleted. Unit: milliseconds.
    std::shared_ptr<int64_t> deleted_ = nullptr;
    // The timestamp that indicates when the static username and password were created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
