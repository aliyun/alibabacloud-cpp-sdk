// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deleted, deleted_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    DeleteConfigResponseBody() = default ;
    DeleteConfigResponseBody(const DeleteConfigResponseBody &) = default ;
    DeleteConfigResponseBody(DeleteConfigResponseBody &&) = default ;
    DeleteConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigResponseBody() = default ;
    DeleteConfigResponseBody& operator=(const DeleteConfigResponseBody &) = default ;
    DeleteConfigResponseBody& operator=(DeleteConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleted_ == nullptr
        && this->message_ == nullptr; };
    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline DeleteConfigResponseBody& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // 删除的配置数量
    shared_ptr<int32_t> deleted_ {};
    // 操作结果消息
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
