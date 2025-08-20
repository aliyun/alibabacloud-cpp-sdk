// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOCABRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOCABRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVocabResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class ListVocabResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVocabResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListVocabResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListVocabResponseBody() = default ;
    ListVocabResponseBody(const ListVocabResponseBody &) = default ;
    ListVocabResponseBody(ListVocabResponseBody &&) = default ;
    ListVocabResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVocabResponseBody() = default ;
    ListVocabResponseBody& operator=(const ListVocabResponseBody &) = default ;
    ListVocabResponseBody& operator=(ListVocabResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListVocabResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListVocabResponseBodyData>) };
    inline vector<ListVocabResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListVocabResponseBodyData>) };
    inline ListVocabResponseBody& setData(const vector<ListVocabResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVocabResponseBody& setData(vector<ListVocabResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVocabResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListVocabResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<ListVocabResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
