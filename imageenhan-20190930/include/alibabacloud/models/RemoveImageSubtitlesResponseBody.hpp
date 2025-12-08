// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIMAGESUBTITLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIMAGESUBTITLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveImageSubtitlesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RemoveImageSubtitlesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveImageSubtitlesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveImageSubtitlesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveImageSubtitlesResponseBody() = default ;
    RemoveImageSubtitlesResponseBody(const RemoveImageSubtitlesResponseBody &) = default ;
    RemoveImageSubtitlesResponseBody(RemoveImageSubtitlesResponseBody &&) = default ;
    RemoveImageSubtitlesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveImageSubtitlesResponseBody() = default ;
    RemoveImageSubtitlesResponseBody& operator=(const RemoveImageSubtitlesResponseBody &) = default ;
    RemoveImageSubtitlesResponseBody& operator=(RemoveImageSubtitlesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveImageSubtitlesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RemoveImageSubtitlesResponseBodyData) };
    inline RemoveImageSubtitlesResponseBodyData data() { DARABONBA_PTR_GET(data_, RemoveImageSubtitlesResponseBodyData) };
    inline RemoveImageSubtitlesResponseBody& setData(const RemoveImageSubtitlesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveImageSubtitlesResponseBody& setData(RemoveImageSubtitlesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveImageSubtitlesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RemoveImageSubtitlesResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
