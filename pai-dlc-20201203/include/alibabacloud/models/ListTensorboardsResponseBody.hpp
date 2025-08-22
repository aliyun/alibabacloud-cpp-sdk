// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENSORBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTENSORBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tensorboard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListTensorboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTensorboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tensorboards, tensorboards_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTensorboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tensorboards, tensorboards_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTensorboardsResponseBody() = default ;
    ListTensorboardsResponseBody(const ListTensorboardsResponseBody &) = default ;
    ListTensorboardsResponseBody(ListTensorboardsResponseBody &&) = default ;
    ListTensorboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTensorboardsResponseBody() = default ;
    ListTensorboardsResponseBody& operator=(const ListTensorboardsResponseBody &) = default ;
    ListTensorboardsResponseBody& operator=(ListTensorboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tensorboards_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTensorboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tensorboards Field Functions 
    bool hasTensorboards() const { return this->tensorboards_ != nullptr;};
    void deleteTensorboards() { this->tensorboards_ = nullptr;};
    inline const vector<Tensorboard> & tensorboards() const { DARABONBA_PTR_GET_CONST(tensorboards_, vector<Tensorboard>) };
    inline vector<Tensorboard> tensorboards() { DARABONBA_PTR_GET(tensorboards_, vector<Tensorboard>) };
    inline ListTensorboardsResponseBody& setTensorboards(const vector<Tensorboard> & tensorboards) { DARABONBA_PTR_SET_VALUE(tensorboards_, tensorboards) };
    inline ListTensorboardsResponseBody& setTensorboards(vector<Tensorboard> && tensorboards) { DARABONBA_PTR_SET_RVALUE(tensorboards_, tensorboards) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTensorboardsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The TensorBoard instances.
    std::shared_ptr<vector<Tensorboard>> tensorboards_ = nullptr;
    // The total number of data sources that meet the conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
