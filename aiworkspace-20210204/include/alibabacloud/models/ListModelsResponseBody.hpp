// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Model.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelsResponseBody() = default ;
    ListModelsResponseBody(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody(ListModelsResponseBody &&) = default ;
    ListModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBody() = default ;
    ListModelsResponseBody& operator=(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody& operator=(ListModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->models_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<Model> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<Model>) };
    inline vector<Model> getModels() { DARABONBA_PTR_GET(models_, vector<Model>) };
    inline ListModelsResponseBody& setModels(const vector<Model> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListModelsResponseBody& setModels(vector<Model> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The models.
    shared_ptr<vector<Model>> models_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of models.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
