// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLIENTRULESTRATEGYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLIENTRULESTRATEGYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DeleteClientRuleStrategyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClientRuleStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdList, idListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClientRuleStrategyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdList, idListShrink_);
    };
    DeleteClientRuleStrategyShrinkRequest() = default ;
    DeleteClientRuleStrategyShrinkRequest(const DeleteClientRuleStrategyShrinkRequest &) = default ;
    DeleteClientRuleStrategyShrinkRequest(DeleteClientRuleStrategyShrinkRequest &&) = default ;
    DeleteClientRuleStrategyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClientRuleStrategyShrinkRequest() = default ;
    DeleteClientRuleStrategyShrinkRequest& operator=(const DeleteClientRuleStrategyShrinkRequest &) = default ;
    DeleteClientRuleStrategyShrinkRequest& operator=(DeleteClientRuleStrategyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idListShrink_ == nullptr; };
    // idListShrink Field Functions 
    bool hasIdListShrink() const { return this->idListShrink_ != nullptr;};
    void deleteIdListShrink() { this->idListShrink_ = nullptr;};
    inline string getIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(idListShrink_, "") };
    inline DeleteClientRuleStrategyShrinkRequest& setIdListShrink(string idListShrink) { DARABONBA_PTR_SET_VALUE(idListShrink_, idListShrink) };


  protected:
    // The list of IDs of the policies to delete. Use the policy IDs returned by the create operation or obtained from the policy list or details operations.
    shared_ptr<string> idListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
