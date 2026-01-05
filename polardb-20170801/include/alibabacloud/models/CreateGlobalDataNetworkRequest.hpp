// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGLOBALDATANETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGLOBALDATANETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateGlobalDataNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGlobalDataNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationFileSystemPath, destinationFileSystemPath_);
      DARABONBA_PTR_TO_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_TO_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(FreezeSourceDuringSync, freezeSourceDuringSync_);
      DARABONBA_PTR_TO_JSON(SourceFileSystemPath, sourceFileSystemPath_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGlobalDataNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationFileSystemPath, destinationFileSystemPath_);
      DARABONBA_PTR_FROM_JSON(DestinationId, destinationId_);
      DARABONBA_PTR_FROM_JSON(DestinationRegion, destinationRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(FreezeSourceDuringSync, freezeSourceDuringSync_);
      DARABONBA_PTR_FROM_JSON(SourceFileSystemPath, sourceFileSystemPath_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateGlobalDataNetworkRequest() = default ;
    CreateGlobalDataNetworkRequest(const CreateGlobalDataNetworkRequest &) = default ;
    CreateGlobalDataNetworkRequest(CreateGlobalDataNetworkRequest &&) = default ;
    CreateGlobalDataNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGlobalDataNetworkRequest() = default ;
    CreateGlobalDataNetworkRequest& operator=(const CreateGlobalDataNetworkRequest &) = default ;
    CreateGlobalDataNetworkRequest& operator=(CreateGlobalDataNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationFileSystemPath_ == nullptr && this->destinationId_ == nullptr && this->destinationRegion_ == nullptr && this->destinationType_ == nullptr && this->freezeSourceDuringSync_ == nullptr
        && this->sourceFileSystemPath_ == nullptr && this->sourceId_ == nullptr && this->sourceRegion_ == nullptr && this->sourceType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGlobalDataNetworkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationFileSystemPath Field Functions 
    bool hasDestinationFileSystemPath() const { return this->destinationFileSystemPath_ != nullptr;};
    void deleteDestinationFileSystemPath() { this->destinationFileSystemPath_ = nullptr;};
    inline string getDestinationFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(destinationFileSystemPath_, "") };
    inline CreateGlobalDataNetworkRequest& setDestinationFileSystemPath(string destinationFileSystemPath) { DARABONBA_PTR_SET_VALUE(destinationFileSystemPath_, destinationFileSystemPath) };


    // destinationId Field Functions 
    bool hasDestinationId() const { return this->destinationId_ != nullptr;};
    void deleteDestinationId() { this->destinationId_ = nullptr;};
    inline string getDestinationId() const { DARABONBA_PTR_GET_DEFAULT(destinationId_, "") };
    inline CreateGlobalDataNetworkRequest& setDestinationId(string destinationId) { DARABONBA_PTR_SET_VALUE(destinationId_, destinationId) };


    // destinationRegion Field Functions 
    bool hasDestinationRegion() const { return this->destinationRegion_ != nullptr;};
    void deleteDestinationRegion() { this->destinationRegion_ = nullptr;};
    inline string getDestinationRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationRegion_, "") };
    inline CreateGlobalDataNetworkRequest& setDestinationRegion(string destinationRegion) { DARABONBA_PTR_SET_VALUE(destinationRegion_, destinationRegion) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline CreateGlobalDataNetworkRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // freezeSourceDuringSync Field Functions 
    bool hasFreezeSourceDuringSync() const { return this->freezeSourceDuringSync_ != nullptr;};
    void deleteFreezeSourceDuringSync() { this->freezeSourceDuringSync_ = nullptr;};
    inline string getFreezeSourceDuringSync() const { DARABONBA_PTR_GET_DEFAULT(freezeSourceDuringSync_, "") };
    inline CreateGlobalDataNetworkRequest& setFreezeSourceDuringSync(string freezeSourceDuringSync) { DARABONBA_PTR_SET_VALUE(freezeSourceDuringSync_, freezeSourceDuringSync) };


    // sourceFileSystemPath Field Functions 
    bool hasSourceFileSystemPath() const { return this->sourceFileSystemPath_ != nullptr;};
    void deleteSourceFileSystemPath() { this->sourceFileSystemPath_ = nullptr;};
    inline string getSourceFileSystemPath() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemPath_, "") };
    inline CreateGlobalDataNetworkRequest& setSourceFileSystemPath(string sourceFileSystemPath) { DARABONBA_PTR_SET_VALUE(sourceFileSystemPath_, sourceFileSystemPath) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateGlobalDataNetworkRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline CreateGlobalDataNetworkRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateGlobalDataNetworkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> destinationFileSystemPath_ {};
    shared_ptr<string> destinationId_ {};
    shared_ptr<string> destinationRegion_ {};
    shared_ptr<string> destinationType_ {};
    shared_ptr<string> freezeSourceDuringSync_ {};
    shared_ptr<string> sourceFileSystemPath_ {};
    shared_ptr<string> sourceId_ {};
    shared_ptr<string> sourceRegion_ {};
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
