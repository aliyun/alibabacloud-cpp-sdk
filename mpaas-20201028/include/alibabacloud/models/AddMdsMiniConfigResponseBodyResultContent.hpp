// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMDSMINICONFIGRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_ADDMDSMINICONFIGRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddMdsMiniConfigResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class AddMdsMiniConfigResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMdsMiniConfigResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMdsMiniConfigResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddMdsMiniConfigResponseBodyResultContent() = default ;
    AddMdsMiniConfigResponseBodyResultContent(const AddMdsMiniConfigResponseBodyResultContent &) = default ;
    AddMdsMiniConfigResponseBodyResultContent(AddMdsMiniConfigResponseBodyResultContent &&) = default ;
    AddMdsMiniConfigResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMdsMiniConfigResponseBodyResultContent() = default ;
    AddMdsMiniConfigResponseBodyResultContent& operator=(const AddMdsMiniConfigResponseBodyResultContent &) = default ;
    AddMdsMiniConfigResponseBodyResultContent& operator=(AddMdsMiniConfigResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::AddMdsMiniConfigResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::AddMdsMiniConfigResponseBodyResultContentData) };
    inline Models::AddMdsMiniConfigResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::AddMdsMiniConfigResponseBodyResultContentData) };
    inline AddMdsMiniConfigResponseBodyResultContent& setData(const Models::AddMdsMiniConfigResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddMdsMiniConfigResponseBodyResultContent& setData(Models::AddMdsMiniConfigResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMdsMiniConfigResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::AddMdsMiniConfigResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
