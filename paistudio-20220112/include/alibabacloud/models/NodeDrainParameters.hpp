// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEDRAINPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_NODEDRAINPARAMETERS_HPP_
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
  class NodeDrainParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeDrainParameters& obj) { 
      DARABONBA_PTR_TO_JSON(PodFromSubProducts, podFromSubProducts_);
      DARABONBA_PTR_TO_JSON(PodNames, podNames_);
    };
    friend void from_json(const Darabonba::Json& j, NodeDrainParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(PodFromSubProducts, podFromSubProducts_);
      DARABONBA_PTR_FROM_JSON(PodNames, podNames_);
    };
    NodeDrainParameters() = default ;
    NodeDrainParameters(const NodeDrainParameters &) = default ;
    NodeDrainParameters(NodeDrainParameters &&) = default ;
    NodeDrainParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeDrainParameters() = default ;
    NodeDrainParameters& operator=(const NodeDrainParameters &) = default ;
    NodeDrainParameters& operator=(NodeDrainParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->podFromSubProducts_ == nullptr
        && this->podNames_ == nullptr; };
    // podFromSubProducts Field Functions 
    bool hasPodFromSubProducts() const { return this->podFromSubProducts_ != nullptr;};
    void deletePodFromSubProducts() { this->podFromSubProducts_ = nullptr;};
    inline const vector<string> & getPodFromSubProducts() const { DARABONBA_PTR_GET_CONST(podFromSubProducts_, vector<string>) };
    inline vector<string> getPodFromSubProducts() { DARABONBA_PTR_GET(podFromSubProducts_, vector<string>) };
    inline NodeDrainParameters& setPodFromSubProducts(const vector<string> & podFromSubProducts) { DARABONBA_PTR_SET_VALUE(podFromSubProducts_, podFromSubProducts) };
    inline NodeDrainParameters& setPodFromSubProducts(vector<string> && podFromSubProducts) { DARABONBA_PTR_SET_RVALUE(podFromSubProducts_, podFromSubProducts) };


    // podNames Field Functions 
    bool hasPodNames() const { return this->podNames_ != nullptr;};
    void deletePodNames() { this->podNames_ = nullptr;};
    inline const vector<string> & getPodNames() const { DARABONBA_PTR_GET_CONST(podNames_, vector<string>) };
    inline vector<string> getPodNames() { DARABONBA_PTR_GET(podNames_, vector<string>) };
    inline NodeDrainParameters& setPodNames(const vector<string> & podNames) { DARABONBA_PTR_SET_VALUE(podNames_, podNames) };
    inline NodeDrainParameters& setPodNames(vector<string> && podNames) { DARABONBA_PTR_SET_RVALUE(podNames_, podNames) };


  protected:
    shared_ptr<vector<string>> podFromSubProducts_ {};
    shared_ptr<vector<string>> podNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
