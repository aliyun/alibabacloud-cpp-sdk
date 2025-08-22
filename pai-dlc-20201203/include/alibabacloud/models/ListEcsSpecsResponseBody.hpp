// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EcsSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListEcsSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEcsSpecsResponseBody() = default ;
    ListEcsSpecsResponseBody(const ListEcsSpecsResponseBody &) = default ;
    ListEcsSpecsResponseBody(ListEcsSpecsResponseBody &&) = default ;
    ListEcsSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsSpecsResponseBody() = default ;
    ListEcsSpecsResponseBody& operator=(const ListEcsSpecsResponseBody &) = default ;
    ListEcsSpecsResponseBody& operator=(ListEcsSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsSpecs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<EcsSpec> & ecsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<EcsSpec>) };
    inline vector<EcsSpec> ecsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<EcsSpec>) };
    inline ListEcsSpecsResponseBody& setEcsSpecs(const vector<EcsSpec> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline ListEcsSpecsResponseBody& setEcsSpecs(vector<EcsSpec> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEcsSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEcsSpecsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of ECS specifications.
    std::shared_ptr<vector<EcsSpec>> ecsSpecs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of types that meet the filter conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
