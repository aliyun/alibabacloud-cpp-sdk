// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMDSMINIPROGRAMTASKRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMDSMINIPROGRAMTASKRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMdsMiniprogramTaskResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMdsMiniprogramTaskResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMdsMiniprogramTaskResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMdsMiniprogramTaskResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMdsMiniprogramTaskResponseBodyResultContent() = default ;
    CreateMdsMiniprogramTaskResponseBodyResultContent(const CreateMdsMiniprogramTaskResponseBodyResultContent &) = default ;
    CreateMdsMiniprogramTaskResponseBodyResultContent(CreateMdsMiniprogramTaskResponseBodyResultContent &&) = default ;
    CreateMdsMiniprogramTaskResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMdsMiniprogramTaskResponseBodyResultContent() = default ;
    CreateMdsMiniprogramTaskResponseBodyResultContent& operator=(const CreateMdsMiniprogramTaskResponseBodyResultContent &) = default ;
    CreateMdsMiniprogramTaskResponseBodyResultContent& operator=(CreateMdsMiniprogramTaskResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::CreateMdsMiniprogramTaskResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::CreateMdsMiniprogramTaskResponseBodyResultContentData) };
    inline Models::CreateMdsMiniprogramTaskResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::CreateMdsMiniprogramTaskResponseBodyResultContentData) };
    inline CreateMdsMiniprogramTaskResponseBodyResultContent& setData(const Models::CreateMdsMiniprogramTaskResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMdsMiniprogramTaskResponseBodyResultContent& setData(Models::CreateMdsMiniprogramTaskResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMdsMiniprogramTaskResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::CreateMdsMiniprogramTaskResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
