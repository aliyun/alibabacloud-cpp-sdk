// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetRecordUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
    };
    GetRecordUrlRequest() = default ;
    GetRecordUrlRequest(const GetRecordUrlRequest &) = default ;
    GetRecordUrlRequest(GetRecordUrlRequest &&) = default ;
    GetRecordUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordUrlRequest() = default ;
    GetRecordUrlRequest& operator=(const GetRecordUrlRequest &) = default ;
    GetRecordUrlRequest& operator=(GetRecordUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acid_ == nullptr
        && this->instanceId_ == nullptr && this->recordType_ == nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string getAcid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline GetRecordUrlRequest& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRecordUrlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline GetRecordUrlRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


  protected:
    // This parameter is required.
    shared_ptr<string> acid_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> recordType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
