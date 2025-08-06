// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALGORITHMVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALGORITHMVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlgorithmVersionsResponseBodyAlgorithmVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListAlgorithmVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlgorithmVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmVersions, algorithmVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlgorithmVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmVersions, algorithmVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlgorithmVersionsResponseBody() = default ;
    ListAlgorithmVersionsResponseBody(const ListAlgorithmVersionsResponseBody &) = default ;
    ListAlgorithmVersionsResponseBody(ListAlgorithmVersionsResponseBody &&) = default ;
    ListAlgorithmVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlgorithmVersionsResponseBody() = default ;
    ListAlgorithmVersionsResponseBody& operator=(const ListAlgorithmVersionsResponseBody &) = default ;
    ListAlgorithmVersionsResponseBody& operator=(ListAlgorithmVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithmVersions_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // algorithmVersions Field Functions 
    bool hasAlgorithmVersions() const { return this->algorithmVersions_ != nullptr;};
    void deleteAlgorithmVersions() { this->algorithmVersions_ = nullptr;};
    inline const vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions> & algorithmVersions() const { DARABONBA_PTR_GET_CONST(algorithmVersions_, vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions>) };
    inline vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions> algorithmVersions() { DARABONBA_PTR_GET(algorithmVersions_, vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions>) };
    inline ListAlgorithmVersionsResponseBody& setAlgorithmVersions(const vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions> & algorithmVersions) { DARABONBA_PTR_SET_VALUE(algorithmVersions_, algorithmVersions) };
    inline ListAlgorithmVersionsResponseBody& setAlgorithmVersions(vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions> && algorithmVersions) { DARABONBA_PTR_SET_RVALUE(algorithmVersions_, algorithmVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlgorithmVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAlgorithmVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListAlgorithmVersionsResponseBodyAlgorithmVersions>> algorithmVersions_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
