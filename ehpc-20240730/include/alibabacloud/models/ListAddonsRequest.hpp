// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAddonsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonIds, addonIds_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonIds, addonIds_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListAddonsRequest() = default ;
    ListAddonsRequest(const ListAddonsRequest &) = default ;
    ListAddonsRequest(ListAddonsRequest &&) = default ;
    ListAddonsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsRequest() = default ;
    ListAddonsRequest& operator=(const ListAddonsRequest &) = default ;
    ListAddonsRequest& operator=(ListAddonsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonIds_ == nullptr
        && return this->clusterId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // addonIds Field Functions 
    bool hasAddonIds() const { return this->addonIds_ != nullptr;};
    void deleteAddonIds() { this->addonIds_ = nullptr;};
    inline const vector<string> & addonIds() const { DARABONBA_PTR_GET_CONST(addonIds_, vector<string>) };
    inline vector<string> addonIds() { DARABONBA_PTR_GET(addonIds_, vector<string>) };
    inline ListAddonsRequest& setAddonIds(const vector<string> & addonIds) { DARABONBA_PTR_SET_VALUE(addonIds_, addonIds) };
    inline ListAddonsRequest& setAddonIds(vector<string> && addonIds) { DARABONBA_PTR_SET_RVALUE(addonIds_, addonIds) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListAddonsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAddonsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAddonsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The addon IDs.
    std::shared_ptr<vector<string>> addonIds_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The page number of the page to return. Default value: 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
