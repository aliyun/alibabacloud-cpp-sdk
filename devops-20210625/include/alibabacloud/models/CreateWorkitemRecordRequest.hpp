// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(actualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(recordUserIdentifier, recordUserIdentifier_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workitemIdentifier, workitemIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(actualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(recordUserIdentifier, recordUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workitemIdentifier, workitemIdentifier_);
    };
    CreateWorkitemRecordRequest() = default ;
    CreateWorkitemRecordRequest(const CreateWorkitemRecordRequest &) = default ;
    CreateWorkitemRecordRequest(CreateWorkitemRecordRequest &&) = default ;
    CreateWorkitemRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemRecordRequest() = default ;
    CreateWorkitemRecordRequest& operator=(const CreateWorkitemRecordRequest &) = default ;
    CreateWorkitemRecordRequest& operator=(CreateWorkitemRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->description_ == nullptr && return this->gmtEnd_ == nullptr && return this->gmtStart_ == nullptr && return this->recordUserIdentifier_ == nullptr && return this->type_ == nullptr
        && return this->workitemIdentifier_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline string actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, "") };
    inline CreateWorkitemRecordRequest& setActualTime(string actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkitemRecordRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline string gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
    inline CreateWorkitemRecordRequest& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline string gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
    inline CreateWorkitemRecordRequest& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // recordUserIdentifier Field Functions 
    bool hasRecordUserIdentifier() const { return this->recordUserIdentifier_ != nullptr;};
    void deleteRecordUserIdentifier() { this->recordUserIdentifier_ = nullptr;};
    inline string recordUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(recordUserIdentifier_, "") };
    inline CreateWorkitemRecordRequest& setRecordUserIdentifier(string recordUserIdentifier) { DARABONBA_PTR_SET_VALUE(recordUserIdentifier_, recordUserIdentifier) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkitemRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workitemIdentifier Field Functions 
    bool hasWorkitemIdentifier() const { return this->workitemIdentifier_ != nullptr;};
    void deleteWorkitemIdentifier() { this->workitemIdentifier_ = nullptr;};
    inline string workitemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemIdentifier_, "") };
    inline CreateWorkitemRecordRequest& setWorkitemIdentifier(string workitemIdentifier) { DARABONBA_PTR_SET_VALUE(workitemIdentifier_, workitemIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> actualTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtEnd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtStart_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> recordUserIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
