// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERADDONMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterAddonMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterAddonMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config_schema, configSchema_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterAddonMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config_schema, configSchema_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeClusterAddonMetadataResponseBody() = default ;
    DescribeClusterAddonMetadataResponseBody(const DescribeClusterAddonMetadataResponseBody &) = default ;
    DescribeClusterAddonMetadataResponseBody(DescribeClusterAddonMetadataResponseBody &&) = default ;
    DescribeClusterAddonMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterAddonMetadataResponseBody() = default ;
    DescribeClusterAddonMetadataResponseBody& operator=(const DescribeClusterAddonMetadataResponseBody &) = default ;
    DescribeClusterAddonMetadataResponseBody& operator=(DescribeClusterAddonMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configSchema_ == nullptr
        && return this->name_ == nullptr && return this->version_ == nullptr; };
    // configSchema Field Functions 
    bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
    void deleteConfigSchema() { this->configSchema_ = nullptr;};
    inline string configSchema() const { DARABONBA_PTR_GET_DEFAULT(configSchema_, "") };
    inline DescribeClusterAddonMetadataResponseBody& setConfigSchema(string configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterAddonMetadataResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeClusterAddonMetadataResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The component schema parameters.
    std::shared_ptr<string> configSchema_ = nullptr;
    // The component name.
    std::shared_ptr<string> name_ = nullptr;
    // The component version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
