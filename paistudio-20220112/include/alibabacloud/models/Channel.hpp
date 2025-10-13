// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNEL_HPP_
#define ALIBABACLOUD_MODELS_CHANNEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Channel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Channel& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(SupportedChannelTypes, supportedChannelTypes_);
    };
    friend void from_json(const Darabonba::Json& j, Channel& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(SupportedChannelTypes, supportedChannelTypes_);
    };
    Channel() = default ;
    Channel(const Channel &) = default ;
    Channel(Channel &&) = default ;
    Channel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Channel() = default ;
    Channel& operator=(const Channel &) = default ;
    Channel& operator=(Channel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->properties_ == nullptr && return this->required_ == nullptr && return this->supportedChannelTypes_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Channel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Channel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline Channel& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline Channel& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline Channel& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // supportedChannelTypes Field Functions 
    bool hasSupportedChannelTypes() const { return this->supportedChannelTypes_ != nullptr;};
    void deleteSupportedChannelTypes() { this->supportedChannelTypes_ = nullptr;};
    inline const vector<string> & supportedChannelTypes() const { DARABONBA_PTR_GET_CONST(supportedChannelTypes_, vector<string>) };
    inline vector<string> supportedChannelTypes() { DARABONBA_PTR_GET(supportedChannelTypes_, vector<string>) };
    inline Channel& setSupportedChannelTypes(const vector<string> & supportedChannelTypes) { DARABONBA_PTR_SET_VALUE(supportedChannelTypes_, supportedChannelTypes) };
    inline Channel& setSupportedChannelTypes(vector<string> && supportedChannelTypes) { DARABONBA_PTR_SET_RVALUE(supportedChannelTypes_, supportedChannelTypes) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json properties_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<vector<string>> supportedChannelTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
