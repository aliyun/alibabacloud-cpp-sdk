// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COUNTTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CountTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(countTextCmdList, countTextCmdList_);
    };
    friend void from_json(const Darabonba::Json& j, CountTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(countTextCmdList, countTextCmdList_);
    };
    CountTextResponseBody() = default ;
    CountTextResponseBody(const CountTextResponseBody &) = default ;
    CountTextResponseBody(CountTextResponseBody &&) = default ;
    CountTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountTextResponseBody() = default ;
    CountTextResponseBody& operator=(const CountTextResponseBody &) = default ;
    CountTextResponseBody& operator=(CountTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CountTextCmdList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CountTextCmdList& obj) { 
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(theme, theme_);
      };
      friend void from_json(const Darabonba::Json& j, CountTextCmdList& obj) { 
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(theme, theme_);
      };
      CountTextCmdList() = default ;
      CountTextCmdList(const CountTextCmdList &) = default ;
      CountTextCmdList(CountTextCmdList &&) = default ;
      CountTextCmdList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CountTextCmdList() = default ;
      CountTextCmdList& operator=(const CountTextCmdList &) = default ;
      CountTextCmdList& operator=(CountTextCmdList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->theme_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline CountTextCmdList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // theme Field Functions 
      bool hasTheme() const { return this->theme_ != nullptr;};
      void deleteTheme() { this->theme_ = nullptr;};
      inline string getTheme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
      inline CountTextCmdList& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


    protected:
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> theme_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->countTextCmdList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CountTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // countTextCmdList Field Functions 
    bool hasCountTextCmdList() const { return this->countTextCmdList_ != nullptr;};
    void deleteCountTextCmdList() { this->countTextCmdList_ = nullptr;};
    inline const vector<CountTextResponseBody::CountTextCmdList> & getCountTextCmdList() const { DARABONBA_PTR_GET_CONST(countTextCmdList_, vector<CountTextResponseBody::CountTextCmdList>) };
    inline vector<CountTextResponseBody::CountTextCmdList> getCountTextCmdList() { DARABONBA_PTR_GET(countTextCmdList_, vector<CountTextResponseBody::CountTextCmdList>) };
    inline CountTextResponseBody& setCountTextCmdList(const vector<CountTextResponseBody::CountTextCmdList> & countTextCmdList) { DARABONBA_PTR_SET_VALUE(countTextCmdList_, countTextCmdList) };
    inline CountTextResponseBody& setCountTextCmdList(vector<CountTextResponseBody::CountTextCmdList> && countTextCmdList) { DARABONBA_PTR_SET_RVALUE(countTextCmdList_, countTextCmdList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<CountTextResponseBody::CountTextCmdList>> countTextCmdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
