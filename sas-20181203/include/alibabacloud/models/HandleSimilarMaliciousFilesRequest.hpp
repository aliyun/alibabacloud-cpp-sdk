// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HANDLESIMILARMALICIOUSFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HANDLESIMILARMALICIOUSFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class HandleSimilarMaliciousFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HandleSimilarMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, HandleSimilarMaliciousFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    HandleSimilarMaliciousFilesRequest() = default ;
    HandleSimilarMaliciousFilesRequest(const HandleSimilarMaliciousFilesRequest &) = default ;
    HandleSimilarMaliciousFilesRequest(HandleSimilarMaliciousFilesRequest &&) = default ;
    HandleSimilarMaliciousFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HandleSimilarMaliciousFilesRequest() = default ;
    HandleSimilarMaliciousFilesRequest& operator=(const HandleSimilarMaliciousFilesRequest &) = default ;
    HandleSimilarMaliciousFilesRequest& operator=(HandleSimilarMaliciousFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && return this->lang_ == nullptr && return this->operation_ == nullptr && return this->scanRange_ == nullptr && return this->scenario_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline HandleSimilarMaliciousFilesRequest& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline HandleSimilarMaliciousFilesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline HandleSimilarMaliciousFilesRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline string scanRange() const { DARABONBA_PTR_GET_DEFAULT(scanRange_, "") };
    inline HandleSimilarMaliciousFilesRequest& setScanRange(string scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline HandleSimilarMaliciousFilesRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> scanRange_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
