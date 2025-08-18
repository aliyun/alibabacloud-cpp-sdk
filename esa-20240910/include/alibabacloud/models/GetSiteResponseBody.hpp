// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSiteResponseBodySiteModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteModel, siteModel_);
    };
    friend void from_json(const Darabonba::Json& j, GetSiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteModel, siteModel_);
    };
    GetSiteResponseBody() = default ;
    GetSiteResponseBody(const GetSiteResponseBody &) = default ;
    GetSiteResponseBody(GetSiteResponseBody &&) = default ;
    GetSiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSiteResponseBody() = default ;
    GetSiteResponseBody& operator=(const GetSiteResponseBody &) = default ;
    GetSiteResponseBody& operator=(GetSiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->siteModel_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteModel Field Functions 
    bool hasSiteModel() const { return this->siteModel_ != nullptr;};
    void deleteSiteModel() { this->siteModel_ = nullptr;};
    inline const GetSiteResponseBodySiteModel & siteModel() const { DARABONBA_PTR_GET_CONST(siteModel_, GetSiteResponseBodySiteModel) };
    inline GetSiteResponseBodySiteModel siteModel() { DARABONBA_PTR_GET(siteModel_, GetSiteResponseBodySiteModel) };
    inline GetSiteResponseBody& setSiteModel(const GetSiteResponseBodySiteModel & siteModel) { DARABONBA_PTR_SET_VALUE(siteModel_, siteModel) };
    inline GetSiteResponseBody& setSiteModel(GetSiteResponseBodySiteModel && siteModel) { DARABONBA_PTR_SET_RVALUE(siteModel_, siteModel) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried website information.
    std::shared_ptr<GetSiteResponseBodySiteModel> siteModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
