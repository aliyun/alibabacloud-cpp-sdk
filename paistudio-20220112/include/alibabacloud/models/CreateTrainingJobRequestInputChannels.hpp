// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTINPUTCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAININGJOBREQUESTINPUTCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CreateTrainingJobRequestInputChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrainingJobRequestInputChannels& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(InputUri, inputUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrainingJobRequestInputChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(InputUri, inputUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    CreateTrainingJobRequestInputChannels() = default ;
    CreateTrainingJobRequestInputChannels(const CreateTrainingJobRequestInputChannels &) = default ;
    CreateTrainingJobRequestInputChannels(CreateTrainingJobRequestInputChannels &&) = default ;
    CreateTrainingJobRequestInputChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrainingJobRequestInputChannels() = default ;
    CreateTrainingJobRequestInputChannels& operator=(const CreateTrainingJobRequestInputChannels &) = default ;
    CreateTrainingJobRequestInputChannels& operator=(CreateTrainingJobRequestInputChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->inputUri_ != nullptr && this->name_ != nullptr && this->options_ != nullptr && this->versionName_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline CreateTrainingJobRequestInputChannels& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // inputUri Field Functions 
    bool hasInputUri() const { return this->inputUri_ != nullptr;};
    void deleteInputUri() { this->inputUri_ = nullptr;};
    inline string inputUri() const { DARABONBA_PTR_GET_DEFAULT(inputUri_, "") };
    inline CreateTrainingJobRequestInputChannels& setInputUri(string inputUri) { DARABONBA_PTR_SET_VALUE(inputUri_, inputUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTrainingJobRequestInputChannels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateTrainingJobRequestInputChannels& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline CreateTrainingJobRequestInputChannels& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> inputUri_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
