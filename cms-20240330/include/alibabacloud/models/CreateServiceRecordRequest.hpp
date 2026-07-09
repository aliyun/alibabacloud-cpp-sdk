// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateServiceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(recordContent, recordContent_);
      DARABONBA_PTR_TO_JSON(recordType, recordType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(recordContent, recordContent_);
      DARABONBA_PTR_FROM_JSON(recordType, recordType_);
    };
    CreateServiceRecordRequest() = default ;
    CreateServiceRecordRequest(const CreateServiceRecordRequest &) = default ;
    CreateServiceRecordRequest(CreateServiceRecordRequest &&) = default ;
    CreateServiceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceRecordRequest() = default ;
    CreateServiceRecordRequest& operator=(const CreateServiceRecordRequest &) = default ;
    CreateServiceRecordRequest& operator=(CreateServiceRecordRequest &&) = default ;
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
    inline CreateServiceRecordRequest& setRecordContent(string recordContent) { DARABONBA_PTR_SET_VALUE(recordContent_, recordContent) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline CreateServiceRecordRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


  protected:
    // The entry content in JSON string format. The format may vary depending on the value of recordType.
    // 
    // This parameter is required.
    shared_ptr<string> recordContent_ {};
    // The type of the linked entry. Valid values:
    // - logCorrelation: application log association.
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
