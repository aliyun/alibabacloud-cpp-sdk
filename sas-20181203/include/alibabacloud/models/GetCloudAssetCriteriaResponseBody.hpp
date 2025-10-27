// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETCRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETCRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCloudAssetCriteriaResponseBodyCriteriaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCloudAssetCriteriaResponseBody() = default ;
    GetCloudAssetCriteriaResponseBody(const GetCloudAssetCriteriaResponseBody &) = default ;
    GetCloudAssetCriteriaResponseBody(GetCloudAssetCriteriaResponseBody &&) = default ;
    GetCloudAssetCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetCriteriaResponseBody() = default ;
    GetCloudAssetCriteriaResponseBody& operator=(const GetCloudAssetCriteriaResponseBody &) = default ;
    GetCloudAssetCriteriaResponseBody& operator=(GetCloudAssetCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && return this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<GetCloudAssetCriteriaResponseBodyCriteriaList> & criteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<GetCloudAssetCriteriaResponseBodyCriteriaList>) };
    inline vector<GetCloudAssetCriteriaResponseBodyCriteriaList> criteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<GetCloudAssetCriteriaResponseBodyCriteriaList>) };
    inline GetCloudAssetCriteriaResponseBody& setCriteriaList(const vector<GetCloudAssetCriteriaResponseBodyCriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline GetCloudAssetCriteriaResponseBody& setCriteriaList(vector<GetCloudAssetCriteriaResponseBodyCriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudAssetCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the information about the filter conditions that are used to search for cloud assets.
    std::shared_ptr<vector<GetCloudAssetCriteriaResponseBodyCriteriaList>> criteriaList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
