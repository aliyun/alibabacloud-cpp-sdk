// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteServiceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(recordType, recordType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(recordType, recordType_);
    };
    DeleteServiceRecordRequest() = default ;
    DeleteServiceRecordRequest(const DeleteServiceRecordRequest &) = default ;
    DeleteServiceRecordRequest(DeleteServiceRecordRequest &&) = default ;
    DeleteServiceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceRecordRequest() = default ;
    DeleteServiceRecordRequest& operator=(const DeleteServiceRecordRequest &) = default ;
    DeleteServiceRecordRequest& operator=(DeleteServiceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordType_ == nullptr; };
    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline DeleteServiceRecordRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


  protected:
    // The type of the association entry. Valid values:
    // logCorrelation: application log association
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
