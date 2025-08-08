// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOOLSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOOLSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ListToolsetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListToolsetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(labelSelector, labelSelector_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListToolsetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(labelSelector, labelSelector_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListToolsetsRequest() = default ;
    ListToolsetsRequest(const ListToolsetsRequest &) = default ;
    ListToolsetsRequest(ListToolsetsRequest &&) = default ;
    ListToolsetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListToolsetsRequest() = default ;
    ListToolsetsRequest& operator=(const ListToolsetsRequest &) = default ;
    ListToolsetsRequest& operator=(ListToolsetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->labelSelector_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListToolsetsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // labelSelector Field Functions 
    bool hasLabelSelector() const { return this->labelSelector_ != nullptr;};
    void deleteLabelSelector() { this->labelSelector_ = nullptr;};
    inline const vector<string> & labelSelector() const { DARABONBA_PTR_GET_CONST(labelSelector_, vector<string>) };
    inline vector<string> labelSelector() { DARABONBA_PTR_GET(labelSelector_, vector<string>) };
    inline ListToolsetsRequest& setLabelSelector(const vector<string> & labelSelector) { DARABONBA_PTR_SET_VALUE(labelSelector_, labelSelector) };
    inline ListToolsetsRequest& setLabelSelector(vector<string> && labelSelector) { DARABONBA_PTR_SET_RVALUE(labelSelector_, labelSelector) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListToolsetsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListToolsetsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<vector<string>> labelSelector_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
