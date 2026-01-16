// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPPOOLLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpPoolListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpPoolListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpPoolListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DedicatedIpPoolListRequest() = default ;
    DedicatedIpPoolListRequest(const DedicatedIpPoolListRequest &) = default ;
    DedicatedIpPoolListRequest(DedicatedIpPoolListRequest &&) = default ;
    DedicatedIpPoolListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpPoolListRequest() = default ;
    DedicatedIpPoolListRequest& operator=(const DedicatedIpPoolListRequest &) = default ;
    DedicatedIpPoolListRequest& operator=(DedicatedIpPoolListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && this->keyword_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline DedicatedIpPoolListRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DedicatedIpPoolListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DedicatedIpPoolListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DedicatedIpPoolListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<bool> all_ {};
    // Search keyword for the name
    shared_ptr<string> keyword_ {};
    // Page index, starting from 1
    shared_ptr<int32_t> pageIndex_ {};
    // Number of items per page
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
