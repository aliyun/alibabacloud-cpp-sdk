// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREASONPART_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSREASONPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructViewPartsReasonPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructViewPartsReasonPart& obj) { 
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructViewPartsReasonPart& obj) { 
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    CreateRunResponseBodyMessagesContentStructViewPartsReasonPart() = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReasonPart(const CreateRunResponseBodyMessagesContentStructViewPartsReasonPart &) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReasonPart(CreateRunResponseBodyMessagesContentStructViewPartsReasonPart &&) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReasonPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructViewPartsReasonPart() = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReasonPart& operator=(const CreateRunResponseBodyMessagesContentStructViewPartsReasonPart &) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsReasonPart& operator=(CreateRunResponseBodyMessagesContentStructViewPartsReasonPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateRunResponseBodyMessagesContentStructViewPartsReasonPart& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
