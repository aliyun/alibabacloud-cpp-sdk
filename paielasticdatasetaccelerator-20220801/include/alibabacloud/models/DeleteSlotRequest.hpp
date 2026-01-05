// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESLOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESLOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class DeleteSlotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSlotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSlotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    DeleteSlotRequest() = default ;
    DeleteSlotRequest(const DeleteSlotRequest &) = default ;
    DeleteSlotRequest(DeleteSlotRequest &&) = default ;
    DeleteSlotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSlotRequest() = default ;
    DeleteSlotRequest& operator=(const DeleteSlotRequest &) = default ;
    DeleteSlotRequest& operator=(DeleteSlotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteSlotRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
