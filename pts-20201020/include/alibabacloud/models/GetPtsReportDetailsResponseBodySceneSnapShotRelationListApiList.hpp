// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTAPILIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTRELATIONLISTAPILIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(CheckPointList, checkPointList_);
      DARABONBA_PTR_TO_JSON(ExportList, exportList_);
      DARABONBA_PTR_TO_JSON(HeaderList, headerList_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RedirectCountLimit, redirectCountLimit_);
      DARABONBA_PTR_TO_JSON(TimeoutInSecond, timeoutInSecond_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(CheckPointList, checkPointList_);
      DARABONBA_PTR_FROM_JSON(ExportList, exportList_);
      DARABONBA_PTR_FROM_JSON(HeaderList, headerList_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RedirectCountLimit, redirectCountLimit_);
      DARABONBA_PTR_FROM_JSON(TimeoutInSecond, timeoutInSecond_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList(GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& operator=(GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->body_ == nullptr && return this->checkPointList_ == nullptr && return this->exportList_ == nullptr && return this->headerList_ == nullptr
        && return this->method_ == nullptr && return this->redirectCountLimit_ == nullptr && return this->timeoutInSecond_ == nullptr && return this->url_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody & body() const { DARABONBA_PTR_GET_CONST(body_, Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody) };
    inline Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody body() { DARABONBA_PTR_GET(body_, Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setBody(const Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setBody(Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // checkPointList Field Functions 
    bool hasCheckPointList() const { return this->checkPointList_ != nullptr;};
    void deleteCheckPointList() { this->checkPointList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList> & checkPointList() const { DARABONBA_PTR_GET_CONST(checkPointList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList> checkPointList() { DARABONBA_PTR_GET(checkPointList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setCheckPointList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList> & checkPointList) { DARABONBA_PTR_SET_VALUE(checkPointList_, checkPointList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setCheckPointList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList> && checkPointList) { DARABONBA_PTR_SET_RVALUE(checkPointList_, checkPointList) };


    // exportList Field Functions 
    bool hasExportList() const { return this->exportList_ != nullptr;};
    void deleteExportList() { this->exportList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList> & exportList() const { DARABONBA_PTR_GET_CONST(exportList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList> exportList() { DARABONBA_PTR_GET(exportList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setExportList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList> & exportList) { DARABONBA_PTR_SET_VALUE(exportList_, exportList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setExportList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList> && exportList) { DARABONBA_PTR_SET_RVALUE(exportList_, exportList) };


    // headerList Field Functions 
    bool hasHeaderList() const { return this->headerList_ != nullptr;};
    void deleteHeaderList() { this->headerList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList> & headerList() const { DARABONBA_PTR_GET_CONST(headerList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList> headerList() { DARABONBA_PTR_GET(headerList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setHeaderList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList> & headerList) { DARABONBA_PTR_SET_VALUE(headerList_, headerList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setHeaderList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList> && headerList) { DARABONBA_PTR_SET_RVALUE(headerList_, headerList) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // redirectCountLimit Field Functions 
    bool hasRedirectCountLimit() const { return this->redirectCountLimit_ != nullptr;};
    void deleteRedirectCountLimit() { this->redirectCountLimit_ = nullptr;};
    inline int32_t redirectCountLimit() const { DARABONBA_PTR_GET_DEFAULT(redirectCountLimit_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setRedirectCountLimit(int32_t redirectCountLimit) { DARABONBA_PTR_SET_VALUE(redirectCountLimit_, redirectCountLimit) };


    // timeoutInSecond Field Functions 
    bool hasTimeoutInSecond() const { return this->timeoutInSecond_ != nullptr;};
    void deleteTimeoutInSecond() { this->timeoutInSecond_ = nullptr;};
    inline int32_t timeoutInSecond() const { DARABONBA_PTR_GET_DEFAULT(timeoutInSecond_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setTimeoutInSecond(int32_t timeoutInSecond) { DARABONBA_PTR_SET_VALUE(timeoutInSecond_, timeoutInSecond) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The ID of the API operation.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API operation.
    std::shared_ptr<string> apiName_ = nullptr;
    // The request body.
    std::shared_ptr<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListBody> body_ = nullptr;
    // The checkpoints of the API operation.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListCheckPointList>> checkPointList_ = nullptr;
    // The export parameters.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListExportList>> exportList_ = nullptr;
    // The headers.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotRelationListApiListHeaderList>> headerList_ = nullptr;
    // The method of the request.
    std::shared_ptr<string> method_ = nullptr;
    // The number of redirections.
    std::shared_ptr<int32_t> redirectCountLimit_ = nullptr;
    // The timeout period.
    std::shared_ptr<int32_t> timeoutInSecond_ = nullptr;
    // The URL to which the API request is sent.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
