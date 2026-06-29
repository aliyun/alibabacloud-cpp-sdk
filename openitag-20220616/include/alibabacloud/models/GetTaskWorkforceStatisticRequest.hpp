// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKWORKFORCESTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKWORKFORCESTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetTaskWorkforceStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskWorkforceStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatType, statType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskWorkforceStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatType, statType_);
    };
    GetTaskWorkforceStatisticRequest() = default ;
    GetTaskWorkforceStatisticRequest(const GetTaskWorkforceStatisticRequest &) = default ;
    GetTaskWorkforceStatisticRequest(GetTaskWorkforceStatisticRequest &&) = default ;
    GetTaskWorkforceStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskWorkforceStatisticRequest() = default ;
    GetTaskWorkforceStatisticRequest& operator=(const GetTaskWorkforceStatisticRequest &) = default ;
    GetTaskWorkforceStatisticRequest& operator=(GetTaskWorkforceStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->statType_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetTaskWorkforceStatisticRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetTaskWorkforceStatisticRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statType Field Functions 
    bool hasStatType() const { return this->statType_ != nullptr;};
    void deleteStatType() { this->statType_ = nullptr;};
    inline string getStatType() const { DARABONBA_PTR_GET_DEFAULT(statType_, "") };
    inline GetTaskWorkforceStatisticRequest& setStatType(string statType) { DARABONBA_PTR_SET_VALUE(statType_, statType) };


  protected:
    // The page number of the member list. The value starts from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of members per page in a paged query. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The statistics type. Valid values:
    // - ITEM: Statistics are collected based on individual review records.
    // - OPERATORCELL: Statistics are collected based on operation units. A single ITEM may contain multiple operation units.
    shared_ptr<string> statType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
