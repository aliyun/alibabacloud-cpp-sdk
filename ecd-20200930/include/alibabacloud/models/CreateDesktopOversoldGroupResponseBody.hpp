// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDesktopOversoldGroupResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopOversoldGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDesktopOversoldGroupResponseBody() = default ;
    CreateDesktopOversoldGroupResponseBody(const CreateDesktopOversoldGroupResponseBody &) = default ;
    CreateDesktopOversoldGroupResponseBody(CreateDesktopOversoldGroupResponseBody &&) = default ;
    CreateDesktopOversoldGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopOversoldGroupResponseBody() = default ;
    CreateDesktopOversoldGroupResponseBody& operator=(const CreateDesktopOversoldGroupResponseBody &) = default ;
    CreateDesktopOversoldGroupResponseBody& operator=(CreateDesktopOversoldGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDesktopOversoldGroupResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateDesktopOversoldGroupResponseBodyData) };
    inline CreateDesktopOversoldGroupResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateDesktopOversoldGroupResponseBodyData) };
    inline CreateDesktopOversoldGroupResponseBody& setData(const CreateDesktopOversoldGroupResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDesktopOversoldGroupResponseBody& setData(CreateDesktopOversoldGroupResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDesktopOversoldGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateDesktopOversoldGroupResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
