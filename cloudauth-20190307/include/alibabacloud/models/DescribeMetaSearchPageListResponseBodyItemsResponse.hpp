// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASEARCHPAGELISTRESPONSEBODYITEMSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetaSearchPageListResponseBodyItemsResponseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaSearchPageListResponseBodyItemsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaSearchPageListResponseBodyItemsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaSearchPageListResponseBodyItemsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DescribeMetaSearchPageListResponseBodyItemsResponse() = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponse(const DescribeMetaSearchPageListResponseBodyItemsResponse &) = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponse(DescribeMetaSearchPageListResponseBodyItemsResponse &&) = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaSearchPageListResponseBodyItemsResponse() = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponse& operator=(const DescribeMetaSearchPageListResponseBodyItemsResponse &) = default ;
    DescribeMetaSearchPageListResponseBodyItemsResponse& operator=(DescribeMetaSearchPageListResponseBodyItemsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeMetaSearchPageListResponseBodyItemsResponseData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeMetaSearchPageListResponseBodyItemsResponseData) };
    inline Models::DescribeMetaSearchPageListResponseBodyItemsResponseData data() { DARABONBA_PTR_GET(data_, Models::DescribeMetaSearchPageListResponseBodyItemsResponseData) };
    inline DescribeMetaSearchPageListResponseBodyItemsResponse& setData(const Models::DescribeMetaSearchPageListResponseBodyItemsResponseData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMetaSearchPageListResponseBodyItemsResponse& setData(Models::DescribeMetaSearchPageListResponseBodyItemsResponseData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetaSearchPageListResponseBodyItemsResponse& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<Models::DescribeMetaSearchPageListResponseBodyItemsResponseData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
