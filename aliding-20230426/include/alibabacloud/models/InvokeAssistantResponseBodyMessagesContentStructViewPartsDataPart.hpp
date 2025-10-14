// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSDATAPART_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSDATAPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
    };
    InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart(const InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart(InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart &&) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart& operator=(const InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart& operator=(InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart &&) = default ;
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
    inline InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewPartsDataPart& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


  protected:
    Darabonba::Json data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
