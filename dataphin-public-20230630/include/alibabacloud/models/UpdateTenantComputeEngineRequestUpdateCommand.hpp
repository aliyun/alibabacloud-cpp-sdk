// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTCOMPUTEENGINEREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTCOMPUTEENGINEREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateTenantComputeEngineRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantComputeEngineRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterUrlList, clusterUrlList_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantComputeEngineRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterUrlList, clusterUrlList_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateTenantComputeEngineRequestUpdateCommand() = default ;
    UpdateTenantComputeEngineRequestUpdateCommand(const UpdateTenantComputeEngineRequestUpdateCommand &) = default ;
    UpdateTenantComputeEngineRequestUpdateCommand(UpdateTenantComputeEngineRequestUpdateCommand &&) = default ;
    UpdateTenantComputeEngineRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantComputeEngineRequestUpdateCommand() = default ;
    UpdateTenantComputeEngineRequestUpdateCommand& operator=(const UpdateTenantComputeEngineRequestUpdateCommand &) = default ;
    UpdateTenantComputeEngineRequestUpdateCommand& operator=(UpdateTenantComputeEngineRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterUrlList_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // clusterUrlList Field Functions 
    bool hasClusterUrlList() const { return this->clusterUrlList_ != nullptr;};
    void deleteClusterUrlList() { this->clusterUrlList_ = nullptr;};
    inline const vector<string> & clusterUrlList() const { DARABONBA_PTR_GET_CONST(clusterUrlList_, vector<string>) };
    inline vector<string> clusterUrlList() { DARABONBA_PTR_GET(clusterUrlList_, vector<string>) };
    inline UpdateTenantComputeEngineRequestUpdateCommand& setClusterUrlList(const vector<string> & clusterUrlList) { DARABONBA_PTR_SET_VALUE(clusterUrlList_, clusterUrlList) };
    inline UpdateTenantComputeEngineRequestUpdateCommand& setClusterUrlList(vector<string> && clusterUrlList) { DARABONBA_PTR_SET_RVALUE(clusterUrlList_, clusterUrlList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateTenantComputeEngineRequestUpdateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateTenantComputeEngineRequestUpdateCommand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> clusterUrlList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
