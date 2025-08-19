// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSNAPSHOTSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSNAPSHOTSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSnapshotSettingResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetSnapshotSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSnapshotSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetSnapshotSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetSnapshotSettingResponseBody() = default ;
    GetSnapshotSettingResponseBody(const GetSnapshotSettingResponseBody &) = default ;
    GetSnapshotSettingResponseBody(GetSnapshotSettingResponseBody &&) = default ;
    GetSnapshotSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSnapshotSettingResponseBody() = default ;
    GetSnapshotSettingResponseBody& operator=(const GetSnapshotSettingResponseBody &) = default ;
    GetSnapshotSettingResponseBody& operator=(GetSnapshotSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSnapshotSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetSnapshotSettingResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetSnapshotSettingResponseBodyResult) };
    inline GetSnapshotSettingResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetSnapshotSettingResponseBodyResult) };
    inline GetSnapshotSettingResponseBody& setResult(const GetSnapshotSettingResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSnapshotSettingResponseBody& setResult(GetSnapshotSettingResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetSnapshotSettingResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
