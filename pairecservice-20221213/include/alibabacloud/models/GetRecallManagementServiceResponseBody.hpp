// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetRecallManagementServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecallManagementServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentRecallManagementServiceVersionId, currentRecallManagementServiceVersionId_);
      DARABONBA_PTR_TO_JSON(CurrentRecallManagementServiceVersionName, currentRecallManagementServiceVersionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecallManagementServiceId, recallManagementServiceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecallManagementServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentRecallManagementServiceVersionId, currentRecallManagementServiceVersionId_);
      DARABONBA_PTR_FROM_JSON(CurrentRecallManagementServiceVersionName, currentRecallManagementServiceVersionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceId, recallManagementServiceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRecallManagementServiceResponseBody() = default ;
    GetRecallManagementServiceResponseBody(const GetRecallManagementServiceResponseBody &) = default ;
    GetRecallManagementServiceResponseBody(GetRecallManagementServiceResponseBody &&) = default ;
    GetRecallManagementServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecallManagementServiceResponseBody() = default ;
    GetRecallManagementServiceResponseBody& operator=(const GetRecallManagementServiceResponseBody &) = default ;
    GetRecallManagementServiceResponseBody& operator=(GetRecallManagementServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentRecallManagementServiceVersionId_ == nullptr
        && this->currentRecallManagementServiceVersionName_ == nullptr && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr
        && this->recallManagementServiceId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // currentRecallManagementServiceVersionId Field Functions 
    bool hasCurrentRecallManagementServiceVersionId() const { return this->currentRecallManagementServiceVersionId_ != nullptr;};
    void deleteCurrentRecallManagementServiceVersionId() { this->currentRecallManagementServiceVersionId_ = nullptr;};
    inline string getCurrentRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(currentRecallManagementServiceVersionId_, "") };
    inline GetRecallManagementServiceResponseBody& setCurrentRecallManagementServiceVersionId(string currentRecallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(currentRecallManagementServiceVersionId_, currentRecallManagementServiceVersionId) };


    // currentRecallManagementServiceVersionName Field Functions 
    bool hasCurrentRecallManagementServiceVersionName() const { return this->currentRecallManagementServiceVersionName_ != nullptr;};
    void deleteCurrentRecallManagementServiceVersionName() { this->currentRecallManagementServiceVersionName_ = nullptr;};
    inline string getCurrentRecallManagementServiceVersionName() const { DARABONBA_PTR_GET_DEFAULT(currentRecallManagementServiceVersionName_, "") };
    inline GetRecallManagementServiceResponseBody& setCurrentRecallManagementServiceVersionName(string currentRecallManagementServiceVersionName) { DARABONBA_PTR_SET_VALUE(currentRecallManagementServiceVersionName_, currentRecallManagementServiceVersionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRecallManagementServiceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetRecallManagementServiceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetRecallManagementServiceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRecallManagementServiceResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recallManagementServiceId Field Functions 
    bool hasRecallManagementServiceId() const { return this->recallManagementServiceId_ != nullptr;};
    void deleteRecallManagementServiceId() { this->recallManagementServiceId_ = nullptr;};
    inline string getRecallManagementServiceId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceId_, "") };
    inline GetRecallManagementServiceResponseBody& setRecallManagementServiceId(string recallManagementServiceId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceId_, recallManagementServiceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecallManagementServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRecallManagementServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> currentRecallManagementServiceVersionId_ {};
    shared_ptr<string> currentRecallManagementServiceVersionName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> recallManagementServiceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
