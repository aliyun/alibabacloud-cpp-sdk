// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCOMPONENTSCOMPONENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTCOMPONENTSCOMPONENTCONFIG_HPP_
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
  class CreateClusterRequestComponentsComponentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestComponentsComponentConfig& obj) { 
      DARABONBA_ANY_TO_JSON(BasicArgs, basicArgs_);
      DARABONBA_PTR_TO_JSON(NodeUnits, nodeUnits_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestComponentsComponentConfig& obj) { 
      DARABONBA_ANY_FROM_JSON(BasicArgs, basicArgs_);
      DARABONBA_PTR_FROM_JSON(NodeUnits, nodeUnits_);
    };
    CreateClusterRequestComponentsComponentConfig() = default ;
    CreateClusterRequestComponentsComponentConfig(const CreateClusterRequestComponentsComponentConfig &) = default ;
    CreateClusterRequestComponentsComponentConfig(CreateClusterRequestComponentsComponentConfig &&) = default ;
    CreateClusterRequestComponentsComponentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestComponentsComponentConfig() = default ;
    CreateClusterRequestComponentsComponentConfig& operator=(const CreateClusterRequestComponentsComponentConfig &) = default ;
    CreateClusterRequestComponentsComponentConfig& operator=(CreateClusterRequestComponentsComponentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->basicArgs_ != nullptr
        && this->nodeUnits_ != nullptr; };
    // basicArgs Field Functions 
    bool hasBasicArgs() const { return this->basicArgs_ != nullptr;};
    void deleteBasicArgs() { this->basicArgs_ = nullptr;};
    inline     const Darabonba::Json & basicArgs() const { DARABONBA_GET(basicArgs_) };
    Darabonba::Json & basicArgs() { DARABONBA_GET(basicArgs_) };
    inline CreateClusterRequestComponentsComponentConfig& setBasicArgs(const Darabonba::Json & basicArgs) { DARABONBA_SET_VALUE(basicArgs_, basicArgs) };
    inline CreateClusterRequestComponentsComponentConfig& setBasicArgs(Darabonba::Json & basicArgs) { DARABONBA_SET_RVALUE(basicArgs_, basicArgs) };


    // nodeUnits Field Functions 
    bool hasNodeUnits() const { return this->nodeUnits_ != nullptr;};
    void deleteNodeUnits() { this->nodeUnits_ = nullptr;};
    inline const vector<Darabonba::Json> & nodeUnits() const { DARABONBA_PTR_GET_CONST(nodeUnits_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> nodeUnits() { DARABONBA_PTR_GET(nodeUnits_, vector<Darabonba::Json>) };
    inline CreateClusterRequestComponentsComponentConfig& setNodeUnits(const vector<Darabonba::Json> & nodeUnits) { DARABONBA_PTR_SET_VALUE(nodeUnits_, nodeUnits) };
    inline CreateClusterRequestComponentsComponentConfig& setNodeUnits(vector<Darabonba::Json> && nodeUnits) { DARABONBA_PTR_SET_RVALUE(nodeUnits_, nodeUnits) };


  protected:
    // Basic component parameters
    Darabonba::Json basicArgs_ = nullptr;
    // Node pool configuration, used to establish the correspondence between node groups and node pools. Required when ComponentType is "ACKEdge", otherwise it can be empty.
    std::shared_ptr<vector<Darabonba::Json>> nodeUnits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
