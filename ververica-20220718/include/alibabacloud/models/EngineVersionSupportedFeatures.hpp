// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENGINEVERSIONSUPPORTEDFEATURES_HPP_
#define ALIBABACLOUD_MODELS_ENGINEVERSIONSUPPORTEDFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class EngineVersionSupportedFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EngineVersionSupportedFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(supportNativeSavepoint, supportNativeSavepoint_);
      DARABONBA_PTR_TO_JSON(useForSqlDeployments, useForSqlDeployments_);
    };
    friend void from_json(const Darabonba::Json& j, EngineVersionSupportedFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(supportNativeSavepoint, supportNativeSavepoint_);
      DARABONBA_PTR_FROM_JSON(useForSqlDeployments, useForSqlDeployments_);
    };
    EngineVersionSupportedFeatures() = default ;
    EngineVersionSupportedFeatures(const EngineVersionSupportedFeatures &) = default ;
    EngineVersionSupportedFeatures(EngineVersionSupportedFeatures &&) = default ;
    EngineVersionSupportedFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EngineVersionSupportedFeatures() = default ;
    EngineVersionSupportedFeatures& operator=(const EngineVersionSupportedFeatures &) = default ;
    EngineVersionSupportedFeatures& operator=(EngineVersionSupportedFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportNativeSavepoint_ == nullptr
        && return this->useForSqlDeployments_ == nullptr; };
    // supportNativeSavepoint Field Functions 
    bool hasSupportNativeSavepoint() const { return this->supportNativeSavepoint_ != nullptr;};
    void deleteSupportNativeSavepoint() { this->supportNativeSavepoint_ = nullptr;};
    inline bool supportNativeSavepoint() const { DARABONBA_PTR_GET_DEFAULT(supportNativeSavepoint_, false) };
    inline EngineVersionSupportedFeatures& setSupportNativeSavepoint(bool supportNativeSavepoint) { DARABONBA_PTR_SET_VALUE(supportNativeSavepoint_, supportNativeSavepoint) };


    // useForSqlDeployments Field Functions 
    bool hasUseForSqlDeployments() const { return this->useForSqlDeployments_ != nullptr;};
    void deleteUseForSqlDeployments() { this->useForSqlDeployments_ = nullptr;};
    inline bool useForSqlDeployments() const { DARABONBA_PTR_GET_DEFAULT(useForSqlDeployments_, false) };
    inline EngineVersionSupportedFeatures& setUseForSqlDeployments(bool useForSqlDeployments) { DARABONBA_PTR_SET_VALUE(useForSqlDeployments_, useForSqlDeployments) };


  protected:
    std::shared_ptr<bool> supportNativeSavepoint_ = nullptr;
    std::shared_ptr<bool> useForSqlDeployments_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
