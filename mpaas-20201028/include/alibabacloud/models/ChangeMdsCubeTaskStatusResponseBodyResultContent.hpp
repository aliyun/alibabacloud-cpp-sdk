// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEMDSCUBETASKSTATUSRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CHANGEMDSCUBETASKSTATUSRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeMdsCubeTaskStatusResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ChangeMdsCubeTaskStatusResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeMdsCubeTaskStatusResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeMdsCubeTaskStatusResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeMdsCubeTaskStatusResponseBodyResultContent() = default ;
    ChangeMdsCubeTaskStatusResponseBodyResultContent(const ChangeMdsCubeTaskStatusResponseBodyResultContent &) = default ;
    ChangeMdsCubeTaskStatusResponseBodyResultContent(ChangeMdsCubeTaskStatusResponseBodyResultContent &&) = default ;
    ChangeMdsCubeTaskStatusResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeMdsCubeTaskStatusResponseBodyResultContent() = default ;
    ChangeMdsCubeTaskStatusResponseBodyResultContent& operator=(const ChangeMdsCubeTaskStatusResponseBodyResultContent &) = default ;
    ChangeMdsCubeTaskStatusResponseBodyResultContent& operator=(ChangeMdsCubeTaskStatusResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData) };
    inline Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData) };
    inline ChangeMdsCubeTaskStatusResponseBodyResultContent& setData(const Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChangeMdsCubeTaskStatusResponseBodyResultContent& setData(Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeMdsCubeTaskStatusResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::ChangeMdsCubeTaskStatusResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
