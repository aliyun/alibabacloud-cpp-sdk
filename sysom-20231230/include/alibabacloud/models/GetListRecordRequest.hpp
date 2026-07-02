// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLISTRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetListRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(customId, customId_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, GetListRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(customId, customId_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    GetListRecordRequest() = default ;
    GetListRecordRequest(const GetListRecordRequest &) = default ;
    GetListRecordRequest(GetListRecordRequest &&) = default ;
    GetListRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListRecordRequest() = default ;
    GetListRecordRequest& operator=(const GetListRecordRequest &) = default ;
    GetListRecordRequest& operator=(GetListRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisId_ == nullptr
        && this->current_ == nullptr && this->customId_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline string getAnalysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
    inline GetListRecordRequest& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline GetListRecordRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline int64_t getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, 0L) };
    inline GetListRecordRequest& setCustomId(int64_t customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetListRecordRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetListRecordRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    shared_ptr<string> analysisId_ {};
    // The current page number.
    shared_ptr<int64_t> current_ {};
    shared_ptr<int64_t> customId_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
