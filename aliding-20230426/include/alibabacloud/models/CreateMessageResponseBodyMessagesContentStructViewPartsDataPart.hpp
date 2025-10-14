// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSDATAPART_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSDATAPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContentStructViewPartsDataPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContentStructViewPartsDataPart& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContentStructViewPartsDataPart& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
    };
    CreateMessageResponseBodyMessagesContentStructViewPartsDataPart() = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsDataPart(const CreateMessageResponseBodyMessagesContentStructViewPartsDataPart &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsDataPart(CreateMessageResponseBodyMessagesContentStructViewPartsDataPart &&) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsDataPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContentStructViewPartsDataPart() = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsDataPart& operator=(const CreateMessageResponseBodyMessagesContentStructViewPartsDataPart &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsDataPart& operator=(CreateMessageResponseBodyMessagesContentStructViewPartsDataPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsDataPart& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsDataPart& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


  protected:
    Darabonba::Json data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
