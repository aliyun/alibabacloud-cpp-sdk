// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceListPageResponseBodyDataContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceListPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    GetServiceListPageResponseBodyData() = default ;
    GetServiceListPageResponseBodyData(const GetServiceListPageResponseBodyData &) = default ;
    GetServiceListPageResponseBodyData(GetServiceListPageResponseBodyData &&) = default ;
    GetServiceListPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListPageResponseBodyData() = default ;
    GetServiceListPageResponseBodyData& operator=(const GetServiceListPageResponseBodyData &) = default ;
    GetServiceListPageResponseBodyData& operator=(GetServiceListPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->size_ == nullptr && return this->totalElements_ == nullptr && return this->totalPages_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<Models::GetServiceListPageResponseBodyDataContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<Models::GetServiceListPageResponseBodyDataContent>) };
    inline vector<Models::GetServiceListPageResponseBodyDataContent> content() { DARABONBA_PTR_GET(content_, vector<Models::GetServiceListPageResponseBodyDataContent>) };
    inline GetServiceListPageResponseBodyData& setContent(const vector<Models::GetServiceListPageResponseBodyDataContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetServiceListPageResponseBodyData& setContent(vector<Models::GetServiceListPageResponseBodyDataContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetServiceListPageResponseBodyData& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // totalElements Field Functions 
    bool hasTotalElements() const { return this->totalElements_ != nullptr;};
    void deleteTotalElements() { this->totalElements_ = nullptr;};
    inline int32_t totalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
    inline GetServiceListPageResponseBodyData& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline GetServiceListPageResponseBodyData& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The data array that is returned.
    std::shared_ptr<vector<Models::GetServiceListPageResponseBodyDataContent>> content_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalElements_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
