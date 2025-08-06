// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSDATAPART_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSDATAPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentStructViewPartsDataPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentStructViewPartsDataPart& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentStructViewPartsDataPart& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
    };
    InvokeAssistantRequestMessagesContentStructViewPartsDataPart() = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsDataPart(const InvokeAssistantRequestMessagesContentStructViewPartsDataPart &) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsDataPart(InvokeAssistantRequestMessagesContentStructViewPartsDataPart &&) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsDataPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentStructViewPartsDataPart() = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsDataPart& operator=(const InvokeAssistantRequestMessagesContentStructViewPartsDataPart &) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsDataPart& operator=(InvokeAssistantRequestMessagesContentStructViewPartsDataPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline InvokeAssistantRequestMessagesContentStructViewPartsDataPart& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline InvokeAssistantRequestMessagesContentStructViewPartsDataPart& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


  protected:
    Darabonba::Json data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
