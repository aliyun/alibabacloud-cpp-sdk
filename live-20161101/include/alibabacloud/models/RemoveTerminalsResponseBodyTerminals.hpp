// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODYTERMINALS_HPP_
#define ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODYTERMINALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class RemoveTerminalsResponseBodyTerminals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTerminalsResponseBodyTerminals& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTerminalsResponseBodyTerminals& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    RemoveTerminalsResponseBodyTerminals() = default ;
    RemoveTerminalsResponseBodyTerminals(const RemoveTerminalsResponseBodyTerminals &) = default ;
    RemoveTerminalsResponseBodyTerminals(RemoveTerminalsResponseBodyTerminals &&) = default ;
    RemoveTerminalsResponseBodyTerminals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTerminalsResponseBodyTerminals() = default ;
    RemoveTerminalsResponseBodyTerminals& operator=(const RemoveTerminalsResponseBodyTerminals &) = default ;
    RemoveTerminalsResponseBodyTerminals& operator=(RemoveTerminalsResponseBodyTerminals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->id_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline RemoveTerminalsResponseBodyTerminals& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RemoveTerminalsResponseBodyTerminals& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveTerminalsResponseBodyTerminals& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The returned status code. A value of 0 indicates that the request is successful. If the request fails, an error message is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> id_ = nullptr;
    // The result of removing the specified users from the channel. Valid values:
    // 
    // *   Success
    // *   Failed
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
