// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEDOMAINMULTISTREAMOPTIMALMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEDOMAINMULTISTREAMOPTIMALMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveDomainMultiStreamOptimalModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveDomainMultiStreamOptimalModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OptimalMode, optimalMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveDomainMultiStreamOptimalModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OptimalMode, optimalMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    SetLiveDomainMultiStreamOptimalModeRequest() = default ;
    SetLiveDomainMultiStreamOptimalModeRequest(const SetLiveDomainMultiStreamOptimalModeRequest &) = default ;
    SetLiveDomainMultiStreamOptimalModeRequest(SetLiveDomainMultiStreamOptimalModeRequest &&) = default ;
    SetLiveDomainMultiStreamOptimalModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveDomainMultiStreamOptimalModeRequest() = default ;
    SetLiveDomainMultiStreamOptimalModeRequest& operator=(const SetLiveDomainMultiStreamOptimalModeRequest &) = default ;
    SetLiveDomainMultiStreamOptimalModeRequest& operator=(SetLiveDomainMultiStreamOptimalModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domain_ != nullptr && this->optimalMode_ != nullptr && this->ownerId_ != nullptr && this->streamName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetLiveDomainMultiStreamOptimalModeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SetLiveDomainMultiStreamOptimalModeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // optimalMode Field Functions 
    bool hasOptimalMode() const { return this->optimalMode_ != nullptr;};
    void deleteOptimalMode() { this->optimalMode_ = nullptr;};
    inline string optimalMode() const { DARABONBA_PTR_GET_DEFAULT(optimalMode_, "") };
    inline SetLiveDomainMultiStreamOptimalModeRequest& setOptimalMode(string optimalMode) { DARABONBA_PTR_SET_VALUE(optimalMode_, optimalMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveDomainMultiStreamOptimalModeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline SetLiveDomainMultiStreamOptimalModeRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // Specifies whether to enable the auto mode of dual-stream disaster recovery. Valid values:
    // 
    // *   **on**: enables the auto mode.
    // *   **off**: disables the auto mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> optimalMode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the live stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
