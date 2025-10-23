// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCPARSINGTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCPARSINGTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDocParsingTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class SubmitDocParsingTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocParsingTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocParsingTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SubmitDocParsingTaskResponseBody() = default ;
    SubmitDocParsingTaskResponseBody(const SubmitDocParsingTaskResponseBody &) = default ;
    SubmitDocParsingTaskResponseBody(SubmitDocParsingTaskResponseBody &&) = default ;
    SubmitDocParsingTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocParsingTaskResponseBody() = default ;
    SubmitDocParsingTaskResponseBody& operator=(const SubmitDocParsingTaskResponseBody &) = default ;
    SubmitDocParsingTaskResponseBody& operator=(SubmitDocParsingTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitDocParsingTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitDocParsingTaskResponseBodyData) };
    inline SubmitDocParsingTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitDocParsingTaskResponseBodyData) };
    inline SubmitDocParsingTaskResponseBody& setData(const SubmitDocParsingTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitDocParsingTaskResponseBody& setData(SubmitDocParsingTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitDocParsingTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return result.
    std::shared_ptr<SubmitDocParsingTaskResponseBodyData> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
