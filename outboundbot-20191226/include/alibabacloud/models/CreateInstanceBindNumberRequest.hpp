// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEBINDNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEBINDNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateInstanceBindNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceBindNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceBindNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    CreateInstanceBindNumberRequest() = default ;
    CreateInstanceBindNumberRequest(const CreateInstanceBindNumberRequest &) = default ;
    CreateInstanceBindNumberRequest(CreateInstanceBindNumberRequest &&) = default ;
    CreateInstanceBindNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceBindNumberRequest() = default ;
    CreateInstanceBindNumberRequest& operator=(const CreateInstanceBindNumberRequest &) = default ;
    CreateInstanceBindNumberRequest& operator=(CreateInstanceBindNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->number_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline string getInstanceList() const { DARABONBA_PTR_GET_DEFAULT(instanceList_, "") };
    inline CreateInstanceBindNumberRequest& setInstanceList(string instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline CreateInstanceBindNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    shared_ptr<string> instanceList_ {};
    shared_ptr<string> number_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
