// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBPARTNERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBPARTNERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class GetSubPartnerListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubPartnerListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SubPartnerCompanyName, subPartnerCompanyName_);
      DARABONBA_PTR_TO_JSON(SubPartnerPid, subPartnerPid_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubPartnerListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SubPartnerCompanyName, subPartnerCompanyName_);
      DARABONBA_PTR_FROM_JSON(SubPartnerPid, subPartnerPid_);
    };
    GetSubPartnerListRequest() = default ;
    GetSubPartnerListRequest(const GetSubPartnerListRequest &) = default ;
    GetSubPartnerListRequest(GetSubPartnerListRequest &&) = default ;
    GetSubPartnerListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubPartnerListRequest() = default ;
    GetSubPartnerListRequest& operator=(const GetSubPartnerListRequest &) = default ;
    GetSubPartnerListRequest& operator=(GetSubPartnerListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->subPartnerCompanyName_ == nullptr && this->subPartnerPid_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetSubPartnerListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSubPartnerListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // subPartnerCompanyName Field Functions 
    bool hasSubPartnerCompanyName() const { return this->subPartnerCompanyName_ != nullptr;};
    void deleteSubPartnerCompanyName() { this->subPartnerCompanyName_ = nullptr;};
    inline string getSubPartnerCompanyName() const { DARABONBA_PTR_GET_DEFAULT(subPartnerCompanyName_, "") };
    inline GetSubPartnerListRequest& setSubPartnerCompanyName(string subPartnerCompanyName) { DARABONBA_PTR_SET_VALUE(subPartnerCompanyName_, subPartnerCompanyName) };


    // subPartnerPid Field Functions 
    bool hasSubPartnerPid() const { return this->subPartnerPid_ != nullptr;};
    void deleteSubPartnerPid() { this->subPartnerPid_ = nullptr;};
    inline string getSubPartnerPid() const { DARABONBA_PTR_GET_DEFAULT(subPartnerPid_, "") };
    inline GetSubPartnerListRequest& setSubPartnerPid(string subPartnerPid) { DARABONBA_PTR_SET_VALUE(subPartnerPid_, subPartnerPid) };


  protected:
    // Page index, starting from the first page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // Number of entries returned per page. Maximum value supported is 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // Tier-2 partner company name
    shared_ptr<string> subPartnerCompanyName_ {};
    // Tier-2 partner PID
    shared_ptr<string> subPartnerPid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
