// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSCORETHREADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSCORETHREADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeScreenScoreThreadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenScoreThreadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenScoreThreadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeScreenScoreThreadResponseBody() = default ;
    DescribeScreenScoreThreadResponseBody(const DescribeScreenScoreThreadResponseBody &) = default ;
    DescribeScreenScoreThreadResponseBody(DescribeScreenScoreThreadResponseBody &&) = default ;
    DescribeScreenScoreThreadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenScoreThreadResponseBody() = default ;
    DescribeScreenScoreThreadResponseBody& operator=(const DescribeScreenScoreThreadResponseBody &) = default ;
    DescribeScreenScoreThreadResponseBody& operator=(DescribeScreenScoreThreadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SocreThread, socreThread_);
        DARABONBA_PTR_TO_JSON(SocreThreadDate, socreThreadDate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SocreThread, socreThread_);
        DARABONBA_PTR_FROM_JSON(SocreThreadDate, socreThreadDate_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->socreThread_ == nullptr
        && this->socreThreadDate_ == nullptr; };
      // socreThread Field Functions 
      bool hasSocreThread() const { return this->socreThread_ != nullptr;};
      void deleteSocreThread() { this->socreThread_ = nullptr;};
      inline const vector<string> & getSocreThread() const { DARABONBA_PTR_GET_CONST(socreThread_, vector<string>) };
      inline vector<string> getSocreThread() { DARABONBA_PTR_GET(socreThread_, vector<string>) };
      inline Data& setSocreThread(const vector<string> & socreThread) { DARABONBA_PTR_SET_VALUE(socreThread_, socreThread) };
      inline Data& setSocreThread(vector<string> && socreThread) { DARABONBA_PTR_SET_RVALUE(socreThread_, socreThread) };


      // socreThreadDate Field Functions 
      bool hasSocreThreadDate() const { return this->socreThreadDate_ != nullptr;};
      void deleteSocreThreadDate() { this->socreThreadDate_ = nullptr;};
      inline const vector<string> & getSocreThreadDate() const { DARABONBA_PTR_GET_CONST(socreThreadDate_, vector<string>) };
      inline vector<string> getSocreThreadDate() { DARABONBA_PTR_GET(socreThreadDate_, vector<string>) };
      inline Data& setSocreThreadDate(const vector<string> & socreThreadDate) { DARABONBA_PTR_SET_VALUE(socreThreadDate_, socreThreadDate) };
      inline Data& setSocreThreadDate(vector<string> && socreThreadDate) { DARABONBA_PTR_SET_RVALUE(socreThreadDate_, socreThreadDate) };


    protected:
      // The trends of the scores on the security dashboard.
      shared_ptr<vector<string>> socreThread_ {};
      // The dates of the scores on the security dashboard.
      shared_ptr<vector<string>> socreThreadDate_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeScreenScoreThreadResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeScreenScoreThreadResponseBody::Data) };
    inline DescribeScreenScoreThreadResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeScreenScoreThreadResponseBody::Data) };
    inline DescribeScreenScoreThreadResponseBody& setData(const DescribeScreenScoreThreadResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeScreenScoreThreadResponseBody& setData(DescribeScreenScoreThreadResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenScoreThreadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeScreenScoreThreadResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
