// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIMODALDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIMODALDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ListMultimodalDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultimodalDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(InputField, inputField_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultimodalDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(InputField, inputField_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListMultimodalDatasetRequest() = default ;
    ListMultimodalDatasetRequest(const ListMultimodalDatasetRequest &) = default ;
    ListMultimodalDatasetRequest(ListMultimodalDatasetRequest &&) = default ;
    ListMultimodalDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultimodalDatasetRequest() = default ;
    ListMultimodalDatasetRequest& operator=(const ListMultimodalDatasetRequest &) = default ;
    ListMultimodalDatasetRequest& operator=(ListMultimodalDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->inputField_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListMultimodalDatasetRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // inputField Field Functions 
    bool hasInputField() const { return this->inputField_ != nullptr;};
    void deleteInputField() { this->inputField_ = nullptr;};
    inline string getInputField() const { DARABONBA_PTR_GET_DEFAULT(inputField_, "") };
    inline ListMultimodalDatasetRequest& setInputField(string inputField) { DARABONBA_PTR_SET_VALUE(inputField_, inputField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMultimodalDatasetRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMultimodalDatasetRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> inputField_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
