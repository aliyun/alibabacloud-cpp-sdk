// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTYIKEWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTYIKEWORKSPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class ListYikeWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListYikeWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListYikeWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListYikeWorkspacesRequest() = default ;
    ListYikeWorkspacesRequest(const ListYikeWorkspacesRequest &) = default ;
    ListYikeWorkspacesRequest(ListYikeWorkspacesRequest &&) = default ;
    ListYikeWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListYikeWorkspacesRequest() = default ;
    ListYikeWorkspacesRequest& operator=(const ListYikeWorkspacesRequest &) = default ;
    ListYikeWorkspacesRequest& operator=(ListYikeWorkspacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListYikeWorkspacesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListYikeWorkspacesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
