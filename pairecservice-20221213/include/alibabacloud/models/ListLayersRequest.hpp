// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListLayersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
    };
    ListLayersRequest() = default ;
    ListLayersRequest(const ListLayersRequest &) = default ;
    ListLayersRequest(ListLayersRequest &&) = default ;
    ListLayersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayersRequest() = default ;
    ListLayersRequest& operator=(const ListLayersRequest &) = default ;
    ListLayersRequest& operator=(ListLayersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->laboratoryId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLayersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string getLaboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline ListLayersRequest& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> laboratoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
