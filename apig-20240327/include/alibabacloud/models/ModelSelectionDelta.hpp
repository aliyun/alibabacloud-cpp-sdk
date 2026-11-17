// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSELECTIONDELTA_HPP_
#define ALIBABACLOUD_MODELS_MODELSELECTIONDELTA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ModelSelectionDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSelectionDelta& obj) { 
      DARABONBA_PTR_TO_JSON(addModelCardIds, addModelCardIds_);
      DARABONBA_PTR_TO_JSON(removeModelCardIds, removeModelCardIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSelectionDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(addModelCardIds, addModelCardIds_);
      DARABONBA_PTR_FROM_JSON(removeModelCardIds, removeModelCardIds_);
    };
    ModelSelectionDelta() = default ;
    ModelSelectionDelta(const ModelSelectionDelta &) = default ;
    ModelSelectionDelta(ModelSelectionDelta &&) = default ;
    ModelSelectionDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSelectionDelta() = default ;
    ModelSelectionDelta& operator=(const ModelSelectionDelta &) = default ;
    ModelSelectionDelta& operator=(ModelSelectionDelta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addModelCardIds_ == nullptr
        && this->removeModelCardIds_ == nullptr; };
    // addModelCardIds Field Functions 
    bool hasAddModelCardIds() const { return this->addModelCardIds_ != nullptr;};
    void deleteAddModelCardIds() { this->addModelCardIds_ = nullptr;};
    inline const vector<string> & getAddModelCardIds() const { DARABONBA_PTR_GET_CONST(addModelCardIds_, vector<string>) };
    inline vector<string> getAddModelCardIds() { DARABONBA_PTR_GET(addModelCardIds_, vector<string>) };
    inline ModelSelectionDelta& setAddModelCardIds(const vector<string> & addModelCardIds) { DARABONBA_PTR_SET_VALUE(addModelCardIds_, addModelCardIds) };
    inline ModelSelectionDelta& setAddModelCardIds(vector<string> && addModelCardIds) { DARABONBA_PTR_SET_RVALUE(addModelCardIds_, addModelCardIds) };


    // removeModelCardIds Field Functions 
    bool hasRemoveModelCardIds() const { return this->removeModelCardIds_ != nullptr;};
    void deleteRemoveModelCardIds() { this->removeModelCardIds_ = nullptr;};
    inline const vector<string> & getRemoveModelCardIds() const { DARABONBA_PTR_GET_CONST(removeModelCardIds_, vector<string>) };
    inline vector<string> getRemoveModelCardIds() { DARABONBA_PTR_GET(removeModelCardIds_, vector<string>) };
    inline ModelSelectionDelta& setRemoveModelCardIds(const vector<string> & removeModelCardIds) { DARABONBA_PTR_SET_VALUE(removeModelCardIds_, removeModelCardIds) };
    inline ModelSelectionDelta& setRemoveModelCardIds(vector<string> && removeModelCardIds) { DARABONBA_PTR_SET_RVALUE(removeModelCardIds_, removeModelCardIds) };


  protected:
    // The actual source model IDs to add to the unique ModelAPI. Already selected IDs must not be added again.
    shared_ptr<vector<string>> addModelCardIds_ {};
    // The actual source model IDs to remove from the unique ModelAPI. This operation does not delete models in the source. You cannot clear the API or remove backup models that are still referenced by other entry points.
    shared_ptr<vector<string>> removeModelCardIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
