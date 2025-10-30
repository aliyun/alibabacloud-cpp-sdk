// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNACUSERCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNACUSERCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNacUserCertResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListNacUserCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNacUserCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListNacUserCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListNacUserCertResponseBody() = default ;
    ListNacUserCertResponseBody(const ListNacUserCertResponseBody &) = default ;
    ListNacUserCertResponseBody(ListNacUserCertResponseBody &&) = default ;
    ListNacUserCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNacUserCertResponseBody() = default ;
    ListNacUserCertResponseBody& operator=(const ListNacUserCertResponseBody &) = default ;
    ListNacUserCertResponseBody& operator=(ListNacUserCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->dataList_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListNacUserCertResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<ListNacUserCertResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<ListNacUserCertResponseBodyDataList>) };
    inline vector<ListNacUserCertResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<ListNacUserCertResponseBodyDataList>) };
    inline ListNacUserCertResponseBody& setDataList(const vector<ListNacUserCertResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListNacUserCertResponseBody& setDataList(vector<ListNacUserCertResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNacUserCertResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNacUserCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListNacUserCertResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<vector<ListNacUserCertResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
