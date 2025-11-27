// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGDATAPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGDATAPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRenderingDataPackagesResponseBodyDataPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingDataPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingDataPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPackages, dataPackages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingDataPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPackages, dataPackages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingDataPackagesResponseBody() = default ;
    ListRenderingDataPackagesResponseBody(const ListRenderingDataPackagesResponseBody &) = default ;
    ListRenderingDataPackagesResponseBody(ListRenderingDataPackagesResponseBody &&) = default ;
    ListRenderingDataPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingDataPackagesResponseBody() = default ;
    ListRenderingDataPackagesResponseBody& operator=(const ListRenderingDataPackagesResponseBody &) = default ;
    ListRenderingDataPackagesResponseBody& operator=(ListRenderingDataPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPackages_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dataPackages Field Functions 
    bool hasDataPackages() const { return this->dataPackages_ != nullptr;};
    void deleteDataPackages() { this->dataPackages_ = nullptr;};
    inline const vector<ListRenderingDataPackagesResponseBodyDataPackages> & dataPackages() const { DARABONBA_PTR_GET_CONST(dataPackages_, vector<ListRenderingDataPackagesResponseBodyDataPackages>) };
    inline vector<ListRenderingDataPackagesResponseBodyDataPackages> dataPackages() { DARABONBA_PTR_GET(dataPackages_, vector<ListRenderingDataPackagesResponseBodyDataPackages>) };
    inline ListRenderingDataPackagesResponseBody& setDataPackages(const vector<ListRenderingDataPackagesResponseBodyDataPackages> & dataPackages) { DARABONBA_PTR_SET_VALUE(dataPackages_, dataPackages) };
    inline ListRenderingDataPackagesResponseBody& setDataPackages(vector<ListRenderingDataPackagesResponseBodyDataPackages> && dataPackages) { DARABONBA_PTR_SET_RVALUE(dataPackages_, dataPackages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingDataPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingDataPackagesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListRenderingDataPackagesResponseBodyDataPackages>> dataPackages_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
