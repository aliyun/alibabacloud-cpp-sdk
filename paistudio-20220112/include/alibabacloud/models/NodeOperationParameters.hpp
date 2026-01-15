// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEOPERATIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_NODEOPERATIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NodeCordonParameters.hpp>
#include <alibabacloud/models/NodeDrainParameters.hpp>
#include <alibabacloud/models/NodeUncordonParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeOperationParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeOperationParameters& obj) { 
      DARABONBA_PTR_TO_JSON(CordonParameters, cordonParameters_);
      DARABONBA_PTR_TO_JSON(DrainParameters, drainParameters_);
      DARABONBA_PTR_TO_JSON(UncordonParameters, uncordonParameters_);
    };
    friend void from_json(const Darabonba::Json& j, NodeOperationParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(CordonParameters, cordonParameters_);
      DARABONBA_PTR_FROM_JSON(DrainParameters, drainParameters_);
      DARABONBA_PTR_FROM_JSON(UncordonParameters, uncordonParameters_);
    };
    NodeOperationParameters() = default ;
    NodeOperationParameters(const NodeOperationParameters &) = default ;
    NodeOperationParameters(NodeOperationParameters &&) = default ;
    NodeOperationParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeOperationParameters() = default ;
    NodeOperationParameters& operator=(const NodeOperationParameters &) = default ;
    NodeOperationParameters& operator=(NodeOperationParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cordonParameters_ == nullptr
        && this->drainParameters_ == nullptr && this->uncordonParameters_ == nullptr; };
    // cordonParameters Field Functions 
    bool hasCordonParameters() const { return this->cordonParameters_ != nullptr;};
    void deleteCordonParameters() { this->cordonParameters_ = nullptr;};
    inline const NodeCordonParameters & getCordonParameters() const { DARABONBA_PTR_GET_CONST(cordonParameters_, NodeCordonParameters) };
    inline NodeCordonParameters getCordonParameters() { DARABONBA_PTR_GET(cordonParameters_, NodeCordonParameters) };
    inline NodeOperationParameters& setCordonParameters(const NodeCordonParameters & cordonParameters) { DARABONBA_PTR_SET_VALUE(cordonParameters_, cordonParameters) };
    inline NodeOperationParameters& setCordonParameters(NodeCordonParameters && cordonParameters) { DARABONBA_PTR_SET_RVALUE(cordonParameters_, cordonParameters) };


    // drainParameters Field Functions 
    bool hasDrainParameters() const { return this->drainParameters_ != nullptr;};
    void deleteDrainParameters() { this->drainParameters_ = nullptr;};
    inline const NodeDrainParameters & getDrainParameters() const { DARABONBA_PTR_GET_CONST(drainParameters_, NodeDrainParameters) };
    inline NodeDrainParameters getDrainParameters() { DARABONBA_PTR_GET(drainParameters_, NodeDrainParameters) };
    inline NodeOperationParameters& setDrainParameters(const NodeDrainParameters & drainParameters) { DARABONBA_PTR_SET_VALUE(drainParameters_, drainParameters) };
    inline NodeOperationParameters& setDrainParameters(NodeDrainParameters && drainParameters) { DARABONBA_PTR_SET_RVALUE(drainParameters_, drainParameters) };


    // uncordonParameters Field Functions 
    bool hasUncordonParameters() const { return this->uncordonParameters_ != nullptr;};
    void deleteUncordonParameters() { this->uncordonParameters_ = nullptr;};
    inline const NodeUncordonParameters & getUncordonParameters() const { DARABONBA_PTR_GET_CONST(uncordonParameters_, NodeUncordonParameters) };
    inline NodeUncordonParameters getUncordonParameters() { DARABONBA_PTR_GET(uncordonParameters_, NodeUncordonParameters) };
    inline NodeOperationParameters& setUncordonParameters(const NodeUncordonParameters & uncordonParameters) { DARABONBA_PTR_SET_VALUE(uncordonParameters_, uncordonParameters) };
    inline NodeOperationParameters& setUncordonParameters(NodeUncordonParameters && uncordonParameters) { DARABONBA_PTR_SET_RVALUE(uncordonParameters_, uncordonParameters) };


  protected:
    shared_ptr<NodeCordonParameters> cordonParameters_ {};
    shared_ptr<NodeDrainParameters> drainParameters_ {};
    shared_ptr<NodeUncordonParameters> uncordonParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
