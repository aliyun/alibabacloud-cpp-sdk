// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateModelInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelInput& obj) { 
      DARABONBA_PTR_TO_JSON(address, address_);
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelInput& obj) { 
      DARABONBA_PTR_FROM_JSON(address, address_);
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateModelInput() = default ;
    UpdateModelInput(const UpdateModelInput &) = default ;
    UpdateModelInput(UpdateModelInput &&) = default ;
    UpdateModelInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelInput() = default ;
    UpdateModelInput& operator=(const UpdateModelInput &) = default ;
    UpdateModelInput& operator=(UpdateModelInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->apiKey_ == nullptr && return this->desc_ == nullptr && return this->models_ == nullptr && return this->name_ == nullptr && return this->provider_ == nullptr
        && return this->type_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline UpdateModelInput& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline UpdateModelInput& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateModelInput& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<string> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<string>) };
    inline vector<string> models() { DARABONBA_PTR_GET(models_, vector<string>) };
    inline UpdateModelInput& setModels(const vector<string> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline UpdateModelInput& setModels(vector<string> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline UpdateModelInput& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateModelInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> address_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<vector<string>> models_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
