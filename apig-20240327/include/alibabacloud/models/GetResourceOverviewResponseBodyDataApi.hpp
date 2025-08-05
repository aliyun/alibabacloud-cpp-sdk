// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATAAPI_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATAAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewResponseBodyDataApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewResponseBodyDataApi& obj) { 
      DARABONBA_PTR_TO_JSON(publishedCount, publishedCount_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewResponseBodyDataApi& obj) { 
      DARABONBA_PTR_FROM_JSON(publishedCount, publishedCount_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetResourceOverviewResponseBodyDataApi() = default ;
    GetResourceOverviewResponseBodyDataApi(const GetResourceOverviewResponseBodyDataApi &) = default ;
    GetResourceOverviewResponseBodyDataApi(GetResourceOverviewResponseBodyDataApi &&) = default ;
    GetResourceOverviewResponseBodyDataApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewResponseBodyDataApi() = default ;
    GetResourceOverviewResponseBodyDataApi& operator=(const GetResourceOverviewResponseBodyDataApi &) = default ;
    GetResourceOverviewResponseBodyDataApi& operator=(GetResourceOverviewResponseBodyDataApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->publishedCount_ != nullptr
        && this->totalCount_ != nullptr; };
    // publishedCount Field Functions 
    bool hasPublishedCount() const { return this->publishedCount_ != nullptr;};
    void deletePublishedCount() { this->publishedCount_ = nullptr;};
    inline int64_t publishedCount() const { DARABONBA_PTR_GET_DEFAULT(publishedCount_, 0L) };
    inline GetResourceOverviewResponseBodyDataApi& setPublishedCount(int64_t publishedCount) { DARABONBA_PTR_SET_VALUE(publishedCount_, publishedCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetResourceOverviewResponseBodyDataApi& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of published APIs.
    std::shared_ptr<int64_t> publishedCount_ = nullptr;
    // Number of APIs.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
