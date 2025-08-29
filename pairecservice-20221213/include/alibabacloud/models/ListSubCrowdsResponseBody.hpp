// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBCROWDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBCROWDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSubCrowdsResponseBodySubCrowds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListSubCrowdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubCrowdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubCrowds, subCrowds_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubCrowdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubCrowds, subCrowds_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSubCrowdsResponseBody() = default ;
    ListSubCrowdsResponseBody(const ListSubCrowdsResponseBody &) = default ;
    ListSubCrowdsResponseBody(ListSubCrowdsResponseBody &&) = default ;
    ListSubCrowdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubCrowdsResponseBody() = default ;
    ListSubCrowdsResponseBody& operator=(const ListSubCrowdsResponseBody &) = default ;
    ListSubCrowdsResponseBody& operator=(ListSubCrowdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->subCrowds_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubCrowdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subCrowds Field Functions 
    bool hasSubCrowds() const { return this->subCrowds_ != nullptr;};
    void deleteSubCrowds() { this->subCrowds_ = nullptr;};
    inline const vector<ListSubCrowdsResponseBodySubCrowds> & subCrowds() const { DARABONBA_PTR_GET_CONST(subCrowds_, vector<ListSubCrowdsResponseBodySubCrowds>) };
    inline vector<ListSubCrowdsResponseBodySubCrowds> subCrowds() { DARABONBA_PTR_GET(subCrowds_, vector<ListSubCrowdsResponseBodySubCrowds>) };
    inline ListSubCrowdsResponseBody& setSubCrowds(const vector<ListSubCrowdsResponseBodySubCrowds> & subCrowds) { DARABONBA_PTR_SET_VALUE(subCrowds_, subCrowds) };
    inline ListSubCrowdsResponseBody& setSubCrowds(vector<ListSubCrowdsResponseBodySubCrowds> && subCrowds) { DARABONBA_PTR_SET_RVALUE(subCrowds_, subCrowds) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSubCrowdsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListSubCrowdsResponseBodySubCrowds>> subCrowds_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
