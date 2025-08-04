// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODYDATATASKINFOLISTIMAGELIST_HPP_
#define ALIBABACLOUD_MODELS_FETCHIMAGETASKRESPONSEBODYDATATASKINFOLISTIMAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchImageTaskResponseBodyDataTaskInfoListImageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchImageTaskResponseBodyDataTaskInfoListImageList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, FetchImageTaskResponseBodyDataTaskInfoListImageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    FetchImageTaskResponseBodyDataTaskInfoListImageList() = default ;
    FetchImageTaskResponseBodyDataTaskInfoListImageList(const FetchImageTaskResponseBodyDataTaskInfoListImageList &) = default ;
    FetchImageTaskResponseBodyDataTaskInfoListImageList(FetchImageTaskResponseBodyDataTaskInfoListImageList &&) = default ;
    FetchImageTaskResponseBodyDataTaskInfoListImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchImageTaskResponseBodyDataTaskInfoListImageList() = default ;
    FetchImageTaskResponseBodyDataTaskInfoListImageList& operator=(const FetchImageTaskResponseBodyDataTaskInfoListImageList &) = default ;
    FetchImageTaskResponseBodyDataTaskInfoListImageList& operator=(FetchImageTaskResponseBodyDataTaskInfoListImageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->url_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FetchImageTaskResponseBodyDataTaskInfoListImageList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FetchImageTaskResponseBodyDataTaskInfoListImageList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline FetchImageTaskResponseBodyDataTaskInfoListImageList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
