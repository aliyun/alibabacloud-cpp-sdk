// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPROMPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPROMPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationPromptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationPromptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationPromptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeApplicationPromptsResponseBody() = default ;
    DescribeApplicationPromptsResponseBody(const DescribeApplicationPromptsResponseBody &) = default ;
    DescribeApplicationPromptsResponseBody(DescribeApplicationPromptsResponseBody &&) = default ;
    DescribeApplicationPromptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationPromptsResponseBody() = default ;
    DescribeApplicationPromptsResponseBody& operator=(const DescribeApplicationPromptsResponseBody &) = default ;
    DescribeApplicationPromptsResponseBody& operator=(DescribeApplicationPromptsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(PromptEnabled, promptEnabled_);
        DARABONBA_PTR_TO_JSON(PromptId, promptId_);
        DARABONBA_PTR_TO_JSON(PromptName, promptName_);
        DARABONBA_PTR_TO_JSON(PromptType, promptType_);
        DARABONBA_PTR_TO_JSON(PromptValue, promptValue_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(PromptEnabled, promptEnabled_);
        DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
        DARABONBA_PTR_FROM_JSON(PromptName, promptName_);
        DARABONBA_PTR_FROM_JSON(PromptType, promptType_);
        DARABONBA_PTR_FROM_JSON(PromptValue, promptValue_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->promptEnabled_ == nullptr
        && this->promptId_ == nullptr && this->promptName_ == nullptr && this->promptType_ == nullptr && this->promptValue_ == nullptr; };
      // promptEnabled Field Functions 
      bool hasPromptEnabled() const { return this->promptEnabled_ != nullptr;};
      void deletePromptEnabled() { this->promptEnabled_ = nullptr;};
      inline int32_t getPromptEnabled() const { DARABONBA_PTR_GET_DEFAULT(promptEnabled_, 0) };
      inline Items& setPromptEnabled(int32_t promptEnabled) { DARABONBA_PTR_SET_VALUE(promptEnabled_, promptEnabled) };


      // promptId Field Functions 
      bool hasPromptId() const { return this->promptId_ != nullptr;};
      void deletePromptId() { this->promptId_ = nullptr;};
      inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
      inline Items& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


      // promptName Field Functions 
      bool hasPromptName() const { return this->promptName_ != nullptr;};
      void deletePromptName() { this->promptName_ = nullptr;};
      inline string getPromptName() const { DARABONBA_PTR_GET_DEFAULT(promptName_, "") };
      inline Items& setPromptName(string promptName) { DARABONBA_PTR_SET_VALUE(promptName_, promptName) };


      // promptType Field Functions 
      bool hasPromptType() const { return this->promptType_ != nullptr;};
      void deletePromptType() { this->promptType_ = nullptr;};
      inline string getPromptType() const { DARABONBA_PTR_GET_DEFAULT(promptType_, "") };
      inline Items& setPromptType(string promptType) { DARABONBA_PTR_SET_VALUE(promptType_, promptType) };


      // promptValue Field Functions 
      bool hasPromptValue() const { return this->promptValue_ != nullptr;};
      void deletePromptValue() { this->promptValue_ = nullptr;};
      inline string getPromptValue() const { DARABONBA_PTR_GET_DEFAULT(promptValue_, "") };
      inline Items& setPromptValue(string promptValue) { DARABONBA_PTR_SET_VALUE(promptValue_, promptValue) };


    protected:
      shared_ptr<int32_t> promptEnabled_ {};
      shared_ptr<string> promptId_ {};
      shared_ptr<string> promptName_ {};
      shared_ptr<string> promptType_ {};
      shared_ptr<string> promptValue_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeApplicationPromptsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeApplicationPromptsResponseBody::Items>) };
    inline vector<DescribeApplicationPromptsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeApplicationPromptsResponseBody::Items>) };
    inline DescribeApplicationPromptsResponseBody& setItems(const vector<DescribeApplicationPromptsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeApplicationPromptsResponseBody& setItems(vector<DescribeApplicationPromptsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeApplicationPromptsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeApplicationPromptsResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationPromptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeApplicationPromptsResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<vector<DescribeApplicationPromptsResponseBody::Items>> items_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
