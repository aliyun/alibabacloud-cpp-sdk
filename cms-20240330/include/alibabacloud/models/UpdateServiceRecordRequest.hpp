// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateServiceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(recordContent, recordContent_);
      DARABONBA_PTR_TO_JSON(recordType, recordType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(recordContent, recordContent_);
      DARABONBA_PTR_FROM_JSON(recordType, recordType_);
    };
    UpdateServiceRecordRequest() = default ;
    UpdateServiceRecordRequest(const UpdateServiceRecordRequest &) = default ;
    UpdateServiceRecordRequest(UpdateServiceRecordRequest &&) = default ;
    UpdateServiceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRecordRequest() = default ;
    UpdateServiceRecordRequest& operator=(const UpdateServiceRecordRequest &) = default ;
    UpdateServiceRecordRequest& operator=(UpdateServiceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordContent_ == nullptr
        && this->recordType_ == nullptr; };
    // recordContent Field Functions 
    bool hasRecordContent() const { return this->recordContent_ != nullptr;};
    void deleteRecordContent() { this->recordContent_ = nullptr;};
    inline string getRecordContent() const { DARABONBA_PTR_GET_DEFAULT(recordContent_, "") };
    inline UpdateServiceRecordRequest& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline UpdateServiceRecordRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


  protected:
    // The entry content in JSON string format. The format varies depending on the recordType value.
    // 
    // This parameter is required.
    shared_ptr<string> recordContent_ {};
    // The type of the linked entry. Currently supported value:
    // logCorrelation, which indicates application log association.
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
