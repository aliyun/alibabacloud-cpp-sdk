// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCRONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCRONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyCronDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyCronDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyCronDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyCronDetailRequest() = default ;
    DescribePropertyCronDetailRequest(const DescribePropertyCronDetailRequest &) = default ;
    DescribePropertyCronDetailRequest(DescribePropertyCronDetailRequest &&) = default ;
    DescribePropertyCronDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyCronDetailRequest() = default ;
    DescribePropertyCronDetailRequest& operator=(const DescribePropertyCronDetailRequest &) = default ;
    DescribePropertyCronDetailRequest& operator=(DescribePropertyCronDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->extend_ == nullptr && return this->nextToken_ == nullptr && return this->pageSize_ == nullptr && return this->remark_ == nullptr && return this->source_ == nullptr
        && return this->useNextToken_ == nullptr && return this->user_ == nullptr && return this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyCronDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribePropertyCronDetailRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePropertyCronDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyCronDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertyCronDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePropertyCronDetailRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool useNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribePropertyCronDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyCronDetailRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyCronDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether fuzzy search by path to the scheduled task is supported. If you want to use fuzzy search, set the parameter to **1**. If you set the parameter to a different value or leave the parameter empty, fuzzy search is not supported.
    std::shared_ptr<string> extend_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name or IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The path to the scheduled task.
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<bool> useNextToken_ = nullptr;
    // The username of the account that runs the scheduled task.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
