// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERINFO_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ContainerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentReaon, currentReaon_);
      DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_TO_JSON(CurrentTimestamp, currentTimestamp_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(LastReason, lastReason_);
      DARABONBA_PTR_TO_JSON(LastStatus, lastStatus_);
      DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(RestartCount, restartCount_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentReaon, currentReaon_);
      DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentTimestamp, currentTimestamp_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(LastReason, lastReason_);
      DARABONBA_PTR_FROM_JSON(LastStatus, lastStatus_);
      DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(RestartCount, restartCount_);
    };
    ContainerInfo() = default ;
    ContainerInfo(const ContainerInfo &) = default ;
    ContainerInfo(ContainerInfo &&) = default ;
    ContainerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerInfo() = default ;
    ContainerInfo& operator=(const ContainerInfo &) = default ;
    ContainerInfo& operator=(ContainerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentReaon_ == nullptr
        && this->currentStatus_ == nullptr && this->currentTimestamp_ == nullptr && this->image_ == nullptr && this->lastReason_ == nullptr && this->lastStatus_ == nullptr
        && this->lastTimestamp_ == nullptr && this->name_ == nullptr && this->port_ == nullptr && this->ready_ == nullptr && this->restartCount_ == nullptr; };
    // currentReaon Field Functions 
    bool hasCurrentReaon() const { return this->currentReaon_ != nullptr;};
    void deleteCurrentReaon() { this->currentReaon_ = nullptr;};
    inline string getCurrentReaon() const { DARABONBA_PTR_GET_DEFAULT(currentReaon_, "") };
    inline ContainerInfo& setCurrentReaon(string currentReaon) { DARABONBA_PTR_SET_VALUE(currentReaon_, currentReaon) };


    // currentStatus Field Functions 
    bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
    void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
    inline string getCurrentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
    inline ContainerInfo& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


    // currentTimestamp Field Functions 
    bool hasCurrentTimestamp() const { return this->currentTimestamp_ != nullptr;};
    void deleteCurrentTimestamp() { this->currentTimestamp_ = nullptr;};
    inline string getCurrentTimestamp() const { DARABONBA_PTR_GET_DEFAULT(currentTimestamp_, "") };
    inline ContainerInfo& setCurrentTimestamp(string currentTimestamp) { DARABONBA_PTR_SET_VALUE(currentTimestamp_, currentTimestamp) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ContainerInfo& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // lastReason Field Functions 
    bool hasLastReason() const { return this->lastReason_ != nullptr;};
    void deleteLastReason() { this->lastReason_ = nullptr;};
    inline string getLastReason() const { DARABONBA_PTR_GET_DEFAULT(lastReason_, "") };
    inline ContainerInfo& setLastReason(string lastReason) { DARABONBA_PTR_SET_VALUE(lastReason_, lastReason) };


    // lastStatus Field Functions 
    bool hasLastStatus() const { return this->lastStatus_ != nullptr;};
    void deleteLastStatus() { this->lastStatus_ = nullptr;};
    inline string getLastStatus() const { DARABONBA_PTR_GET_DEFAULT(lastStatus_, "") };
    inline ContainerInfo& setLastStatus(string lastStatus) { DARABONBA_PTR_SET_VALUE(lastStatus_, lastStatus) };


    // lastTimestamp Field Functions 
    bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
    void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
    inline string getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, "") };
    inline ContainerInfo& setLastTimestamp(string lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ContainerInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ContainerInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline bool getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, false) };
    inline ContainerInfo& setReady(bool ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // restartCount Field Functions 
    bool hasRestartCount() const { return this->restartCount_ != nullptr;};
    void deleteRestartCount() { this->restartCount_ = nullptr;};
    inline int32_t getRestartCount() const { DARABONBA_PTR_GET_DEFAULT(restartCount_, 0) };
    inline ContainerInfo& setRestartCount(int32_t restartCount) { DARABONBA_PTR_SET_VALUE(restartCount_, restartCount) };


  protected:
    shared_ptr<string> currentReaon_ {};
    shared_ptr<string> currentStatus_ {};
    shared_ptr<string> currentTimestamp_ {};
    shared_ptr<string> image_ {};
    shared_ptr<string> lastReason_ {};
    shared_ptr<string> lastStatus_ {};
    shared_ptr<string> lastTimestamp_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<bool> ready_ {};
    shared_ptr<int32_t> restartCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
