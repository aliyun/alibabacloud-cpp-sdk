// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_SENTENCEEND_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_SENTENCEEND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class SentenceEnd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SentenceEnd& obj) { 
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, SentenceEnd& obj) { 
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    SentenceEnd() = default ;
    SentenceEnd(const SentenceEnd &) = default ;
    SentenceEnd(SentenceEnd &&) = default ;
    SentenceEnd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SentenceEnd() = default ;
    SentenceEnd& operator=(const SentenceEnd &) = default ;
    SentenceEnd& operator=(SentenceEnd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->data_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SentenceEnd& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
    inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
    inline SentenceEnd& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SentenceEnd& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<string> messageId_ {};
    shared_ptr<vector<int64_t>> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
