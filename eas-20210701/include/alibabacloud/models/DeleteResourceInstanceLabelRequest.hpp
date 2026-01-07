// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEINSTANCELABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEINSTANCELABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteResourceInstanceLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceInstanceLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(LabelKeys, labelKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceInstanceLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllInstances, allInstances_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(LabelKeys, labelKeys_);
    };
    DeleteResourceInstanceLabelRequest() = default ;
    DeleteResourceInstanceLabelRequest(const DeleteResourceInstanceLabelRequest &) = default ;
    DeleteResourceInstanceLabelRequest(DeleteResourceInstanceLabelRequest &&) = default ;
    DeleteResourceInstanceLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceInstanceLabelRequest() = default ;
    DeleteResourceInstanceLabelRequest& operator=(const DeleteResourceInstanceLabelRequest &) = default ;
    DeleteResourceInstanceLabelRequest& operator=(DeleteResourceInstanceLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allInstances_ == nullptr
        && this->instanceIds_ == nullptr && this->keys_ == nullptr && this->labelKeys_ == nullptr; };
    // allInstances Field Functions 
    bool hasAllInstances() const { return this->allInstances_ != nullptr;};
    void deleteAllInstances() { this->allInstances_ = nullptr;};
    inline bool getAllInstances() const { DARABONBA_PTR_GET_DEFAULT(allInstances_, false) };
    inline DeleteResourceInstanceLabelRequest& setAllInstances(bool allInstances) { DARABONBA_PTR_SET_VALUE(allInstances_, allInstances) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DeleteResourceInstanceLabelRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DeleteResourceInstanceLabelRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<string> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<string>) };
    inline vector<string> getKeys() { DARABONBA_PTR_GET(keys_, vector<string>) };
    inline DeleteResourceInstanceLabelRequest& setKeys(const vector<string> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DeleteResourceInstanceLabelRequest& setKeys(vector<string> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // labelKeys Field Functions 
    bool hasLabelKeys() const { return this->labelKeys_ != nullptr;};
    void deleteLabelKeys() { this->labelKeys_ = nullptr;};
    inline const vector<string> & getLabelKeys() const { DARABONBA_PTR_GET_CONST(labelKeys_, vector<string>) };
    inline vector<string> getLabelKeys() { DARABONBA_PTR_GET(labelKeys_, vector<string>) };
    inline DeleteResourceInstanceLabelRequest& setLabelKeys(const vector<string> & labelKeys) { DARABONBA_PTR_SET_VALUE(labelKeys_, labelKeys) };
    inline DeleteResourceInstanceLabelRequest& setLabelKeys(vector<string> && labelKeys) { DARABONBA_PTR_SET_RVALUE(labelKeys_, labelKeys) };


  protected:
    // Specifies whether the delete operation takes effect on all instances in the resource group. If you set this parameter to true, the InstanceIds parameter does not take effect.
    shared_ptr<bool> allInstances_ {};
    // The instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The keys of the tags that you want to delete.
    shared_ptr<vector<string>> keys_ {};
    shared_ptr<vector<string>> labelKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
