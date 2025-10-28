// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAYERVERSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATELAYERVERSIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InputCodeLocation.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateLayerVersionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLayerVersionInput& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(compatibleRuntime, compatibleRuntime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(license, license_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLayerVersionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(compatibleRuntime, compatibleRuntime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(license, license_);
    };
    CreateLayerVersionInput() = default ;
    CreateLayerVersionInput(const CreateLayerVersionInput &) = default ;
    CreateLayerVersionInput(CreateLayerVersionInput &&) = default ;
    CreateLayerVersionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLayerVersionInput() = default ;
    CreateLayerVersionInput& operator=(const CreateLayerVersionInput &) = default ;
    CreateLayerVersionInput& operator=(CreateLayerVersionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->compatibleRuntime_ == nullptr && return this->description_ == nullptr && return this->license_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const InputCodeLocation & code() const { DARABONBA_PTR_GET_CONST(code_, InputCodeLocation) };
    inline InputCodeLocation code() { DARABONBA_PTR_GET(code_, InputCodeLocation) };
    inline CreateLayerVersionInput& setCode(const InputCodeLocation & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline CreateLayerVersionInput& setCode(InputCodeLocation && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // compatibleRuntime Field Functions 
    bool hasCompatibleRuntime() const { return this->compatibleRuntime_ != nullptr;};
    void deleteCompatibleRuntime() { this->compatibleRuntime_ = nullptr;};
    inline const vector<string> & compatibleRuntime() const { DARABONBA_PTR_GET_CONST(compatibleRuntime_, vector<string>) };
    inline vector<string> compatibleRuntime() { DARABONBA_PTR_GET(compatibleRuntime_, vector<string>) };
    inline CreateLayerVersionInput& setCompatibleRuntime(const vector<string> & compatibleRuntime) { DARABONBA_PTR_SET_VALUE(compatibleRuntime_, compatibleRuntime) };
    inline CreateLayerVersionInput& setCompatibleRuntime(vector<string> && compatibleRuntime) { DARABONBA_PTR_SET_RVALUE(compatibleRuntime_, compatibleRuntime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLayerVersionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline CreateLayerVersionInput& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


  protected:
    std::shared_ptr<InputCodeLocation> code_ = nullptr;
    std::shared_ptr<vector<string>> compatibleRuntime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> license_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
