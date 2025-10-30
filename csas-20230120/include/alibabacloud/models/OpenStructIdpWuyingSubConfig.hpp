// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTIDPWUYINGSUBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTIDPWUYINGSUBCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructIdpWuyingSubConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructIdpWuyingSubConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Aliuids, aliuids_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructIdpWuyingSubConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliuids, aliuids_);
    };
    OpenStructIdpWuyingSubConfig() = default ;
    OpenStructIdpWuyingSubConfig(const OpenStructIdpWuyingSubConfig &) = default ;
    OpenStructIdpWuyingSubConfig(OpenStructIdpWuyingSubConfig &&) = default ;
    OpenStructIdpWuyingSubConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructIdpWuyingSubConfig() = default ;
    OpenStructIdpWuyingSubConfig& operator=(const OpenStructIdpWuyingSubConfig &) = default ;
    OpenStructIdpWuyingSubConfig& operator=(OpenStructIdpWuyingSubConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliuids_ == nullptr; };
    // aliuids Field Functions 
    bool hasAliuids() const { return this->aliuids_ != nullptr;};
    void deleteAliuids() { this->aliuids_ = nullptr;};
    inline const vector<string> & aliuids() const { DARABONBA_PTR_GET_CONST(aliuids_, vector<string>) };
    inline vector<string> aliuids() { DARABONBA_PTR_GET(aliuids_, vector<string>) };
    inline OpenStructIdpWuyingSubConfig& setAliuids(const vector<string> & aliuids) { DARABONBA_PTR_SET_VALUE(aliuids_, aliuids) };
    inline OpenStructIdpWuyingSubConfig& setAliuids(vector<string> && aliuids) { DARABONBA_PTR_SET_RVALUE(aliuids_, aliuids) };


  protected:
    std::shared_ptr<vector<string>> aliuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
