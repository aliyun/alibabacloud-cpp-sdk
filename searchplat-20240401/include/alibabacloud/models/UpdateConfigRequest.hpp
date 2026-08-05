// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigRequest& obj) { 
      DARABONBA_ANY_TO_JSON(configData, configData_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(configData, configData_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateConfigRequest() = default ;
    UpdateConfigRequest(const UpdateConfigRequest &) = default ;
    UpdateConfigRequest(UpdateConfigRequest &&) = default ;
    UpdateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigRequest() = default ;
    UpdateConfigRequest& operator=(const UpdateConfigRequest &) = default ;
    UpdateConfigRequest& operator=(UpdateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configData_ == nullptr
        && this->dryRun_ == nullptr; };
    // configData Field Functions 
    bool hasConfigData() const { return this->configData_ != nullptr;};
    void deleteConfigData() { this->configData_ = nullptr;};
    inline     const Darabonba::Json & getConfigData() const { DARABONBA_GET(configData_) };
    Darabonba::Json & getConfigData() { DARABONBA_GET(configData_) };
    inline UpdateConfigRequest& setConfigData(const Darabonba::Json & configData) { DARABONBA_SET_VALUE(configData_, configData) };
    inline UpdateConfigRequest& setConfigData(Darabonba::Json && configData) { DARABONBA_SET_RVALUE(configData_, configData) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateConfigRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The configuration content.
    Darabonba::Json configData_ {};
    // Specifies whether this is a dry run request.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
