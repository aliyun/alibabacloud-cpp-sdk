// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateConsumerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateConsumerGroupRequest() = default ;
    UpdateConsumerGroupRequest(const UpdateConsumerGroupRequest &) = default ;
    UpdateConsumerGroupRequest(UpdateConsumerGroupRequest &&) = default ;
    UpdateConsumerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerGroupRequest() = default ;
    UpdateConsumerGroupRequest& operator=(const UpdateConsumerGroupRequest &) = default ;
    UpdateConsumerGroupRequest& operator=(UpdateConsumerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConsumerGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateConsumerGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
