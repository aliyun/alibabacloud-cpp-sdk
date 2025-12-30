// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIdsShrink_);
      DARABONBA_PTR_TO_JSON(ClusterNames, clusterNamesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterNames, clusterNamesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListClustersShrinkRequest() = default ;
    ListClustersShrinkRequest(const ListClustersShrinkRequest &) = default ;
    ListClustersShrinkRequest(ListClustersShrinkRequest &&) = default ;
    ListClustersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersShrinkRequest() = default ;
    ListClustersShrinkRequest& operator=(const ListClustersShrinkRequest &) = default ;
    ListClustersShrinkRequest& operator=(ListClustersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIdsShrink_ == nullptr
        && this->clusterNamesShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // clusterIdsShrink Field Functions 
    bool hasClusterIdsShrink() const { return this->clusterIdsShrink_ != nullptr;};
    void deleteClusterIdsShrink() { this->clusterIdsShrink_ = nullptr;};
    inline string getClusterIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterIdsShrink_, "") };
    inline ListClustersShrinkRequest& setClusterIdsShrink(string clusterIdsShrink) { DARABONBA_PTR_SET_VALUE(clusterIdsShrink_, clusterIdsShrink) };


    // clusterNamesShrink Field Functions 
    bool hasClusterNamesShrink() const { return this->clusterNamesShrink_ != nullptr;};
    void deleteClusterNamesShrink() { this->clusterNamesShrink_ = nullptr;};
    inline string getClusterNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterNamesShrink_, "") };
    inline ListClustersShrinkRequest& setClusterNamesShrink(string clusterNamesShrink) { DARABONBA_PTR_SET_VALUE(clusterNamesShrink_, clusterNamesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListClustersShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClustersShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The cluster IDs. You can specify up to 20 IDs.
    shared_ptr<string> clusterIdsShrink_ {};
    // The cluster names. You can specify up to 20 names.
    shared_ptr<string> clusterNamesShrink_ {};
    // The page number of the page to return. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 10 to 100. Default value: 10
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
