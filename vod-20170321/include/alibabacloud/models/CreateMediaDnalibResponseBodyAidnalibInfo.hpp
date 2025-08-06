// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIADNALIBRESPONSEBODYAIDNALIBINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIADNALIBRESPONSEBODYAIDNALIBINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateMediaDNALibResponseBodyAIDNALibInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaDNALibResponseBodyAIDNALibInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaDNALibResponseBodyAIDNALibInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    CreateMediaDNALibResponseBodyAIDNALibInfo() = default ;
    CreateMediaDNALibResponseBodyAIDNALibInfo(const CreateMediaDNALibResponseBodyAIDNALibInfo &) = default ;
    CreateMediaDNALibResponseBodyAIDNALibInfo(CreateMediaDNALibResponseBodyAIDNALibInfo &&) = default ;
    CreateMediaDNALibResponseBodyAIDNALibInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaDNALibResponseBodyAIDNALibInfo() = default ;
    CreateMediaDNALibResponseBodyAIDNALibInfo& operator=(const CreateMediaDNALibResponseBodyAIDNALibInfo &) = default ;
    CreateMediaDNALibResponseBodyAIDNALibInfo& operator=(CreateMediaDNALibResponseBodyAIDNALibInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fpDBId_ != nullptr
        && this->modelType_ != nullptr && this->state_ != nullptr; };
    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline CreateMediaDNALibResponseBodyAIDNALibInfo& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateMediaDNALibResponseBodyAIDNALibInfo& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateMediaDNALibResponseBodyAIDNALibInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> fpDBId_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
