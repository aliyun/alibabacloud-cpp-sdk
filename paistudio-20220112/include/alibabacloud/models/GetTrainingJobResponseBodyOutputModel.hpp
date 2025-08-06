// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYOUTPUTMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYOUTPUTMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyOutputModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyOutputModel& obj) { 
      DARABONBA_PTR_TO_JSON(OutputChannelName, outputChannelName_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyOutputModel& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputChannelName, outputChannelName_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    GetTrainingJobResponseBodyOutputModel() = default ;
    GetTrainingJobResponseBodyOutputModel(const GetTrainingJobResponseBodyOutputModel &) = default ;
    GetTrainingJobResponseBodyOutputModel(GetTrainingJobResponseBodyOutputModel &&) = default ;
    GetTrainingJobResponseBodyOutputModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyOutputModel() = default ;
    GetTrainingJobResponseBodyOutputModel& operator=(const GetTrainingJobResponseBodyOutputModel &) = default ;
    GetTrainingJobResponseBodyOutputModel& operator=(GetTrainingJobResponseBodyOutputModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputChannelName_ != nullptr
        && this->uri_ != nullptr; };
    // outputChannelName Field Functions 
    bool hasOutputChannelName() const { return this->outputChannelName_ != nullptr;};
    void deleteOutputChannelName() { this->outputChannelName_ = nullptr;};
    inline string outputChannelName() const { DARABONBA_PTR_GET_DEFAULT(outputChannelName_, "") };
    inline GetTrainingJobResponseBodyOutputModel& setOutputChannelName(string outputChannelName) { DARABONBA_PTR_SET_VALUE(outputChannelName_, outputChannelName) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetTrainingJobResponseBodyOutputModel& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> outputChannelName_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
