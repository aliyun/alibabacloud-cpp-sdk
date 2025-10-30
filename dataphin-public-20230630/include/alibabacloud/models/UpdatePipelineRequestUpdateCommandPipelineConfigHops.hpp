// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEREQUESTUPDATECOMMANDPIPELINECONFIGHOPS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEREQUESTUPDATECOMMANDPIPELINECONFIGHOPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdatePipelineRequestUpdateCommandPipelineConfigHops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineRequestUpdateCommandPipelineConfigHops& obj) { 
      DARABONBA_PTR_TO_JSON(SendTo, sendTo_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineRequestUpdateCommandPipelineConfigHops& obj) { 
      DARABONBA_PTR_FROM_JSON(SendTo, sendTo_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    UpdatePipelineRequestUpdateCommandPipelineConfigHops() = default ;
    UpdatePipelineRequestUpdateCommandPipelineConfigHops(const UpdatePipelineRequestUpdateCommandPipelineConfigHops &) = default ;
    UpdatePipelineRequestUpdateCommandPipelineConfigHops(UpdatePipelineRequestUpdateCommandPipelineConfigHops &&) = default ;
    UpdatePipelineRequestUpdateCommandPipelineConfigHops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineRequestUpdateCommandPipelineConfigHops() = default ;
    UpdatePipelineRequestUpdateCommandPipelineConfigHops& operator=(const UpdatePipelineRequestUpdateCommandPipelineConfigHops &) = default ;
    UpdatePipelineRequestUpdateCommandPipelineConfigHops& operator=(UpdatePipelineRequestUpdateCommandPipelineConfigHops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sendTo_ == nullptr
        && return this->source_ == nullptr && return this->target_ == nullptr; };
    // sendTo Field Functions 
    bool hasSendTo() const { return this->sendTo_ != nullptr;};
    void deleteSendTo() { this->sendTo_ = nullptr;};
    inline bool sendTo() const { DARABONBA_PTR_GET_DEFAULT(sendTo_, false) };
    inline UpdatePipelineRequestUpdateCommandPipelineConfigHops& setSendTo(bool sendTo) { DARABONBA_PTR_SET_VALUE(sendTo_, sendTo) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdatePipelineRequestUpdateCommandPipelineConfigHops& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline UpdatePipelineRequestUpdateCommandPipelineConfigHops& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<bool> sendTo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
