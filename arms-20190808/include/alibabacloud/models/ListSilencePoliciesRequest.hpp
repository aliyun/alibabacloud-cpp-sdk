// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSilencePoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSilencePoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListSilencePoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListSilencePoliciesRequest() = default ;
    ListSilencePoliciesRequest(const ListSilencePoliciesRequest &) = default ;
    ListSilencePoliciesRequest(ListSilencePoliciesRequest &&) = default ;
    ListSilencePoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSilencePoliciesRequest() = default ;
    ListSilencePoliciesRequest& operator=(const ListSilencePoliciesRequest &) = default ;
    ListSilencePoliciesRequest& operator=(ListSilencePoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isDetail_ != nullptr
        && this->name_ != nullptr && this->page_ != nullptr && this->regionId_ != nullptr && this->size_ != nullptr; };
    // isDetail Field Functions 
    bool hasIsDetail() const { return this->isDetail_ != nullptr;};
    void deleteIsDetail() { this->isDetail_ = nullptr;};
    inline bool isDetail() const { DARABONBA_PTR_GET_DEFAULT(isDetail_, false) };
    inline ListSilencePoliciesRequest& setIsDetail(bool isDetail) { DARABONBA_PTR_SET_VALUE(isDetail_, isDetail) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSilencePoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListSilencePoliciesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSilencePoliciesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListSilencePoliciesRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // Specifies whether to query the details of a silence policy. Valid values:
    // 
    // *   `true`: Details of the silence policy are queried.
    // *   `false`: Details about notification policies are not queried.
    std::shared_ptr<bool> isDetail_ = nullptr;
    // The name of the silence policy.
    std::shared_ptr<string> name_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
