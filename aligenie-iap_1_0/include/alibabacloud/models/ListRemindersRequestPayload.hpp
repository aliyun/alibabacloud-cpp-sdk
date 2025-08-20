// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDERSREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDERSREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class ListRemindersRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindersRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindersRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
    };
    ListRemindersRequestPayload() = default ;
    ListRemindersRequestPayload(const ListRemindersRequestPayload &) = default ;
    ListRemindersRequestPayload(ListRemindersRequestPayload &&) = default ;
    ListRemindersRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindersRequestPayload() = default ;
    ListRemindersRequestPayload& operator=(const ListRemindersRequestPayload &) = default ;
    ListRemindersRequestPayload& operator=(ListRemindersRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDebug_ != nullptr; };
    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline ListRemindersRequestPayload& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> isDebug_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
