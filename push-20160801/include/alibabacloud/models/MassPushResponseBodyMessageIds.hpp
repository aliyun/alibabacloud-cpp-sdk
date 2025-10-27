// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHRESPONSEBODYMESSAGEIDS_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHRESPONSEBODYMESSAGEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushResponseBodyMessageIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushResponseBodyMessageIds& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushResponseBodyMessageIds& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    MassPushResponseBodyMessageIds() = default ;
    MassPushResponseBodyMessageIds(const MassPushResponseBodyMessageIds &) = default ;
    MassPushResponseBodyMessageIds(MassPushResponseBodyMessageIds &&) = default ;
    MassPushResponseBodyMessageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushResponseBodyMessageIds() = default ;
    MassPushResponseBodyMessageIds& operator=(const MassPushResponseBodyMessageIds &) = default ;
    MassPushResponseBodyMessageIds& operator=(MassPushResponseBodyMessageIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline const vector<string> & messageId() const { DARABONBA_PTR_GET_CONST(messageId_, vector<string>) };
    inline vector<string> messageId() { DARABONBA_PTR_GET(messageId_, vector<string>) };
    inline MassPushResponseBodyMessageIds& setMessageId(const vector<string> & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
    inline MassPushResponseBodyMessageIds& setMessageId(vector<string> && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


  protected:
    std::shared_ptr<vector<string>> messageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
