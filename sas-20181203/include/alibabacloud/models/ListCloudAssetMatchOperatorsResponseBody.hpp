// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDASSETMATCHOPERATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudAssetMatchOperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAssetMatchOperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MatchTypeOperators, matchTypeOperators_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAssetMatchOperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchTypeOperators, matchTypeOperators_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudAssetMatchOperatorsResponseBody() = default ;
    ListCloudAssetMatchOperatorsResponseBody(const ListCloudAssetMatchOperatorsResponseBody &) = default ;
    ListCloudAssetMatchOperatorsResponseBody(ListCloudAssetMatchOperatorsResponseBody &&) = default ;
    ListCloudAssetMatchOperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAssetMatchOperatorsResponseBody() = default ;
    ListCloudAssetMatchOperatorsResponseBody& operator=(const ListCloudAssetMatchOperatorsResponseBody &) = default ;
    ListCloudAssetMatchOperatorsResponseBody& operator=(ListCloudAssetMatchOperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchTypeOperators_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // matchTypeOperators Field Functions 
    bool hasMatchTypeOperators() const { return this->matchTypeOperators_ != nullptr;};
    void deleteMatchTypeOperators() { this->matchTypeOperators_ = nullptr;};
    inline const vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators> & matchTypeOperators() const { DARABONBA_PTR_GET_CONST(matchTypeOperators_, vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators>) };
    inline vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators> matchTypeOperators() { DARABONBA_PTR_GET(matchTypeOperators_, vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators>) };
    inline ListCloudAssetMatchOperatorsResponseBody& setMatchTypeOperators(const vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators> & matchTypeOperators) { DARABONBA_PTR_SET_VALUE(matchTypeOperators_, matchTypeOperators) };
    inline ListCloudAssetMatchOperatorsResponseBody& setMatchTypeOperators(vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators> && matchTypeOperators) { DARABONBA_PTR_SET_RVALUE(matchTypeOperators_, matchTypeOperators) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAssetMatchOperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudAssetMatchOperatorsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // List of operator types
    std::shared_ptr<vector<ListCloudAssetMatchOperatorsResponseBodyMatchTypeOperators>> matchTypeOperators_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
