// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSINPUTCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSINPUTCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsInputChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsInputChannels& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(InputUri, inputUri_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsInputChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(InputUri, inputUri_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListTrainingJobsResponseBodyTrainingJobsInputChannels() = default ;
    ListTrainingJobsResponseBodyTrainingJobsInputChannels(const ListTrainingJobsResponseBodyTrainingJobsInputChannels &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsInputChannels(ListTrainingJobsResponseBodyTrainingJobsInputChannels &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsInputChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsInputChannels() = default ;
    ListTrainingJobsResponseBodyTrainingJobsInputChannels& operator=(const ListTrainingJobsResponseBodyTrainingJobsInputChannels &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsInputChannels& operator=(ListTrainingJobsResponseBodyTrainingJobsInputChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->inputUri_ != nullptr && this->name_ != nullptr && this->versionName_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsInputChannels& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // inputUri Field Functions 
    bool hasInputUri() const { return this->inputUri_ != nullptr;};
    void deleteInputUri() { this->inputUri_ = nullptr;};
    inline string inputUri() const { DARABONBA_PTR_GET_DEFAULT(inputUri_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsInputChannels& setInputUri(string inputUri) { DARABONBA_PTR_SET_VALUE(inputUri_, inputUri) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsInputChannels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsInputChannels& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> inputUri_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
