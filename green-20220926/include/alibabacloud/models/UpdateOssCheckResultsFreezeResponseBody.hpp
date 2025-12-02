// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFREEZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFREEZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateOssCheckResultsFreezeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsFreezeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsFreezeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsFreezeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateOssCheckResultsFreezeResponseBody() = default ;
    UpdateOssCheckResultsFreezeResponseBody(const UpdateOssCheckResultsFreezeResponseBody &) = default ;
    UpdateOssCheckResultsFreezeResponseBody(UpdateOssCheckResultsFreezeResponseBody &&) = default ;
    UpdateOssCheckResultsFreezeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsFreezeResponseBody() = default ;
    UpdateOssCheckResultsFreezeResponseBody& operator=(const UpdateOssCheckResultsFreezeResponseBody &) = default ;
    UpdateOssCheckResultsFreezeResponseBody& operator=(UpdateOssCheckResultsFreezeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateOssCheckResultsFreezeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateOssCheckResultsFreezeResponseBodyData) };
    inline UpdateOssCheckResultsFreezeResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateOssCheckResultsFreezeResponseBodyData) };
    inline UpdateOssCheckResultsFreezeResponseBody& setData(const UpdateOssCheckResultsFreezeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateOssCheckResultsFreezeResponseBody& setData(UpdateOssCheckResultsFreezeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateOssCheckResultsFreezeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateOssCheckResultsFreezeResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
