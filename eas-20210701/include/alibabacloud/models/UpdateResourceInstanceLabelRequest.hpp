// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEINSTANCELABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEINSTANCELABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceInstanceLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceInstanceLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceInstanceLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    UpdateResourceInstanceLabelRequest() = default ;
    UpdateResourceInstanceLabelRequest(const UpdateResourceInstanceLabelRequest &) = default ;
    UpdateResourceInstanceLabelRequest(UpdateResourceInstanceLabelRequest &&) = default ;
    UpdateResourceInstanceLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceInstanceLabelRequest() = default ;
    UpdateResourceInstanceLabelRequest& operator=(const UpdateResourceInstanceLabelRequest &) = default ;
    UpdateResourceInstanceLabelRequest& operator=(UpdateResourceInstanceLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allInstances_ == nullptr
        && return this->instanceIds_ == nullptr && return this->labels_ == nullptr; };
    // allInstances Field Functions 
    bool hasAllInstances() const { return this->allInstances_ != nullptr;};
    void deleteAllInstances() { this->allInstances_ = nullptr;};
    inline bool allInstances() const { DARABONBA_PTR_GET_DEFAULT(allInstances_, false) };
    inline UpdateResourceInstanceLabelRequest& setAllInstances(bool allInstances) { DARABONBA_PTR_SET_VALUE(allInstances_, allInstances) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline UpdateResourceInstanceLabelRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline UpdateResourceInstanceLabelRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline UpdateResourceInstanceLabelRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline UpdateResourceInstanceLabelRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // Specifies whether the modification takes effect on all instances in the resource group. If you set this parameter to true, the InstanceIds parameter does not take effect.
    std::shared_ptr<bool> allInstances_ = nullptr;
    // The instance IDs.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The custom tag.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
