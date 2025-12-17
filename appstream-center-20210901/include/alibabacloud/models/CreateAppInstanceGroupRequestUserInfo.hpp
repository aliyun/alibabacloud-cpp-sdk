// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUESTUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequestUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequestUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequestUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateAppInstanceGroupRequestUserInfo() = default ;
    CreateAppInstanceGroupRequestUserInfo(const CreateAppInstanceGroupRequestUserInfo &) = default ;
    CreateAppInstanceGroupRequestUserInfo(CreateAppInstanceGroupRequestUserInfo &&) = default ;
    CreateAppInstanceGroupRequestUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequestUserInfo() = default ;
    CreateAppInstanceGroupRequestUserInfo& operator=(const CreateAppInstanceGroupRequestUserInfo &) = default ;
    CreateAppInstanceGroupRequestUserInfo& operator=(CreateAppInstanceGroupRequestUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppInstanceGroupRequestUserInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The account type of the user.
    // 
    // Valid value:
    // 
    // *   Simple: convenience account
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
