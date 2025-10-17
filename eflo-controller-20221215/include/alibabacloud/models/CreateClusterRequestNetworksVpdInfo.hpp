// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSVPDINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNETWORKSVPDINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNetworksVpdInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNetworksVpdInfo& obj) { 
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdSubnets, vpdSubnets_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNetworksVpdInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdSubnets, vpdSubnets_);
    };
    CreateClusterRequestNetworksVpdInfo() = default ;
    CreateClusterRequestNetworksVpdInfo(const CreateClusterRequestNetworksVpdInfo &) = default ;
    CreateClusterRequestNetworksVpdInfo(CreateClusterRequestNetworksVpdInfo &&) = default ;
    CreateClusterRequestNetworksVpdInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNetworksVpdInfo() = default ;
    CreateClusterRequestNetworksVpdInfo& operator=(const CreateClusterRequestNetworksVpdInfo &) = default ;
    CreateClusterRequestNetworksVpdInfo& operator=(CreateClusterRequestNetworksVpdInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpdId_ == nullptr
        && return this->vpdSubnets_ == nullptr; };
    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline CreateClusterRequestNetworksVpdInfo& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdSubnets Field Functions 
    bool hasVpdSubnets() const { return this->vpdSubnets_ != nullptr;};
    void deleteVpdSubnets() { this->vpdSubnets_ = nullptr;};
    inline const vector<string> & vpdSubnets() const { DARABONBA_PTR_GET_CONST(vpdSubnets_, vector<string>) };
    inline vector<string> vpdSubnets() { DARABONBA_PTR_GET(vpdSubnets_, vector<string>) };
    inline CreateClusterRequestNetworksVpdInfo& setVpdSubnets(const vector<string> & vpdSubnets) { DARABONBA_PTR_SET_VALUE(vpdSubnets_, vpdSubnets) };
    inline CreateClusterRequestNetworksVpdInfo& setVpdSubnets(vector<string> && vpdSubnets) { DARABONBA_PTR_SET_RVALUE(vpdSubnets_, vpdSubnets) };


  protected:
    // VPC ID
    std::shared_ptr<string> vpdId_ = nullptr;
    // List of cluster subnet IDs
    std::shared_ptr<vector<string>> vpdSubnets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
