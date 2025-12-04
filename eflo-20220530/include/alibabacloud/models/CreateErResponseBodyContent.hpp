// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEERRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEERRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateErResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateErResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ErId, erId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateErResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
    };
    CreateErResponseBodyContent() = default ;
    CreateErResponseBodyContent(const CreateErResponseBodyContent &) = default ;
    CreateErResponseBodyContent(CreateErResponseBodyContent &&) = default ;
    CreateErResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateErResponseBodyContent() = default ;
    CreateErResponseBodyContent& operator=(const CreateErResponseBodyContent &) = default ;
    CreateErResponseBodyContent& operator=(CreateErResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erId_ == nullptr; };
    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline CreateErResponseBodyContent& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


  protected:
    // Lingjun HUB ID
    std::shared_ptr<string> erId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
