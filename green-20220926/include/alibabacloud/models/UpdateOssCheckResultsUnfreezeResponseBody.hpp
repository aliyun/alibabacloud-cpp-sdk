// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSUNFREEZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSUNFREEZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateOssCheckResultsUnfreezeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsUnfreezeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsUnfreezeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsUnfreezeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateOssCheckResultsUnfreezeResponseBody() = default ;
    UpdateOssCheckResultsUnfreezeResponseBody(const UpdateOssCheckResultsUnfreezeResponseBody &) = default ;
    UpdateOssCheckResultsUnfreezeResponseBody(UpdateOssCheckResultsUnfreezeResponseBody &&) = default ;
    UpdateOssCheckResultsUnfreezeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsUnfreezeResponseBody() = default ;
    UpdateOssCheckResultsUnfreezeResponseBody& operator=(const UpdateOssCheckResultsUnfreezeResponseBody &) = default ;
    UpdateOssCheckResultsUnfreezeResponseBody& operator=(UpdateOssCheckResultsUnfreezeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateOssCheckResultsUnfreezeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateOssCheckResultsUnfreezeResponseBodyData) };
    inline UpdateOssCheckResultsUnfreezeResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateOssCheckResultsUnfreezeResponseBodyData) };
    inline UpdateOssCheckResultsUnfreezeResponseBody& setData(const UpdateOssCheckResultsUnfreezeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateOssCheckResultsUnfreezeResponseBody& setData(UpdateOssCheckResultsUnfreezeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateOssCheckResultsUnfreezeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateOssCheckResultsUnfreezeResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
