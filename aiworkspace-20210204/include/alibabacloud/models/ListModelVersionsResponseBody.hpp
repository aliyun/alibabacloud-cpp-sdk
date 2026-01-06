// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModelVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListModelVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListModelVersionsResponseBody() = default ;
    ListModelVersionsResponseBody(const ListModelVersionsResponseBody &) = default ;
    ListModelVersionsResponseBody(ListModelVersionsResponseBody &&) = default ;
    ListModelVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelVersionsResponseBody() = default ;
    ListModelVersionsResponseBody& operator=(const ListModelVersionsResponseBody &) = default ;
    ListModelVersionsResponseBody& operator=(ListModelVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->versions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<ModelVersion> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<ModelVersion>) };
    inline vector<ModelVersion> getVersions() { DARABONBA_PTR_GET(versions_, vector<ModelVersion>) };
    inline ListModelVersionsResponseBody& setVersions(const vector<ModelVersion> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListModelVersionsResponseBody& setVersions(vector<ModelVersion> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of model versions.
    shared_ptr<int64_t> totalCount_ {};
    // The model versions.
    shared_ptr<vector<ModelVersion>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
