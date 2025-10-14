// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREASONPART_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREASONPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart& obj) { 
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart& obj) { 
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart() = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart(const CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart(CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart &&) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart() = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart& operator=(const CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart &) = default ;
    CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart& operator=(CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateMessageResponseBodyMessagesContentStructViewPartsReasonPart& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
