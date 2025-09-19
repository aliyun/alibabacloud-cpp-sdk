// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRONTVULPATCHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFrontVulPatchListResponseBodyFrontPatchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeFrontVulPatchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrontVulPatchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FrontPatchList, frontPatchList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrontVulPatchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontPatchList, frontPatchList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFrontVulPatchListResponseBody() = default ;
    DescribeFrontVulPatchListResponseBody(const DescribeFrontVulPatchListResponseBody &) = default ;
    DescribeFrontVulPatchListResponseBody(DescribeFrontVulPatchListResponseBody &&) = default ;
    DescribeFrontVulPatchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrontVulPatchListResponseBody() = default ;
    DescribeFrontVulPatchListResponseBody& operator=(const DescribeFrontVulPatchListResponseBody &) = default ;
    DescribeFrontVulPatchListResponseBody& operator=(DescribeFrontVulPatchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frontPatchList_ != nullptr
        && this->requestId_ != nullptr; };
    // frontPatchList Field Functions 
    bool hasFrontPatchList() const { return this->frontPatchList_ != nullptr;};
    void deleteFrontPatchList() { this->frontPatchList_ = nullptr;};
    inline const vector<DescribeFrontVulPatchListResponseBodyFrontPatchList> & frontPatchList() const { DARABONBA_PTR_GET_CONST(frontPatchList_, vector<DescribeFrontVulPatchListResponseBodyFrontPatchList>) };
    inline vector<DescribeFrontVulPatchListResponseBodyFrontPatchList> frontPatchList() { DARABONBA_PTR_GET(frontPatchList_, vector<DescribeFrontVulPatchListResponseBodyFrontPatchList>) };
    inline DescribeFrontVulPatchListResponseBody& setFrontPatchList(const vector<DescribeFrontVulPatchListResponseBodyFrontPatchList> & frontPatchList) { DARABONBA_PTR_SET_VALUE(frontPatchList_, frontPatchList) };
    inline DescribeFrontVulPatchListResponseBody& setFrontPatchList(vector<DescribeFrontVulPatchListResponseBodyFrontPatchList> && frontPatchList) { DARABONBA_PTR_SET_RVALUE(frontPatchList_, frontPatchList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFrontVulPatchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the information about the pre-patches that are required to fix the specified Windows system vulnerability.
    std::shared_ptr<vector<DescribeFrontVulPatchListResponseBodyFrontPatchList>> frontPatchList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
