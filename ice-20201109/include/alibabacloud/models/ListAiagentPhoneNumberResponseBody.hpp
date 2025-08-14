// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAGENTPHONENUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAGENTPHONENUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAIAgentPhoneNumberResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAIAgentPhoneNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIAgentPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIAgentPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    ListAIAgentPhoneNumberResponseBody() = default ;
    ListAIAgentPhoneNumberResponseBody(const ListAIAgentPhoneNumberResponseBody &) = default ;
    ListAIAgentPhoneNumberResponseBody(ListAIAgentPhoneNumberResponseBody &&) = default ;
    ListAIAgentPhoneNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIAgentPhoneNumberResponseBody() = default ;
    ListAIAgentPhoneNumberResponseBody& operator=(const ListAIAgentPhoneNumberResponseBody &) = default ;
    ListAIAgentPhoneNumberResponseBody& operator=(ListAIAgentPhoneNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalNumber_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAIAgentPhoneNumberResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAIAgentPhoneNumberResponseBodyData>) };
    inline vector<ListAIAgentPhoneNumberResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListAIAgentPhoneNumberResponseBodyData>) };
    inline ListAIAgentPhoneNumberResponseBody& setData(const vector<ListAIAgentPhoneNumberResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAIAgentPhoneNumberResponseBody& setData(vector<ListAIAgentPhoneNumberResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAIAgentPhoneNumberResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAIAgentPhoneNumberResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAIAgentPhoneNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline ListAIAgentPhoneNumberResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<vector<ListAIAgentPhoneNumberResponseBodyData>> data_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
