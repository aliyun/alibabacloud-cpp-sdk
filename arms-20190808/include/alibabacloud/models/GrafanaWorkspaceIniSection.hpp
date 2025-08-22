// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINISECTION_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINISECTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspaceIniProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceIniSection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceIniSection& obj) { 
      DARABONBA_PTR_TO_JSON(propertys, propertys_);
      DARABONBA_PTR_TO_JSON(section, section_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceIniSection& obj) { 
      DARABONBA_PTR_FROM_JSON(propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(section, section_);
    };
    GrafanaWorkspaceIniSection() = default ;
    GrafanaWorkspaceIniSection(const GrafanaWorkspaceIniSection &) = default ;
    GrafanaWorkspaceIniSection(GrafanaWorkspaceIniSection &&) = default ;
    GrafanaWorkspaceIniSection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceIniSection() = default ;
    GrafanaWorkspaceIniSection& operator=(const GrafanaWorkspaceIniSection &) = default ;
    GrafanaWorkspaceIniSection& operator=(GrafanaWorkspaceIniSection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertys_ != nullptr
        && this->section_ != nullptr; };
    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<GrafanaWorkspaceIniProperty> & propertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<GrafanaWorkspaceIniProperty>) };
    inline vector<GrafanaWorkspaceIniProperty> propertys() { DARABONBA_PTR_GET(propertys_, vector<GrafanaWorkspaceIniProperty>) };
    inline GrafanaWorkspaceIniSection& setPropertys(const vector<GrafanaWorkspaceIniProperty> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline GrafanaWorkspaceIniSection& setPropertys(vector<GrafanaWorkspaceIniProperty> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // section Field Functions 
    bool hasSection() const { return this->section_ != nullptr;};
    void deleteSection() { this->section_ = nullptr;};
    inline string section() const { DARABONBA_PTR_GET_DEFAULT(section_, "") };
    inline GrafanaWorkspaceIniSection& setSection(string section) { DARABONBA_PTR_SET_VALUE(section_, section) };


  protected:
    std::shared_ptr<vector<GrafanaWorkspaceIniProperty>> propertys_ = nullptr;
    std::shared_ptr<string> section_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
