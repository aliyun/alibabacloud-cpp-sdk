// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStsTokenResponseBodyStsTokenModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetStsTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStsTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StsTokenModel, stsTokenModel_);
    };
    friend void from_json(const Darabonba::Json& j, GetStsTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StsTokenModel, stsTokenModel_);
    };
    GetStsTokenResponseBody() = default ;
    GetStsTokenResponseBody(const GetStsTokenResponseBody &) = default ;
    GetStsTokenResponseBody(GetStsTokenResponseBody &&) = default ;
    GetStsTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStsTokenResponseBody() = default ;
    GetStsTokenResponseBody& operator=(const GetStsTokenResponseBody &) = default ;
    GetStsTokenResponseBody& operator=(GetStsTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->stsTokenModel_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStsTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stsTokenModel Field Functions 
    bool hasStsTokenModel() const { return this->stsTokenModel_ != nullptr;};
    void deleteStsTokenModel() { this->stsTokenModel_ = nullptr;};
    inline const GetStsTokenResponseBodyStsTokenModel & stsTokenModel() const { DARABONBA_PTR_GET_CONST(stsTokenModel_, GetStsTokenResponseBodyStsTokenModel) };
    inline GetStsTokenResponseBodyStsTokenModel stsTokenModel() { DARABONBA_PTR_GET(stsTokenModel_, GetStsTokenResponseBodyStsTokenModel) };
    inline GetStsTokenResponseBody& setStsTokenModel(const GetStsTokenResponseBodyStsTokenModel & stsTokenModel) { DARABONBA_PTR_SET_VALUE(stsTokenModel_, stsTokenModel) };
    inline GetStsTokenResponseBody& setStsTokenModel(GetStsTokenResponseBodyStsTokenModel && stsTokenModel) { DARABONBA_PTR_SET_RVALUE(stsTokenModel_, stsTokenModel) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetStsTokenResponseBodyStsTokenModel> stsTokenModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
