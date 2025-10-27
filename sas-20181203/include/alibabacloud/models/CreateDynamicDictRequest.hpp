// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDYNAMICDICTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDYNAMICDICTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateDynamicDictRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDynamicDictRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Override, override_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDynamicDictRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Override, override_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    CreateDynamicDictRequest() = default ;
    CreateDynamicDictRequest(const CreateDynamicDictRequest &) = default ;
    CreateDynamicDictRequest(CreateDynamicDictRequest &&) = default ;
    CreateDynamicDictRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDynamicDictRequest() = default ;
    CreateDynamicDictRequest& operator=(const CreateDynamicDictRequest &) = default ;
    CreateDynamicDictRequest& operator=(CreateDynamicDictRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->override_ == nullptr
        && return this->sourceIp_ == nullptr; };
    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool override() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline CreateDynamicDictRequest& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateDynamicDictRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // Specifies whether to overwrite existing data. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> override_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
