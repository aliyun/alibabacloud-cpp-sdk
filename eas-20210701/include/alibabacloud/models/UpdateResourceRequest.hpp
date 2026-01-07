// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(SelfManagedResourceOptions, selfManagedResourceOptions_);
    };
    UpdateResourceRequest() = default ;
    UpdateResourceRequest(const UpdateResourceRequest &) = default ;
    UpdateResourceRequest(UpdateResourceRequest &&) = default ;
    UpdateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceRequest() = default ;
    UpdateResourceRequest& operator=(const UpdateResourceRequest &) = default ;
    UpdateResourceRequest& operator=(UpdateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SelfManagedResourceOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelfManagedResourceOptions& obj) { 
        DARABONBA_PTR_TO_JSON(NodeMatchLabels, nodeMatchLabels_);
        DARABONBA_PTR_TO_JSON(NodeTolerations, nodeTolerations_);
      };
      friend void from_json(const Darabonba::Json& j, SelfManagedResourceOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeMatchLabels, nodeMatchLabels_);
        DARABONBA_PTR_FROM_JSON(NodeTolerations, nodeTolerations_);
      };
      SelfManagedResourceOptions() = default ;
      SelfManagedResourceOptions(const SelfManagedResourceOptions &) = default ;
      SelfManagedResourceOptions(SelfManagedResourceOptions &&) = default ;
      SelfManagedResourceOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelfManagedResourceOptions() = default ;
      SelfManagedResourceOptions& operator=(const SelfManagedResourceOptions &) = default ;
      SelfManagedResourceOptions& operator=(SelfManagedResourceOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeTolerations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeTolerations& obj) { 
          DARABONBA_PTR_TO_JSON(effect, effect_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NodeTolerations& obj) { 
          DARABONBA_PTR_FROM_JSON(effect, effect_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        NodeTolerations() = default ;
        NodeTolerations(const NodeTolerations &) = default ;
        NodeTolerations(NodeTolerations &&) = default ;
        NodeTolerations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeTolerations() = default ;
        NodeTolerations& operator=(const NodeTolerations &) = default ;
        NodeTolerations& operator=(NodeTolerations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->effect_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
        // effect Field Functions 
        bool hasEffect() const { return this->effect_ != nullptr;};
        void deleteEffect() { this->effect_ = nullptr;};
        inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
        inline NodeTolerations& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline NodeTolerations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline NodeTolerations& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline NodeTolerations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The effect.
        // Valid values:
        // - PreferNoSchedule
        // - NoSchedule
        // - NoExecute
        shared_ptr<string> effect_ {};
        // The key name.
        shared_ptr<string> key_ {};
        // Relationship between key names and key values.
        // Valid values:
        // - Equal
        // - Exists
        shared_ptr<string> operator_ {};
        // The key value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->nodeMatchLabels_ == nullptr
        && this->nodeTolerations_ == nullptr; };
      // nodeMatchLabels Field Functions 
      bool hasNodeMatchLabels() const { return this->nodeMatchLabels_ != nullptr;};
      void deleteNodeMatchLabels() { this->nodeMatchLabels_ = nullptr;};
      inline const map<string, string> & getNodeMatchLabels() const { DARABONBA_PTR_GET_CONST(nodeMatchLabels_, map<string, string>) };
      inline map<string, string> getNodeMatchLabels() { DARABONBA_PTR_GET(nodeMatchLabels_, map<string, string>) };
      inline SelfManagedResourceOptions& setNodeMatchLabels(const map<string, string> & nodeMatchLabels) { DARABONBA_PTR_SET_VALUE(nodeMatchLabels_, nodeMatchLabels) };
      inline SelfManagedResourceOptions& setNodeMatchLabels(map<string, string> && nodeMatchLabels) { DARABONBA_PTR_SET_RVALUE(nodeMatchLabels_, nodeMatchLabels) };


      // nodeTolerations Field Functions 
      bool hasNodeTolerations() const { return this->nodeTolerations_ != nullptr;};
      void deleteNodeTolerations() { this->nodeTolerations_ = nullptr;};
      inline const vector<SelfManagedResourceOptions::NodeTolerations> & getNodeTolerations() const { DARABONBA_PTR_GET_CONST(nodeTolerations_, vector<SelfManagedResourceOptions::NodeTolerations>) };
      inline vector<SelfManagedResourceOptions::NodeTolerations> getNodeTolerations() { DARABONBA_PTR_GET(nodeTolerations_, vector<SelfManagedResourceOptions::NodeTolerations>) };
      inline SelfManagedResourceOptions& setNodeTolerations(const vector<SelfManagedResourceOptions::NodeTolerations> & nodeTolerations) { DARABONBA_PTR_SET_VALUE(nodeTolerations_, nodeTolerations) };
      inline SelfManagedResourceOptions& setNodeTolerations(vector<SelfManagedResourceOptions::NodeTolerations> && nodeTolerations) { DARABONBA_PTR_SET_RVALUE(nodeTolerations_, nodeTolerations) };


    protected:
      // Tag tag key-value pairs for nodes.
      shared_ptr<map<string, string>> nodeMatchLabels_ {};
      // Tolerations for nodes.
      shared_ptr<vector<SelfManagedResourceOptions::NodeTolerations>> nodeTolerations_ {};
    };

    virtual bool empty() const override { return this->resourceName_ == nullptr
        && this->selfManagedResourceOptions_ == nullptr; };
    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline UpdateResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // selfManagedResourceOptions Field Functions 
    bool hasSelfManagedResourceOptions() const { return this->selfManagedResourceOptions_ != nullptr;};
    void deleteSelfManagedResourceOptions() { this->selfManagedResourceOptions_ = nullptr;};
    inline const UpdateResourceRequest::SelfManagedResourceOptions & getSelfManagedResourceOptions() const { DARABONBA_PTR_GET_CONST(selfManagedResourceOptions_, UpdateResourceRequest::SelfManagedResourceOptions) };
    inline UpdateResourceRequest::SelfManagedResourceOptions getSelfManagedResourceOptions() { DARABONBA_PTR_GET(selfManagedResourceOptions_, UpdateResourceRequest::SelfManagedResourceOptions) };
    inline UpdateResourceRequest& setSelfManagedResourceOptions(const UpdateResourceRequest::SelfManagedResourceOptions & selfManagedResourceOptions) { DARABONBA_PTR_SET_VALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };
    inline UpdateResourceRequest& setSelfManagedResourceOptions(UpdateResourceRequest::SelfManagedResourceOptions && selfManagedResourceOptions) { DARABONBA_PTR_SET_RVALUE(selfManagedResourceOptions_, selfManagedResourceOptions) };


  protected:
    // The new name of the resource group after the update. The name can be up to 27 characters in length.
    shared_ptr<string> resourceName_ {};
    // The configuration items of the self-managed resource group.
    shared_ptr<UpdateResourceRequest::SelfManagedResourceOptions> selfManagedResourceOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
