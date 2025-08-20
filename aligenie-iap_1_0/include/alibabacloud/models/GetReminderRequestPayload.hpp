// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDERREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDERREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetReminderRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReminderRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDebug, isDebug_);
    };
    friend void from_json(const Darabonba::Json& j, GetReminderRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDebug, isDebug_);
    };
    GetReminderRequestPayload() = default ;
    GetReminderRequestPayload(const GetReminderRequestPayload &) = default ;
    GetReminderRequestPayload(GetReminderRequestPayload &&) = default ;
    GetReminderRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReminderRequestPayload() = default ;
    GetReminderRequestPayload& operator=(const GetReminderRequestPayload &) = default ;
    GetReminderRequestPayload& operator=(GetReminderRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->isDebug_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetReminderRequestPayload& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDebug Field Functions 
    bool hasIsDebug() const { return this->isDebug_ != nullptr;};
    void deleteIsDebug() { this->isDebug_ = nullptr;};
    inline bool isDebug() const { DARABONBA_PTR_GET_DEFAULT(isDebug_, false) };
    inline GetReminderRequestPayload& setIsDebug(bool isDebug) { DARABONBA_PTR_SET_VALUE(isDebug_, isDebug) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> isDebug_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
