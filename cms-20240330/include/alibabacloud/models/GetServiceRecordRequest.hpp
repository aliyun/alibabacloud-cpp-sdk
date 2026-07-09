// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(recordType, recordType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(recordType, recordType_);
    };
    GetServiceRecordRequest() = default ;
    GetServiceRecordRequest(const GetServiceRecordRequest &) = default ;
    GetServiceRecordRequest(GetServiceRecordRequest &&) = default ;
    GetServiceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRecordRequest() = default ;
    GetServiceRecordRequest& operator=(const GetServiceRecordRequest &) = default ;
    GetServiceRecordRequest& operator=(GetServiceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordType_ == nullptr; };
    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline GetServiceRecordRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


  protected:
    // The type of the linked entry. Currently supported values:
    // logCorrelation: indicates application log association.
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
