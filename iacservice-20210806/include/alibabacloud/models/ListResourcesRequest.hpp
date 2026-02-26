// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(sourceValue, sourceValue_);
      DARABONBA_PTR_TO_JSON(specType, specType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(sourceValue, sourceValue_);
      DARABONBA_PTR_FROM_JSON(specType, specType_);
    };
    ListResourcesRequest() = default ;
    ListResourcesRequest(const ListResourcesRequest &) = default ;
    ListResourcesRequest(ListResourcesRequest &&) = default ;
    ListResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesRequest() = default ;
    ListResourcesRequest& operator=(const ListResourcesRequest &) = default ;
    ListResourcesRequest& operator=(ListResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->sourceType_ == nullptr && this->sourceValue_ == nullptr && this->specType_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourcesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListResourcesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceValue Field Functions 
    bool hasSourceValue() const { return this->sourceValue_ != nullptr;};
    void deleteSourceValue() { this->sourceValue_ = nullptr;};
    inline string getSourceValue() const { DARABONBA_PTR_GET_DEFAULT(sourceValue_, "") };
    inline ListResourcesRequest& setSourceValue(string sourceValue) { DARABONBA_PTR_SET_VALUE(sourceValue_, sourceValue) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline ListResourcesRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // This parameter is required.
    shared_ptr<string> sourceValue_ {};
    // This parameter is required.
    shared_ptr<string> specType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
