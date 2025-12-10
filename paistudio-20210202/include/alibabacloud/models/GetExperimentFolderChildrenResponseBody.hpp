// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTFOLDERCHILDRENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTFOLDERCHILDRENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExperimentFolderChildrenResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentFolderChildrenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentFolderChildrenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentFolderChildrenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetExperimentFolderChildrenResponseBody() = default ;
    GetExperimentFolderChildrenResponseBody(const GetExperimentFolderChildrenResponseBody &) = default ;
    GetExperimentFolderChildrenResponseBody(GetExperimentFolderChildrenResponseBody &&) = default ;
    GetExperimentFolderChildrenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentFolderChildrenResponseBody() = default ;
    GetExperimentFolderChildrenResponseBody& operator=(const GetExperimentFolderChildrenResponseBody &) = default ;
    GetExperimentFolderChildrenResponseBody& operator=(GetExperimentFolderChildrenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetExperimentFolderChildrenResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<GetExperimentFolderChildrenResponseBodyItems>) };
    inline vector<GetExperimentFolderChildrenResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<GetExperimentFolderChildrenResponseBodyItems>) };
    inline GetExperimentFolderChildrenResponseBody& setItems(const vector<GetExperimentFolderChildrenResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetExperimentFolderChildrenResponseBody& setItems(vector<GetExperimentFolderChildrenResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentFolderChildrenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetExperimentFolderChildrenResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<GetExperimentFolderChildrenResponseBodyItems>> items_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
