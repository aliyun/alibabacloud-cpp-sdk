// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEventRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(termContent, termContent_);
      DARABONBA_PTR_TO_JSON(termType, termType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(termContent, termContent_);
      DARABONBA_PTR_FROM_JSON(termType, termType_);
    };
    ListEventRecordsRequest() = default ;
    ListEventRecordsRequest(const ListEventRecordsRequest &) = default ;
    ListEventRecordsRequest(ListEventRecordsRequest &&) = default ;
    ListEventRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventRecordsRequest() = default ;
    ListEventRecordsRequest& operator=(const ListEventRecordsRequest &) = default ;
    ListEventRecordsRequest& operator=(ListEventRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->page_ == nullptr && this->size_ == nullptr && this->termContent_ == nullptr && this->termType_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ListEventRecordsRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListEventRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListEventRecordsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListEventRecordsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // termContent Field Functions 
    bool hasTermContent() const { return this->termContent_ != nullptr;};
    void deleteTermContent() { this->termContent_ = nullptr;};
    inline string getTermContent() const { DARABONBA_PTR_GET_DEFAULT(termContent_, "") };
    inline ListEventRecordsRequest& setTermContent(string termContent) { DARABONBA_PTR_SET_VALUE(termContent_, termContent) };


    // termType Field Functions 
    bool hasTermType() const { return this->termType_ != nullptr;};
    void deleteTermType() { this->termType_ = nullptr;};
    inline string getTermType() const { DARABONBA_PTR_GET_DEFAULT(termType_, "") };
    inline ListEventRecordsRequest& setTermType(string termType) { DARABONBA_PTR_SET_VALUE(termType_, termType) };


  protected:
    shared_ptr<string> beginTime_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> termContent_ {};
    shared_ptr<string> termType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
