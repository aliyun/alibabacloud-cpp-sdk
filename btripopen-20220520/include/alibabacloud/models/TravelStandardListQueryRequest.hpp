// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDLISTQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardListQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardListQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(rule_name, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardListQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(rule_name, ruleName_);
    };
    TravelStandardListQueryRequest() = default ;
    TravelStandardListQueryRequest(const TravelStandardListQueryRequest &) = default ;
    TravelStandardListQueryRequest(TravelStandardListQueryRequest &&) = default ;
    TravelStandardListQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardListQueryRequest() = default ;
    TravelStandardListQueryRequest& operator=(const TravelStandardListQueryRequest &) = default ;
    TravelStandardListQueryRequest& operator=(TravelStandardListQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromGroup_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->ruleName_ != nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardListQueryRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline TravelStandardListQueryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline TravelStandardListQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline TravelStandardListQueryRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<bool> fromGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
