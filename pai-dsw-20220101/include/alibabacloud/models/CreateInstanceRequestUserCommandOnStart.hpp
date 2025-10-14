// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTUSERCOMMANDONSTART_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTUSERCOMMANDONSTART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequestUserCommandOnStart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestUserCommandOnStart& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestUserCommandOnStart& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    CreateInstanceRequestUserCommandOnStart() = default ;
    CreateInstanceRequestUserCommandOnStart(const CreateInstanceRequestUserCommandOnStart &) = default ;
    CreateInstanceRequestUserCommandOnStart(CreateInstanceRequestUserCommandOnStart &&) = default ;
    CreateInstanceRequestUserCommandOnStart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestUserCommandOnStart() = default ;
    CreateInstanceRequestUserCommandOnStart& operator=(const CreateInstanceRequestUserCommandOnStart &) = default ;
    CreateInstanceRequestUserCommandOnStart& operator=(CreateInstanceRequestUserCommandOnStart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateInstanceRequestUserCommandOnStart& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
