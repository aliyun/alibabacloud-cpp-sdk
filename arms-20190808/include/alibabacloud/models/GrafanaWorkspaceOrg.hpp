// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEORG_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEORG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceOrg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceOrg& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceOrg& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GrafanaWorkspaceOrg() = default ;
    GrafanaWorkspaceOrg(const GrafanaWorkspaceOrg &) = default ;
    GrafanaWorkspaceOrg(GrafanaWorkspaceOrg &&) = default ;
    GrafanaWorkspaceOrg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceOrg() = default ;
    GrafanaWorkspaceOrg& operator=(const GrafanaWorkspaceOrg &) = default ;
    GrafanaWorkspaceOrg& operator=(GrafanaWorkspaceOrg &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceOrg& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrafanaWorkspaceOrg& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
