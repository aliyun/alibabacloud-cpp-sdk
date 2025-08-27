// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_USERQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class UserQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modified_time_greater_or_equal_than, modifiedTimeGreaterOrEqualThan_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(page_token, pageToken_);
      DARABONBA_PTR_TO_JSON(third_part_job_no, thirdPartJobNo_);
    };
    friend void from_json(const Darabonba::Json& j, UserQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modified_time_greater_or_equal_than, modifiedTimeGreaterOrEqualThan_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(page_token, pageToken_);
      DARABONBA_PTR_FROM_JSON(third_part_job_no, thirdPartJobNo_);
    };
    UserQueryRequest() = default ;
    UserQueryRequest(const UserQueryRequest &) = default ;
    UserQueryRequest(UserQueryRequest &&) = default ;
    UserQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserQueryRequest() = default ;
    UserQueryRequest& operator=(const UserQueryRequest &) = default ;
    UserQueryRequest& operator=(UserQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modifiedTimeGreaterOrEqualThan_ != nullptr
        && this->pageSize_ != nullptr && this->pageToken_ != nullptr && this->thirdPartJobNo_ != nullptr; };
    // modifiedTimeGreaterOrEqualThan Field Functions 
    bool hasModifiedTimeGreaterOrEqualThan() const { return this->modifiedTimeGreaterOrEqualThan_ != nullptr;};
    void deleteModifiedTimeGreaterOrEqualThan() { this->modifiedTimeGreaterOrEqualThan_ = nullptr;};
    inline string modifiedTimeGreaterOrEqualThan() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGreaterOrEqualThan_, "") };
    inline UserQueryRequest& setModifiedTimeGreaterOrEqualThan(string modifiedTimeGreaterOrEqualThan) { DARABONBA_PTR_SET_VALUE(modifiedTimeGreaterOrEqualThan_, modifiedTimeGreaterOrEqualThan) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline UserQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageToken Field Functions 
    bool hasPageToken() const { return this->pageToken_ != nullptr;};
    void deletePageToken() { this->pageToken_ = nullptr;};
    inline string pageToken() const { DARABONBA_PTR_GET_DEFAULT(pageToken_, "") };
    inline UserQueryRequest& setPageToken(string pageToken) { DARABONBA_PTR_SET_VALUE(pageToken_, pageToken) };


    // thirdPartJobNo Field Functions 
    bool hasThirdPartJobNo() const { return this->thirdPartJobNo_ != nullptr;};
    void deleteThirdPartJobNo() { this->thirdPartJobNo_ = nullptr;};
    inline string thirdPartJobNo() const { DARABONBA_PTR_GET_DEFAULT(thirdPartJobNo_, "") };
    inline UserQueryRequest& setThirdPartJobNo(string thirdPartJobNo) { DARABONBA_PTR_SET_VALUE(thirdPartJobNo_, thirdPartJobNo) };


  protected:
    std::shared_ptr<string> modifiedTimeGreaterOrEqualThan_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> pageToken_ = nullptr;
    std::shared_ptr<string> thirdPartJobNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
