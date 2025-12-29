// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateUmodelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUmodelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUmodelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateUmodelRequest() = default ;
    UpdateUmodelRequest(const UpdateUmodelRequest &) = default ;
    UpdateUmodelRequest(UpdateUmodelRequest &&) = default ;
    UpdateUmodelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUmodelRequest() = default ;
    UpdateUmodelRequest& operator=(const UpdateUmodelRequest &) = default ;
    UpdateUmodelRequest& operator=(UpdateUmodelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateUmodelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // Description.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
